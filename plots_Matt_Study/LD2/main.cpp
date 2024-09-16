#include <TROOT.h>
#include <chrono>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <vector>
#include <filesystem>
#include "Core/BS_thread_pool.hpp"
#include "Core/toml.hpp"
#include "Matt_Study/RGD_Reader.hpp"
#include "Matt_Study/Histograms.hpp"
#include "Matt_Study/Ploter.hpp"
#include "Matt_Study/RunTypes.hpp"

#include "Core/Counter.hpp"
#include "Status_Study/Status_Reader.hpp"
#include "Status_Study/Status_Histograms.hpp"
#include "Status_Study/Status_Ploter.hpp"


template<typename T>
auto FormatString(const T a, int precision = 2) -> std::string {
    std::stringstream stream;
    stream << std::fixed << std::setprecision(precision) << a;
    return stream.str();
}

auto read_recursive_file_in_directory(const std::filesystem::path &directory, const float dataSize = 100) -> std::vector<std::string> {
    auto f = [](const std::filesystem::directory_entry &entry) {return std::string(entry.path());};
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



template<class Reader>
auto multiThreadReader(const Reader &reader, const std::vector<std::string> &files, const int cores = 6) -> void {
    auto begin = std::chrono::high_resolution_clock::now();
    BS::synced_stream sync_out;
    BS::thread_pool pool(cores);
    for (auto &file: files) pool.push_task(reader, file);
    auto total = static_cast<float>(pool.get_tasks_total());

    while (true) {
        pool.wait_for_tasks_duration(std::chrono::seconds(5));
        if (pool.get_tasks_total() > 0) std::cout << "Process : " << FormatString((1. - static_cast<double>(pool.get_tasks_total()) / total) * 100)
                                                  << "% " << pool.get_tasks_total() << " tasks total." << std::endl;
        else break;
    }
    pool.wait_for_tasks();
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Process : " << FormatString((1. - static_cast<double>(pool.get_tasks_total()) / total) * 100) << "% " << pool.get_tasks_total() << " tasks total." << std::endl;
    std::cout << "Done in " << std::chrono::duration_cast<std::chrono::seconds>(end - begin).count() << "s" << std::endl;
}

template<class Reader>
auto singleThreadReader(Reader &reader, std::vector<std::string> files, int nMax = 2) -> void {
    for (int i = 0; i < files.size() || i <= nMax; ++i) {
        reader(files.at(i));
    }
}




auto main(int argc, char *argv[]) -> int {

    ROOT::EnableThreadSafety(); // To stop random errors in multithread mode


    // --------------------------------------------------------------------------------------------
    // Matt study : -------------------------------------------------------------------------------
    
    // Carbon runs :
    std::vector<std::string> files_CxC = read_recursive_file_in_directory("/cache/hallb/scratch/rg-d/production/Bspot/v5dstCxC/dst/recon/", 100);
    std::cout << "size CxC runs : " << files_CxC.size() << std::endl;
    std::map<std::string, NumberError<double>> map_yield_for_Q2_bins_for_CxC;

    {
        Counter counter;
        auto histograms = Histograms();
        Matt_Study::Reader reader(histograms, counter);
        multiThreadReader(reader, files_CxC, 20);
        map_yield_for_Q2_bins_for_CxC = ploter(histograms, RunTypes::CxC);

        std::cout << "nb electron : " << counter.nb_e << std::endl;
        std::cout << "nb_pion_plus : " << counter.nb_pion_plus << std::endl;
        std::cout << "nb_pion_minus : " << counter.nb_pion_minus << std::endl;
        std::cout << "nb_pion_plus_forward : " << counter.nb_pion_plus_forward << std::endl;
        std::cout << "nb_pion_plus_central : " << counter.nb_pion_plus_central << std::endl;  
        std::cout << "nb_pion_minus_forward : " << counter.nb_pion_minus_forward << std::endl;
        std::cout << "nb_pion_minus_central : " << counter.nb_pion_minus_central << std::endl;  
    }
    // --------------------------------------------------------------------------------------------

    
    // LD2 runs :
    std::vector<std::string> files_LD2 = read_recursive_file_in_directory("/cache/hallb/scratch/rg-d/production/Bspot/v5dstLD2/dst/recon/");
    std::cout << "size LD2 runs : " << files_LD2.size() << std::endl;
    std::map<std::string, NumberError<double>> map_yield_for_Q2_bins_for_LD2;

    {
        Counter counter;
        auto histograms = Histograms();
        Matt_Study::Reader reader(histograms, counter);
        multiThreadReader(reader, files_LD2, 10);
        map_yield_for_Q2_bins_for_LD2 = ploter(histograms, RunTypes::LD2);

        std::cout << "nb electron : " << counter.nb_e << std::endl;
        std::cout << "nb_pion_plus : " << counter.nb_pion_plus << std::endl;
        std::cout << "nb_pion_minus : " << counter.nb_pion_minus << std::endl;
        std::cout << "nb_pion_plus_forward : " << counter.nb_pion_plus_forward << std::endl;
        std::cout << "nb_pion_plus_central : " << counter.nb_pion_plus_central << std::endl;  
        std::cout << "nb_pion_minus_forward : " << counter.nb_pion_minus_forward << std::endl;
        std::cout << "nb_pion_minus_central : " << counter.nb_pion_minus_central << std::endl;  
    }
    // --------------------------------------------------------------------------------------------


    // Compute Nuclear transparancy : 
    double thinkness_CxC = 0.4;
    double density_CxC = 2.2;

    double thinkness_LD2 = 5;
    double density_LD2 = 0.164;

    auto g = new TGraph();
    std::vector<double> bins_Q2 = {1,2,2.5,3,3.5,4.5,6};

    int i = 0;
    for (auto &[key, elm] : map_yield_for_Q2_bins_for_CxC) {
        double yield_CxC = elm.number;
        double yield_LD2 = map_yield_for_Q2_bins_for_LD2.at(key).number;

        std::cout << key << " yield CxC : " << yield_CxC << " yield LD2 : " << yield_LD2 << std::endl;
        double NuclearTransparency = yield_CxC/yield_LD2 * ((thinkness_LD2*density_LD2)/(thinkness_CxC*density_CxC));

        double Q2_value = (bins_Q2.at(i+1) + bins_Q2.at(i))/2.0;
        g->SetPoint(g->GetN(), Q2_value, NuclearTransparency);
        i++;
    }

    std::string path = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/NuclearTransparency/";
    const auto canvas     = Helper::MakeCanvas();
    const auto myFileName = "NuclearTransparency";

    g->SetMarkerColor(Helper::Color::kLightBlue);
    g->SetMarkerStyle(kFullDotLarge);
    g->SetMarkerSize(1);
    g->Draw("AP");

    g->GetYaxis()->SetTitle("Q^{2}");
    g->GetYaxis()->SetTitle("T_{A}");

    Helper::SaveCanvas(canvas, path, myFileName);

    

    /*
    // --------------------------------------------------------------------------------------------
    // Status study : -----------------------------------------------------------------------------
    auto histograms = Status_study::Histograms();
    Status_study::Reader reader(histograms, counter);
    multiThreadReader(reader, files, 10);
    Status_study::ploter(histograms);
    std::cout << "nb nb_e_neg_status : " << counter.nb_e_neg_status << std::endl;
    std::cout << "nb_e_status_2000 : " << counter.nb_e_status_2000 << std::endl;
    */
}