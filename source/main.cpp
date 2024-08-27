#include <TROOT.h>
#include <chrono>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <vector>
#include <filesystem>
#include "BS_thread_pool.hpp"
#include "RGD_Reader.hpp"
#include "Histograms.hpp"
#include "Ploter.hpp"
#include "Counter.hpp"
#include "Status_Reader.hpp"
#include "Status_Histograms.hpp"
#include "Status_Ploter.hpp"


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
    std::cout << "test" << std::endl;

    std::vector<std::string> runs = {"/cache/hallb/scratch/rg-d/production/prod/v4ob_aideCxC/dst/recon/018451/",
                                     "/cache/hallb/scratch/rg-d/production/prod/v4ob_aideCxC/dst/recon/018452/"};

    std::vector<std::string> files = read_recursive_file_in_directory(runs.at(0));
    std::vector<std::string> tmp = read_recursive_file_in_directory(runs.at(1));
    files.insert(files.end(), tmp.begin(), tmp.end());
    
    std::cout << "size : " << files.size() << std::endl;


    
    Counter counter;
    
    
    // --------------------------------------------------------------------------------------------
    // Matt study : -----------------------------------------------------------------------------
    auto histograms = Histograms();
    RGD::Reader reader(histograms, counter);
    multiThreadReader(reader, files, 6);
    ploter(histograms);

    std::cout << "nb electron : " << counter.nb_e << std::endl;
    std::cout << "nb_pion_plus : " << counter.nb_pion_plus << std::endl;
    std::cout << "nb_pion_minus : " << counter.nb_pion_minus << std::endl;
    std::cout << "nb_pion_plus_forward : " << counter.nb_pion_plus_forward << std::endl;
    std::cout << "nb_pion_plus_central : " << counter.nb_pion_plus_central << std::endl;  
    std::cout << "nb_pion_minus_forward : " << counter.nb_pion_minus_forward << std::endl;
    std::cout << "nb_pion_minus_central : " << counter.nb_pion_minus_central << std::endl;  

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