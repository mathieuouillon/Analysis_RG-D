#ifndef DATA_HPP
#define DATA_HPP

#include "benchmark.hpp"
#include "event.h"
#include "utils.h"

#include "../extern/lz4/lib/lz4.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

class data {
private:
    const char *data_ptr{};
    int data_size{};
    int data_endianness{};
    int data_offset{};

public:
    [[maybe_unused]] data() {
        data_ptr  = nullptr;
        data_size = 0;
    }
    [[maybe_unused]] ~data() = default;

    [[maybe_unused]] void setDataPtr(const char *_ptr) { data_ptr = _ptr; }
    [[maybe_unused]] void setDataSize(int _size) { data_size = _size; }
    [[maybe_unused]] void setDataOffset(int _offset) { data_offset = _offset; }
    [[maybe_unused]] void setDataEndianness(int _endianness) { data_endianness = _endianness; }

    [[maybe_unused]] const uint32_t *getEvioPtr() { return reinterpret_cast<const uint32_t *>(data_ptr); }
    [[maybe_unused]] [[nodiscard]] int getEvioSize() const { return (int) data_size / 4; }
    [[maybe_unused]] const char *getDataPtr() { return data_ptr; }
    [[maybe_unused]] [[nodiscard]] int getDataSize() const { return data_size; }
    [[maybe_unused]] [[nodiscard]] int getDataEndianness() const { return data_endianness; }
    [[maybe_unused]] [[nodiscard]] int getDataOffset() const { return data_offset; }
};
#endif
