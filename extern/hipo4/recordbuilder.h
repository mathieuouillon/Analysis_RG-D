/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   recordbuilder.h
 * Author: gavalian
 *
 * Created on April 11, 2017, 4:47 PM
 */

#ifndef HIPORECORDBUILDER_H
#define HIPORECORDBUILDER_H

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "event.h"
#include "utils.h"

#ifdef __LZ4__
#include <lz4.h>
#endif

namespace hipo {

    class recordbuilder {

    private:
        const int defaultNumberOfEvents = 100000;
        const int defaultRecordSize = 8 * 1024 * 1024;

        std::vector<char> bufferIndex;
        std::vector<char> bufferEvents;
        std::vector<char> bufferData;
        std::vector<char> bufferRecord;

        int bufferIndexEntries;
        int bufferEventsPosition;
        long bufferUserWordOne = 0;
        long bufferUserWordTwo = 0;

        /**
         * Compresses the constructed buffer with LZ4 into internal buffer that
         * will be written to the output.
         */
        [[maybe_unused]] int compressRecord(int src_size) {
#ifdef LZ4_H_2983827168210
            int result = LZ4_compress_fast(&bufferData[0], &bufferRecord[56], src_size, static_cast<int>(bufferRecord.size()), 1);
            return result;
#endif

#ifndef LZ4_H_2983827168210
            printf("\n   >>>>> LZ4 compression is not supported.");
            printf("\n   >>>>> check if libz4 is installed on your system.");
            printf("\n   >>>>> recompile the library with liblz4 installed.\n");
            return 0;
#endif
        }

        /**
         * returns record length in bytes rounded to first integer.
         * the length comes out divisible by 4.
         */
        [[maybe_unused]] static int getRecordLengthRounding(int bufferSize) {
            if (bufferSize % 4 == 0) return 0;
            int nwords = bufferSize / 4;
            int nbytes = 4 * (nwords + 1);
            return (nbytes - bufferSize);
        }

    public:
        /**
         * Constructor with custom max event size and maximum record
         * size provided by user.
         */
        [[maybe_unused]] recordbuilder(int maxEvents, int maxLength) {
            bufferIndex.resize(4 * maxEvents);
            bufferEvents.resize(maxLength);
            bufferData.resize(maxLength + 4 * maxEvents + 1024);
            bufferRecord.resize(maxLength + 4 * maxEvents + 512 * 1024);
            bufferIndexEntries = 0;
            bufferEventsPosition = 0;
        }

        /**
         * Default constructor sets number of max events to 100000
         * and the buffer size to 8MB.
         */
        [[maybe_unused]] recordbuilder() {
            bufferIndex.resize(4 * defaultNumberOfEvents);
            bufferEvents.resize(defaultRecordSize);
            bufferData.resize(defaultRecordSize + 4 * defaultNumberOfEvents);
            bufferRecord.resize(defaultRecordSize + 4 * defaultNumberOfEvents + 512 * 1024);
            bufferIndexEntries = 0;
            bufferEventsPosition = 0;
        }

        [[maybe_unused]] virtual ~recordbuilder() = default;


        /**
         * add a content of a vector to the record builder buffer.
         * offset in the buffer and number of bytes to add provided
         * by user.
         */
        [[maybe_unused]] bool addEvent(std::vector<char> &vec, int start, int length) {
            if ((bufferEventsPosition + length) >= bufferEvents.size()) return false;
            if ((bufferIndexEntries + 1) * 4 >= bufferIndex.size()) return false;
            *reinterpret_cast<int *>(&bufferIndex[bufferIndexEntries * 4]) = length;
            bufferIndexEntries++;
            memcpy(&bufferEvents[bufferEventsPosition], &vec[start], length);
            bufferEventsPosition += length;
            return true;
        }
        /**
         * add event object to the record builder buffer.
         */
        [[maybe_unused]] bool addEvent(hipo::event &evnt) { return addEvent(evnt.getEventBuffer(), 0, evnt.getSize()); }

        [[maybe_unused]] long getUserWordOne() {
            long wOne = *reinterpret_cast<long *>(&bufferRecord[40]);
            return wOne;
        }

        [[maybe_unused]] long getUserWordTwo() {
            long wTwo = *reinterpret_cast<long *>(&bufferRecord[48]);
            return wTwo;
        }

        [[maybe_unused]] void setUserWordOne(long userWordOne) { bufferUserWordOne = userWordOne; }

        [[maybe_unused]] void setUserWordTwo(long userWordTwo) { bufferUserWordTwo = userWordTwo; }

        [[maybe_unused]] int getRecordSize() {
            int size = *reinterpret_cast<int *>(&bufferRecord[0]);
            return size * 4;
        }

        [[maybe_unused]] int getEntries() {
            int nentries = *reinterpret_cast<int *>(&bufferRecord[12]);
            return nentries;
        }

        [[maybe_unused]] std::vector<char> &getRecordBuffer() { return bufferRecord; };

        /**
         * Resets the counters for number of events and sets the
         * position for writing new events to the begining of the
         * event buffer.
         */
        [[maybe_unused]] void reset() {
            bufferIndexEntries = 0;
            bufferEventsPosition = 0;
        }

        [[maybe_unused]] void build() {
            int indexSize = bufferIndexEntries * 4;
            int eventsSize = bufferEventsPosition;
            memcpy(&bufferData[0], &bufferIndex[0], indexSize);
            memcpy(&bufferData[indexSize], &bufferEvents[0], eventsSize);
            int uncompressedSize = indexSize + eventsSize;
            int compressedSize = compressRecord(uncompressedSize);
            int rounding = getRecordLengthRounding(compressedSize);
            int compressedSizeToWrite = compressedSize + rounding;
            int compressedSizeToWriteWords = compressedSizeToWrite / 4;
            int recordLength = compressedSizeToWrite / 4 + 14;

            hipo::utils::writeInt(&bufferRecord[0], 0, recordLength);           // (1) - record length in words (includes header)
            hipo::utils::writeInt(&bufferRecord[0], 4, 0);                      // (2) - record #
            hipo::utils::writeInt(&bufferRecord[0], 8, 14);                     // (3) - record header lenght (in words)
            hipo::utils::writeInt(&bufferRecord[0], 12, bufferIndexEntries);    // (4) event count in the record
            hipo::utils::writeInt(&bufferRecord[0], 16, bufferIndexEntries * 4);// (5) length of index array in bytes
            int versionWord = (rounding << 24) | (6);
            hipo::utils::writeInt(&bufferRecord[0], 20, versionWord);                 // (6) record version number
            hipo::utils::writeInt(&bufferRecord[0], 24, 0);                           // (7) user header length bytes
            hipo::utils::writeInt(&bufferRecord[0], 28, static_cast<int>(0xc0da0100));// (8) magic word
            hipo::utils::writeInt(&bufferRecord[0], 32, eventsSize);                  // (9) magic word
            int compressionWord = (1 << 28) | (0x0FFFFFFF & compressedSizeToWriteWords);
            hipo::utils::writeInt(&bufferRecord[0], 36, compressionWord);
            hipo::utils::writeLong(&bufferRecord[0], 40, bufferUserWordOne);
            hipo::utils::writeLong(&bufferRecord[0], 48, bufferUserWordTwo);
        }
    };
}// namespace hipo
#endif
