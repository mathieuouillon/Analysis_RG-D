#include <TROOT.h>
#include <chrono>
#include <filesystem>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <vector>

#include "Core/BS_thread_pool.hpp"
#include "Core/toml.hpp"
#include "Matt_Study/Histograms.hpp"
#include "Matt_Study/Ploter.hpp"
#include "Matt_Study/RGD_Reader.hpp"
#include "Matt_Study/RunTypes.hpp"

#include "Core/Counter.hpp"
#include "Status_Study/Status_Histograms.hpp"
#include "Status_Study/Status_Ploter.hpp"
#include "Status_Study/Status_Reader.hpp"

template <typename T>
auto FormatString(const T a, int precision = 2) -> std::string {
    std::stringstream stream;
    stream << std::fixed << std::setprecision(precision) << a;
    return stream.str();
}

auto read_recursive_file_in_directory(const std::filesystem::path& directory, const float dataSize = 100) -> std::vector<std::string> {
    auto f = [](const std::filesystem::directory_entry& entry) {
        return std::string(entry.path());
    };
    auto pred = [](std::string_view fileName) {
        return fileName.find(".hipo") != std::string::npos;
    };

    std::vector<std::string> fileNames;
    std::vector<std::string> output;
    std::vector<std::string> reduceFiles;
    auto iterator = std::filesystem::recursive_directory_iterator{directory};
    std::transform(begin(iterator), end(iterator), std::back_inserter(fileNames), f);
    std::ranges::copy_if(fileNames, std::back_inserter(output), pred);
    std::ranges::sort(output);

    output.resize(static_cast<int>(dataSize / 100 * static_cast<float>(output.size())));
    return output;
}

template <class Reader>
auto multiThreadReader(const Reader& reader, const std::vector<std::string>& files, const int cores = 6) -> void {
    auto begin = std::chrono::high_resolution_clock::now();
    BS::synced_stream sync_out;
    BS::thread_pool pool(cores);
    for (auto& file : files)
        pool.push_task(reader, file);
    auto total = static_cast<float>(pool.get_tasks_total());

    while (true) {
        pool.wait_for_tasks_duration(std::chrono::seconds(5));
        if (pool.get_tasks_total() > 0)
            std::cout << "Process : " << FormatString((1. - static_cast<double>(pool.get_tasks_total()) / total) * 100) << "% " << pool.get_tasks_total() << " tasks total."
                      << std::endl;
        else
            break;
    }
    pool.wait_for_tasks();
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Process : " << FormatString((1. - static_cast<double>(pool.get_tasks_total()) / total) * 100) << "% " << pool.get_tasks_total() << " tasks total." << std::endl;
    std::cout << "Done in " << std::chrono::duration_cast<std::chrono::seconds>(end - begin).count() << "s" << std::endl;
}

template <class Reader>
auto singleThreadReader(Reader& reader, std::vector<std::string> files, int nMax = 2) -> void {
    for (int i = 0; i < files.size() || i <= nMax; ++i) {
        reader(files.at(i));
    }
}

