#ifndef BENCHMARK_HPP
#define BENCHMARK_HPP

#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

namespace hipo {
    class benchmark {
    private:
        std::chrono::time_point<std::chrono::high_resolution_clock> first, second;
        std::string benchmarkName;

        long running_time;
        int counter;
        int printoutFrequency;

    public:
        benchmark() {
            running_time      = 0;
            counter           = 0;
            printoutFrequency = -1;
        }

        explicit benchmark(const char *name) {
            benchmarkName     = name;
            running_time      = 0;
            counter           = 0;
            printoutFrequency = -1;
        }

        explicit benchmark(int freq) {
            running_time      = 0;
            counter           = 0;
            printoutFrequency = freq;
        }

        ~benchmark() = default;

        void setName(const char *name) { benchmarkName = name; }

        void resume() {
            first = std::chrono::high_resolution_clock::now();
            counter++;
        }

        void pause() {
            second       = std::chrono::high_resolution_clock::now();
            auto diff_ms = std::chrono::duration_cast<std::chrono::nanoseconds>(second - first);
            running_time += diff_ms.count();
        }

        [[nodiscard]] long getTime() const { return running_time; }
        [[nodiscard]] double getTimeSec() const { return static_cast<double>(running_time) * 1e-9; }
        [[nodiscard]] int getCounter() const { return counter; }
        void show() {
            printf("[benchmark] %24s : time = %12.4f \n", benchmarkName.c_str(), getTimeSec());
        }
    };
}// namespace hipo
#endif
