#ifndef UNTITLED12_STRUCTURE_HPP
#define UNTITLED12_STRUCTURE_HPP

#include <cstdint>
#include <cstring>
#include <string>
#include <vector>

namespace hipo {

    class structure {

    private:
        std::vector<char> structureBuffer;
        char *structureAddress{};

    protected:
        void initStructureBySize(int _group, int _item, int _type, int _size) {
            allocate(_size + 8);
            structureAddress                                    = &structureBuffer[0];
            *reinterpret_cast<uint16_t *>(structureAddress)     = (uint16_t) _group;
            *reinterpret_cast<uint8_t *>(&structureAddress[2])  = (uint8_t) _item;
            *reinterpret_cast<uint8_t *>(&structureAddress[3])  = (uint8_t) _type;
            *reinterpret_cast<uint32_t *>(&structureAddress[4]) = _size;
        }

        std::vector<char> &getStructureBuffer() { return structureBuffer; }

        [[nodiscard]] int getStructureBufferSize() const { return 8 + getSize(); }

    public:
        structure() { structureAddress = nullptr; }

        explicit structure(int size) { allocate(size); }

        [[maybe_unused]] structure(int _group, int _item, std::string &str) {
            int length = static_cast<int>(str.length());
            initStructureBySize(_group, _item, 6, length);
            putStringAt(str);
        }

        virtual ~structure() = default;

        bool allocate(int size) {
            if (static_cast<int>(structureBuffer.size()) < size) { structureBuffer.resize(size + 32); }
            return true;
        }

        [[nodiscard]] int getSize() const noexcept { return *reinterpret_cast<int *>(structureAddress + 4); }

        [[maybe_unused]] int getType() {
            auto type = (int) (*reinterpret_cast<uint8_t *>(structureAddress + 3));
            return type;
        }

        [[maybe_unused]] int getGroup() {
            auto group = (int) (*reinterpret_cast<uint16_t *>(structureAddress));
            return group;
        }

        [[maybe_unused]] int getItem() {
            auto item = (int) (*reinterpret_cast<uint8_t *>(structureAddress + 2));
            return item;
        }

        void init(const char *buffer, int size) {
            allocate(size);
            memcpy(&structureBuffer[0], buffer, size);
            structureAddress = &structureBuffer[0];
        }

        void initNoCopy(const char *buffer) { structureAddress = const_cast<char *>(buffer); }

        [[maybe_unused]] const char *getAddress() { return structureAddress; }
        virtual void show() {
            printf("structure : [%5d,%5d] type = %4d, length = %6d\n", getGroup(), getItem(), getType(), getSize());
        }

        [[maybe_unused]] void setSize(int size) { *reinterpret_cast<uint32_t *>(structureAddress + 4) = size; }


        [[nodiscard]] int getIntAt(int index) const noexcept {
            return *reinterpret_cast<int32_t *>(&structureAddress[index + 8]);
        }
        [[nodiscard]] int16_t getShortAt(int index) const noexcept {
            return *reinterpret_cast<int16_t *>(&structureAddress[index + 8]);
        }
        [[nodiscard]] int8_t getByteAt(int index) const noexcept {
            return *reinterpret_cast<int8_t *>(&structureAddress[index + 8]);
        }
        [[nodiscard]] float getFloatAt(int index) const noexcept {
            return *reinterpret_cast<float *>(&structureAddress[index + 8]);
        }
        [[nodiscard]] double getDoubleAt(int index) const noexcept {
            return *reinterpret_cast<double *>(&structureAddress[index + 8]);
        }
        [[nodiscard]] long getLongAt(int index) const noexcept {
            return *reinterpret_cast<int64_t *>(&structureAddress[index + 8]);
        }

        std::string getStringAt() {
            int length      = getSize();
            auto *string_ch = (char *) malloc(length + 1);
            std::memcpy(string_ch, &structureBuffer[8], length);
            string_ch[length]  = '\0';
            std::string result = string_ch;
            free(string_ch);
            return result;
        }

        void putIntAt(int index, int value) { *reinterpret_cast<int32_t *>(&structureAddress[index + 8]) = value; }

        void putShortAt(int index, int16_t value) {
            *reinterpret_cast<int16_t *>(&structureAddress[index + 8]) = value;
        }

        void putByteAt(int index, int8_t value) { *reinterpret_cast<int8_t *>(&structureAddress[index + 8]) = value; }

        void putFloatAt(int index, float value) { *reinterpret_cast<float *>(&structureAddress[index + 8]) = value; }

        void putDoubleAt(int index, double value) { *reinterpret_cast<double *>(&structureAddress[index + 8]) = value; }

        void putLongAt(int index, int64_t value) { *reinterpret_cast<int64_t *>(&structureAddress[index + 8]) = value; }

        void putStringAt(std::string &str) {
            int strLen = static_cast<int>(str.length());
            std::memcpy(&structureBuffer[8], &str[0], strLen);
        }

        virtual void notify() {}
        friend class event;
    };
}// namespace hipo
#endif