auto main(int argc, char* argv[]) -> int {

    ROOT::EnableThreadSafety();  // To stop random errors in multithread mode

    // --------------------------------------------------------------------------------------------
    // Matt study :
    // -------------------------------------------------------------------------------

    double nb_electron_CxC = 0;
    double nb_electron_LD2 = 0;


    // Carbon runs :
    const toml::table CxC_config = toml::parse_file("/work/clas12/ouillon/Analysis_RG-D/config/CxC_config.toml");
    std::vector<std::string> files_CxC = read_recursive_file_in_directory("/cache/hallb/scratch/rg-d/production/Bspot/v5dstCxC/dst/recon/", 100);
    std::cout << "size CxC runs : " << files_CxC.size() << std::endl;
    std::map<std::string, NumberError<double>> map_yield_for_Q2_bins_for_CxC;

    std::vector<std::string> runs = {
        "018440", "018441", "018442", "018443", "018444", "018445", "018475", "018498", "018524",
        "018756", "018850"};
    std::vector<std::string> outbending_files_CxC;
    for (auto& s1 : files_CxC) {
        for (auto& s2 : runs) {
            if (s1.find(s2) != std::string::npos) {
                outbending_files_CxC.push_back(s1);
            }
        }
    }

    std::cout << "size outbending CxC runs : " << outbending_files_CxC.size() << std::endl;

    // Gets all the runs used :
    std::set<std::string> runs_list;
    for (auto s : files_CxC) {
        runs_list.insert(s.substr(62, 6));
    }

    std::cout << "CxC runs list : ";
    for (auto& s : runs_list) {
        std::cout << s << ", ";
    }
    std::cout << std::endl;

    Counter counter;
    auto histograms = Histograms();
    Matt_Study::Reader reader(histograms, counter, CxC_config);
    multiThreadReader(reader, outbending_files_CxC, 20);
    map_yield_for_Q2_bins_for_CxC = ploter(histograms, RunTypes::CxC, CxC_config);

    nb_electron_CxC = counter.nb_total_event;

    std::cout << "nb electron : " << counter.nb_e << std::endl;

    std::cout << "nb_total_event : " << counter.nb_total_event << std::endl;
    std::cout << "nb_event_with_e_pp_pm : " << counter.nb_event_with_e_pp_pm << "ratio : " << static_cast<double>(counter.nb_event_with_e_pp_pm) / static_cast<double>(counter.nb_total_event) << std::endl;
    std::cout << "nb_good_electron_event : " << counter.nb_good_electron_event << " ratio : " << static_cast<double>(counter.nb_good_electron_event) / static_cast<double>(counter.nb_event_with_e_pp_pm) << std::endl;
    std::cout << "nb_good_pion_plus : " << counter.nb_good_pion_plus << std::endl;
    std::cout << "nb_good_minus_plus : " << counter.nb_good_minus_plus << std::endl;
    std::cout << "nb_good_rho0 : " << counter.nb_good_rho0 << std::endl;
    std::cout << "nb_good_rho0_W : " << counter.nb_good_rho0_W << " ratio : " << static_cast<double>(counter.nb_good_rho0_W) / static_cast<double>(counter.nb_good_rho0) << std::endl;
    std::cout << "nb_good_rho0_W_zh : " << counter.nb_good_rho0_W_zh << " ratio : " << static_cast<double>(counter.nb_good_rho0_W_zh) / static_cast<double>(counter.nb_good_rho0_W) << std::endl;
    std::cout << "nb_good_rho0_W_zh_t : " << counter.nb_good_rho0_W_zh_t << " ratio : " << static_cast<double>(counter.nb_good_rho0_W_zh_t) / static_cast<double>(counter.nb_good_rho0_W_zh) << std::endl;
    std::cout << "nb_good_rho0_W_zh_t_lc : " << counter.nb_good_rho0_W_zh_t_lc << " ratio : " << static_cast<double>(counter.nb_good_rho0_W_zh_t_lc) / static_cast<double>(counter.nb_good_rho0_W_zh_t) << std::endl;
    std::cout << "nb_good_rho0_W_zh_t_Q2 : " << counter.nb_good_rho0_W_zh_t_Q2 << std::endl;

    std::cout << "nb_pion_plus : " << counter.nb_pion_plus << std::endl;
    std::cout << "nb_pion_plus_pass_chi2 : " << counter.nb_pion_plus_pass_chi2 << "ratio : " << static_cast<double>(counter.nb_pion_plus_pass_chi2) / static_cast<double>(counter.nb_pion_plus) << std::endl;
    std::cout << "nb_pion_plus_not_pass_chi2 : " << counter.nb_pion_plus_not_pass_chi2 << "ratio : " << static_cast<double>(counter.nb_pion_plus_not_pass_chi2) / static_cast<double>(counter.nb_pion_plus) << std::endl;

    std::cout << "nb_pion_minus : " << counter.nb_pion_minus << std::endl;
    std::cout << "nb_pion_plus_pass_chi2 : " << counter.nb_pion_minus_pass_chi2 << "ratio : " << static_cast<double>(counter.nb_pion_minus_pass_chi2) / static_cast<double>(counter.nb_pion_minus) << std::endl;
    std::cout << "nb_pion_plus_not_pass_chi2 : " << counter.nb_pion_minus_not_pass_chi2 << "ratio : " << static_cast<double>(counter.nb_pion_minus_not_pass_chi2) / static_cast<double>(counter.nb_pion_minus) << std::endl;

    std::cout << "nb_good_electron_with_good_pp_and_pm : " << counter.nb_good_electron_with_good_pp_and_pm << std::endl;
    std::cout << "nb_good_pp_with_good_electron_and_pm : " << counter.nb_good_pp_with_good_electron_and_pm << std::endl;
    std::cout << "nb_good_pm_with_good_pp_and_electron : " << counter.nb_good_pm_with_good_pp_and_electron << std::endl;

    // --------------------------------------------------------------------------------------------

    // LD2 runs :
    std::vector<std::string> runs_LD2 = {"018421", "018429", "018439", "018656", "019058", "018424", "018431", "018528", "018851",
                                     "018427", "018432", "018559", "018873", "018419", "018428", "018433", "018644", "019021"};
    std::vector<std::string> files_LD2 = read_recursive_file_in_directory("/cache/hallb/scratch/rg-d/production/Bspot/v5dstLD2/dst/recon/", 100);
    std::map<std::string, NumberError<double>> map_yield_for_Q2_bins_for_LD2;
    const toml::table LD2_config = toml::parse_file("/work/clas12/ouillon/Analysis_RG-D/config/CxC_config.toml");

    std::vector<std::string> outbending_files_LD2;
    for (auto& s1 : files_LD2) {
        for (auto& s2 : runs_LD2) {
            if (s1.find(s2) != std::string::npos) {
                outbending_files_LD2.push_back(s1);
            }
        }
    }

    std::cout << "size LD2 runs : " << outbending_files_LD2.size() << std::endl;

    // Gets all the runs used :
    std::set<std::string> LD2_runs_list;
    for (auto& s : outbending_files_LD2) {
        // std::cout << "files : " << s << std::endl;
        // std::cout << "substring : " << s.substr(62,6) << std::endl;
        LD2_runs_list.insert(s.substr(62, 6));
    }

    std::cout << "LD2 runs list : ";
    for (auto& s : LD2_runs_list)
        std::cout << s << ", ";
    std::cout << std::endl;

    {
        Counter counter;
        auto histograms = Histograms();
        Matt_Study::Reader reader(histograms, counter, LD2_config);
        multiThreadReader(reader, outbending_files_LD2, 20);
        map_yield_for_Q2_bins_for_LD2 = ploter(histograms, RunTypes::LD2, LD2_config);

        nb_electron_LD2 = counter.nb_total_event;

        std::cout << "nb electron : " << counter.nb_e << std::endl;
        std::cout << "nb_pion_plus : " << counter.nb_pion_plus << std::endl;
        std::cout << "nb_pion_minus : " << counter.nb_pion_minus << std::endl;
        std::cout << "nb_pion_plus_forward : " << counter.nb_pion_plus_forward << std::endl;
        std::cout << "nb_pion_plus_central : " << counter.nb_pion_plus_central << std::endl;
        std::cout << "nb_pion_minus_forward : " << counter.nb_pion_minus_forward << std::endl;
        std::cout << "nb_pion_minus_central : " << counter.nb_pion_minus_central << std::endl;

        std::cout << "nb_total_event : " << counter.nb_total_event << std::endl;
        std::cout << "nb_event_with_e_pp_pm : " << counter.nb_event_with_e_pp_pm
                  << " ratio : " << static_cast<double>(counter.nb_event_with_e_pp_pm) / static_cast<double>(counter.nb_total_event) << std::endl;
        std::cout << "nb_good_electron_event : " << counter.nb_good_electron_event << " ratio : " << static_cast<double>(counter.nb_good_electron_event) / static_cast<double>(counter.nb_event_with_e_pp_pm) << std::endl;
        std::cout << "nb_good_pion_plus : " << counter.nb_good_pion_plus << std::endl;
        std::cout << "nb_good_minus_plus : " << counter.nb_good_minus_plus << std::endl;
        std::cout << "nb_good_rho0 : " << counter.nb_good_rho0 << std::endl;
        std::cout << "nb_good_rho0_W : " << counter.nb_good_rho0_W << " ratio : " << static_cast<double>(counter.nb_good_rho0_W) / static_cast<double>(counter.nb_good_rho0)
                  << std::endl;
        std::cout << "nb_good_rho0_W_zh : " << counter.nb_good_rho0_W_zh
                  << " ratio : " << static_cast<double>(counter.nb_good_rho0_W_zh) / static_cast<double>(counter.nb_good_rho0_W) << std::endl;
        std::cout << "nb_good_rho0_W_zh_t : " << counter.nb_good_rho0_W_zh_t
                  << " ratio : " << static_cast<double>(counter.nb_good_rho0_W_zh_t) / static_cast<double>(counter.nb_good_rho0_W_zh) << std::endl;
        std::cout << "nb_good_rho0_W_zh_t_lc : " << counter.nb_good_rho0_W_zh_t_lc
                  << " ratio : " << static_cast<double>(counter.nb_good_rho0_W_zh_t_lc) / static_cast<double>(counter.nb_good_rho0_W_zh_t) << std::endl;
        std::cout << "nb_good_rho0_W_zh_t_Q2 : " << counter.nb_good_rho0_W_zh_t_Q2 << std::endl;

        std::cout << "nb_pion_plus : " << counter.nb_pion_plus << std::endl;
        std::cout << "nb_pion_plus_pass_chi2 : " << counter.nb_pion_plus_pass_chi2
                  << "ratio : " << static_cast<double>(counter.nb_pion_plus_pass_chi2) / static_cast<double>(counter.nb_pion_plus) << std::endl;
        std::cout << "nb_pion_plus_not_pass_chi2 : " << counter.nb_pion_plus_not_pass_chi2
                  << "ratio : " << static_cast<double>(counter.nb_pion_plus_not_pass_chi2) / static_cast<double>(counter.nb_pion_plus) << std::endl;

        std::cout << "nb_pion_minus : " << counter.nb_pion_minus << std::endl;
        std::cout << "nb_pion_plus_pass_chi2 : " << counter.nb_pion_minus_pass_chi2
                  << "ratio : " << static_cast<double>(counter.nb_pion_minus_pass_chi2) / static_cast<double>(counter.nb_pion_minus) << std::endl;
        std::cout << "nb_pion_plus_not_pass_chi2 : " << counter.nb_pion_minus_not_pass_chi2
                  << "ratio : " << static_cast<double>(counter.nb_pion_minus_not_pass_chi2) / static_cast<double>(counter.nb_pion_minus) << std::endl;

        std::cout << "nb_good_electron_with_good_pp_and_pm : " << counter.nb_good_electron_with_good_pp_and_pm << std::endl;
        std::cout << "nb_good_pp_with_good_electron_and_pm : " << counter.nb_good_pp_with_good_electron_and_pm << std::endl;
        std::cout << "nb_good_pm_with_good_pp_and_electron : " << counter.nb_good_pm_with_good_pp_and_electron << std::endl;
    }
    // --------------------------------------------------------------------------------------------

    // Compute Nuclear transparancy :
    double thinkness_CxC = 0.37;
    double density_CxC = 2.2;

    double thinkness_LD2 = 5;
    double density_LD2 = 0.164;

    auto g = new TGraphErrors();
    std::vector<double> bins_Q2 = {1, 2, 2.5, 3, 3.5, 4.5, 6};

    int i = 0;
    for (auto& [key, elm] : map_yield_for_Q2_bins_for_CxC) {
        double yield_CxC = elm.number;
        double yield_LD2 = map_yield_for_Q2_bins_for_LD2.at(key).number;

        double error_CxC = elm.error;
        double error_LD2 = map_yield_for_Q2_bins_for_LD2.at(key).error;

        std::cout << key << " yield CxC : " << yield_CxC << " yield LD2 : " << yield_LD2 << " error CxC : " << error_CxC << " error LD2 : " << error_LD2 << std::endl;
        double NuclearTransparency = yield_CxC / yield_LD2 *
                                     ((thinkness_LD2 * density_LD2 * nb_electron_LD2) / (thinkness_CxC * density_CxC * nb_electron_CxC));

        double TA = (yield_CxC / (thinkness_CxC * density_CxC)) / (yield_LD2 / (thinkness_LD2 * density_LD2));

        std::cout << "NuclearTransparency : " << NuclearTransparency << " TA : " << TA << std::endl;

        double term_error_CxC = std::pow((thinkness_LD2 * density_LD2)/(thinkness_CxC * density_CxC * yield_LD2),2) * std::pow(error_CxC,2);
        double term_error_LD2 = std::pow((yield_CxC * thinkness_LD2 * density_LD2)/(yield_LD2*yield_LD2*thinkness_CxC * density_CxC),2) * std::pow(error_LD2,2);
        double error_TA = std::sqrt(term_error_CxC + term_error_LD2);  

        std::cout << "error TA : " << error_TA << std::endl;   
        
        double testerrorTA = NuclearTransparency * std::sqrt( (std::pow(error_LD2,2)/std::pow(yield_LD2,2)) + (std::pow(error_CxC,2)/std::pow(yield_CxC,2)) ) ;                                
        std::cout << "test error TA : " << testerrorTA << std::endl;

        double errorTA_correct = NuclearTransparency * std::sqrt( (1.0/yield_CxC) + (1.0/yield_LD2)  );
        double err = ((thinkness_LD2 * density_LD2) / (thinkness_CxC * density_CxC)) * std::sqrt( (  yield_CxC * (yield_CxC + yield_LD2) ) / std::pow(yield_LD2,3) );

        std::cout << "error TA correct : " << errorTA_correct << std::endl;
        std::cout << "err : " << err << std::endl;

        double Q2_value = (bins_Q2.at(i + 1) + bins_Q2.at(i)) / 2.0;
        double error_Q2 = (bins_Q2.at(i + 1) - bins_Q2.at(i)) / 2.0;
        g->SetPoint(i, Q2_value, NuclearTransparency);
        g->SetPointError(i, error_Q2, errorTA_correct);
        i++;
    }

    std::string path =
        "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/NuclearTransparency/";
    const auto canvas = Helper::MakeCanvas();
    const auto myFileName = "NuclearTransparency";

    g->SetMarkerColor(Helper::Color::kLightBlue);
    g->SetMarkerStyle(kFullDotLarge);
    g->SetMarkerSize(1);
    g->Draw("AP");

    g->GetXaxis()->SetTitle("Q^{2}");
    g->GetYaxis()->SetTitle("T_{A}");

    Helper::SaveCanvas(canvas, path, myFileName);

    /*
  //
  --------------------------------------------------------------------------------------------
  // Status study :
  -----------------------------------------------------------------------------
  auto histograms = Status_study::Histograms();
  Status_study::Reader reader(histograms, counter);
  multiThreadReader(reader, files, 10);
  Status_study::ploter(histograms);
  std::cout << "nb nb_e_neg_status : " << counter.nb_e_neg_status << std::endl;
  std::cout << "nb_e_status_2000 : " << counter.nb_e_status_2000 << std::endl;
  */
}