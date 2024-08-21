//******************************************************************************
//*       ██╗  ██╗██╗██████╗  ██████╗     ██╗  ██╗    ██████╗                  *
//*       ██║  ██║██║██╔══██╗██╔═══██╗    ██║  ██║   ██╔═████╗                 *
//*       ███████║██║██████╔╝██║   ██║    ███████║   ██║██╔██║                 *
//*       ██╔══██║██║██╔═══╝ ██║   ██║    ╚════██║   ████╔╝██║                 *
//*       ██║  ██║██║██║     ╚██████╔╝         ██║██╗╚██████╔╝                 *
//*       ╚═╝  ╚═╝╚═╝╚═╝      ╚═════╝          ╚═╝╚═╝ ╚═════╝                  *
//************************ Jefferson National Lab (2017) ***********************
/*
 *   Copyright (c) 2017.  Jefferson Lab (JLab). All rights reserved. Permission
 *   to use, copy, modify, and distribute  this software and its documentation
 *   for educational, research, and not-for-profit purposes, without fee and
 *   without a signed licensing agreement.
 *
 *   IN NO EVENT SHALL JLAB BE LIABLE TO ANY PARTY FOR DIRECT, INDIRECT, SPECIAL
 *   INCIDENTAL, OR CONSEQUENTIAL DAMAGES, INCLUDING LOST PROFITS, ARISING
 *   OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF JLAB HAS
 *   BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *   JLAB SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 *   THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 *   PURPOSE. THE HIPO DATA FORMAT SOFTWARE AND ACCOMPANYING DOCUMENTATION, IF
 *   ANY, PROVIDED HEREUNDER IS PROVIDED "AS IS". JLAB HAS NO OBLIGATION TO
 *   PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 *   This software was developed under the United States Government license.
 *   For more information contact author at gavalian@jlab.org
 *   Department of Experimental Nuclear Physics, Jefferson Lab.
 */
/*******************************************************************************
 * File:   bank.h
 * Author: gavalian
 *
 * Created on April 12, 2017, 10:14 AM
 */

#ifndef HIPO_BANK_H
#define HIPO_BANK_H

#include "dictionary.h"
#include "schema.hpp"
#include "structure.hpp"
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <vector>

namespace hipo {

    class bank : public hipo::structure {

    private:
        schema bankSchema;
        int bankRows{-1};

    protected:
        [[maybe_unused]] void setBankRows(int rows) { bankRows = rows; }

    public:
        [[maybe_unused]] bank() = default;

        // constructor initializes the nodes in the bank, and they will be filled automatically by reader.next() method.
        [[maybe_unused]] explicit bank(const schema &_schema) {
            bankSchema = _schema;
            bankRows   = -1;
        }

        [[maybe_unused]] bank(const schema &_schema, int _rows) {
            bankSchema = _schema;
            bankRows   = _rows;
            int size   = bankSchema.getSizeForRows(_rows);
            initStructureBySize(bankSchema.getGroup(), bankSchema.getItem(), 11, size);
        }

        [[maybe_unused]] ~bank() override = default;

        [[maybe_unused]] schema &getSchema() { return bankSchema; }

        template<typename T>
        [[maybe_unused]] T get(int item, int index) const {
            int type   = bankSchema.getEntryType(item);
            int offset = bankSchema.getOffset(item, index, bankRows);
            switch (type) {
                case 1:
                    return getByteAt(offset);
                case 2:
                    return getShortAt(offset);
                case 3:
                    return getIntAt(offset);
                case 4:
                    return getFloatAt(offset);
                case 5:
                    return getDoubleAt(offset);
                case 8:
                    return getLongAt(offset);
                default:
                    return std::numeric_limits<T>::quiet_NaN();
            }
        }

        template<typename T>
        [[maybe_unused]] T get(const std::string &name, const int &index) const {
            int item = bankSchema.getEntryOrder(name.c_str());
            return get<T>(item, index);
        }

        template<typename T>
        std::vector<T> get(const std::string &name) const {
            int item = bankSchema.getEntryOrder(name.c_str());
            std::vector<T> output;
            for (int index = 0; index < bankRows; index++) { output.emplace_back(this->get<T>(item, index)); }
            return output;
        }

        auto isEmpty() -> bool {
            return this->getRows() < 1;
        }

        [[maybe_unused]] int getRows() const noexcept { return bankRows; }

        [[maybe_unused]] void setRows(int rows) {
            bankRows = rows;
            int size = bankSchema.getSizeForRows(bankRows);
            initStructureBySize(bankSchema.getGroup(), bankSchema.getItem(), 11, size);
        }

        [[maybe_unused]] int getInt(int item, int index) const noexcept;
        [[maybe_unused]] int getShort(int item, int index) const noexcept;
        [[maybe_unused]] int getByte(int item, int index) const noexcept;
        [[maybe_unused]] float getFloat(int item, int index) const noexcept;
        [[maybe_unused]] double getDouble(int item, int index) const noexcept;
        [[maybe_unused]] long getLong(int item, int index) const noexcept;

        [[maybe_unused]] int getInt(const char *name, int index) const noexcept;
        [[maybe_unused]] int getShort(const char *name, int index) const noexcept;
        [[maybe_unused]] int getByte(const char *name, int index) const noexcept;
        [[maybe_unused]] float getFloat(const char *name, int index) const noexcept;
        [[maybe_unused]] double getDouble(const char *name, int index) const noexcept;
        [[maybe_unused]] long getLong(const char *name, int index) const noexcept;

        [[maybe_unused]] void putInt(const char *name, int index, int32_t value);
        [[maybe_unused]] void putShort(const char *name, int index, int16_t value);
        [[maybe_unused]] void putByte(const char *name, int index, int8_t value);
        [[maybe_unused]] void putFloat(const char *name, int index, float value);
        [[maybe_unused]] void putDouble(const char *name, int index, double value);
        [[maybe_unused]] void putLong(const char *name, int index, int64_t value);

        [[maybe_unused]] void putInt(int item, int index, int32_t value);
        [[maybe_unused]] void putShort(int item, int index, int16_t value);
        [[maybe_unused]] void putByte(int item, int index, int8_t value);
        [[maybe_unused]] void putFloat(int item, int index, float value);
        [[maybe_unused]] void putDouble(int item, int index, double value);
        [[maybe_unused]] void putLong(int item, int index, int64_t value);

        [[maybe_unused]] void show() override {
            printf("BANK :: NAME %24s , ROWS %6d \n", bankSchema.getName().c_str(), getRows());
            for (int i = 0; i < bankSchema.getEntries(); i++) {
                printf("%24s  (%3s) : ", bankSchema.getEntryName(i).c_str(), bankSchema.getEntryTypeString(i).c_str());
                for (int k = 0; k < bankRows; k++) {
                    if (bankSchema.getEntryType(i) < 4) {
                        printf("%8d ", getInt(i, k));
                    } else if (bankSchema.getEntryType(i) == 4) {
                        printf("%8.5f ", getFloat(i, k));
                    }
                }
                printf("\n");
            }
        }

        [[maybe_unused]] void reset() {
            setSize(0);
            bankRows = 0;
        }

        [[maybe_unused]] void notify() override {
            int size = bankSchema.getRowLength();
            bankRows = getSize() / size;
        }
    };
    /////////////////////////////////////
    //inlined getters

    [[maybe_unused]] inline float bank::getFloat(int item, int index) const noexcept {
        if (bankSchema.getEntryType(item) == 4) {
            int offset = bankSchema.getOffset(item, index, bankRows);
            return getFloatAt(offset);
        }
        return 0.0;
    }

    [[maybe_unused]] inline double bank::getDouble(int item, int index) const noexcept {
        if (bankSchema.getEntryType(item) == 5) {
            int offset = bankSchema.getOffset(item, index, bankRows);
            return getDoubleAt(offset);
        }
        return 0.0;
    }

    [[maybe_unused]] inline long bank::getLong(int item, int index) const noexcept {
        if (bankSchema.getEntryType(item) == 8) {
            int offset = bankSchema.getOffset(item, index, bankRows);
            return getLongAt(offset);
        }
        return 0;
    }

    [[maybe_unused]] inline int bank::getInt(int item, int index) const noexcept {
        int type   = bankSchema.getEntryType(item);
        int offset = bankSchema.getOffset(item, index, bankRows);
        switch (type) {
            case 1:
                return (int) getByteAt(offset);
            case 2:
                return (int) getShortAt(offset);
            case 3:
                return getIntAt(offset);
            default:
                printf("---> error : requested INT for [%s] type = %d\n", bankSchema.getEntryName(item).c_str(), type);
                break;
        }
        return 0;
    }

    [[maybe_unused]] inline int bank::getShort(int item, int index) const noexcept {
        int type   = bankSchema.getEntryType(item);
        int offset = bankSchema.getOffset(item, index, bankRows);
        switch (type) {
            case 1:
                return (int) getByteAt(offset);
            case 2:
                return (int) getShortAt(offset);
            default:
                printf("---> error : requested SHORT for [%s] type = %d\n", bankSchema.getEntryName(item).c_str(),
                       type);
                break;
        }
        return 0;
    }

    [[maybe_unused]] inline int bank::getByte(int item, int index) const noexcept {
        int type   = bankSchema.getEntryType(item);
        int offset = bankSchema.getOffset(item, index, bankRows);
        if (type == 1) return (int) getByteAt(offset);
        else
            printf("---> error : requested BYTE for [%s] type = %d\n", bankSchema.getEntryName(item).c_str(), type);
        return 0;
    }
    [[maybe_unused]] inline int bank::getInt(const char *name, int index) const noexcept {
        int item   = bankSchema.getEntryOrder(name);
        int type   = bankSchema.getEntryType(item);
        int offset = bankSchema.getOffset(item, index, bankRows);
        switch (type) {
            case 1:
                return (int) getByteAt(offset);
            case 2:
                return (int) getShortAt(offset);
            case 3:
                return getIntAt(offset);
            default:
                printf("---> error : requested INT for [%s] type = %d\n", name, type);
                break;
        }
        return 0;
    }

    [[maybe_unused]] inline int bank::getShort(const char *name, int index) const noexcept {
        int item   = bankSchema.getEntryOrder(name);
        int type   = bankSchema.getEntryType(item);
        int offset = bankSchema.getOffset(item, index, bankRows);
        switch (type) {
            case 1:
                return (int) getByteAt(offset);
            case 2:
                return (int) getShortAt(offset);
            default:
                printf("---> error : requested SHORT for [%s] type = %d\n", bankSchema.getEntryName(item).c_str(),
                       type);
                break;
        }
        return 0;
    }
    [[maybe_unused]] inline int bank::getByte(const char *name, int index) const noexcept {
        int item   = bankSchema.getEntryOrder(name);
        int type   = bankSchema.getEntryType(item);
        int offset = bankSchema.getOffset(item, index, bankRows);
        if (type == 1) return (int) getByteAt(offset);
        else
            printf("---> error : requested BYTE for [%s] type = %d\n", bankSchema.getEntryName(item).c_str(), type);
        return 0;
    }

    [[maybe_unused]] inline float bank::getFloat(const char *name, int index) const noexcept {
        int item = bankSchema.getEntryOrder(name);
        if (bankSchema.getEntryType(item) == 4) {
            int offset = bankSchema.getOffset(item, index, bankRows);
            return getFloatAt(offset);
        }
        return 0.0;
    }

    [[maybe_unused]] inline double bank::getDouble(const char *name, int index) const noexcept {
        int item = bankSchema.getEntryOrder(name);
        if (bankSchema.getEntryType(item) == 5) {
            int offset = bankSchema.getOffset(item, index, bankRows);
            return getDoubleAt(offset);
        }
        return 0.0;
    }

    [[maybe_unused]] inline long bank::getLong(const char *name, int index) const noexcept {
        int item = bankSchema.getEntryOrder(name);
        if (bankSchema.getEntryType(item) == 8) {
            int offset = bankSchema.getOffset(item, index, bankRows);
            return getLongAt(offset);
        }
        return 0;
    }
    [[maybe_unused]] inline void bank::putInt(int item, int index, int32_t value) {
        //int type = bankSchema.getEntryType(item);
        int offset = bankSchema.getOffset(item, index, bankRows);
        putIntAt(offset, value);
    }
    [[maybe_unused]] inline void bank::putShort(int item, int index, int16_t value) {
        //int type = bankSchema.getEntryType(item);
        int offset = bankSchema.getOffset(item, index, bankRows);
        putShortAt(offset, value);
    }
    [[maybe_unused]] inline void bank::putByte(int item, int index, int8_t value) {
        //int type = bankSchema.getEntryType(item);
        int offset = bankSchema.getOffset(item, index, bankRows);
        putByteAt(offset, value);
    }
    [[maybe_unused]] inline void bank::putFloat(int item, int index, float value) {
        //int type = bankSchema.getEntryType(item);
        int offset = bankSchema.getOffset(item, index, bankRows);
        //printf("---- put float %f at position = %d\n",value,offset);
        putFloatAt(offset, value);
    }
    [[maybe_unused]] inline void bank::putDouble(int item, int index, double value) {
        //int type = bankSchema.getEntryType(item);
        int offset = bankSchema.getOffset(item, index, bankRows);
        putDoubleAt(offset, value);
    }
    [[maybe_unused]] inline void bank::putLong(int item, int index, int64_t value) {
        //int type = bankSchema.getEntryType(item);
        int offset = bankSchema.getOffset(item, index, bankRows);
        putLongAt(offset, value);
    }

    [[maybe_unused]] inline void bank::putInt(const char *name, int index, int32_t value) {
        int item   = bankSchema.getEntryOrder(name);
        int offset = bankSchema.getOffset(item, index, bankRows);
        putIntAt(offset, value);
    }
    [[maybe_unused]] inline void bank::putShort(const char *name, int index, int16_t value) {
        int item   = bankSchema.getEntryOrder(name);
        int offset = bankSchema.getOffset(item, index, bankRows);
        putShortAt(offset, value);
    }
    [[maybe_unused]] inline void bank::putByte(const char *name, int index, int8_t value) {
        int item   = bankSchema.getEntryOrder(name);
        int offset = bankSchema.getOffset(item, index, bankRows);
        putByteAt(offset, value);
    }
    [[maybe_unused]] inline void bank::putFloat(const char *name, int index, float value) {
        int item   = bankSchema.getEntryOrder(name);
        int offset = bankSchema.getOffset(item, index, bankRows);
        putFloatAt(offset, value);
    }
    [[maybe_unused]] inline void bank::putDouble(const char *name, int index, double value) {
        int item   = bankSchema.getEntryOrder(name);
        int offset = bankSchema.getOffset(item, index, bankRows);
        putDoubleAt(offset, value);
    }
    [[maybe_unused]] inline void bank::putLong(const char *name, int index, int64_t value) {
        int item   = bankSchema.getEntryOrder(name);
        int offset = bankSchema.getOffset(item, index, bankRows);
        putLongAt(offset, value);
    }

}// namespace hipo
#endif
