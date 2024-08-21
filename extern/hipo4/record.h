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

/*
 * File:   record.h
 * Author: gavalian
 *
 * Created on April 11, 2017, 4:47 PM
 */

#ifndef HIPORECORD_H
#define HIPORECORD_H

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "../extern/lz4/lib/lz4.c"
#include "../extern/lz4/lib/lz4.h"

#include "benchmark.hpp"
#include "data.hpp"
#include "event.h"
#include "utils.h"

namespace hipo {

    struct recordHeader_t {
        int signatureString            = 0;  // 1) identifier string is HREC (int = 0x43455248
        int recordLength               = 0;  // 2) TOTAL Length of the RECORD, includes INDEX array
        int recordDataLength           = 0;  // 3) Length of the DATA uncompressed
        int recordDataLengthCompressed = 0;  // 4) compressed length of the DATA buffer
        int numberOfEvents             = 0;  // 5) number of event, data buckets in DATA buffer
        int headerLength               = 0;  // 6) Length of the buffer represengin HEADER for the record
        int indexDataLength            = 0;  // 7) Length of the index buffer (in bytes)
        int userHeaderLength           = 0;  // user header length in bytes
        int userHeaderLengthPadding    = 0;  // the padding added to user header Length
        int bitInfo                    = 0;
        int compressionType            = 0;
        int compressedLengthPadding    = 0;
        int dataEndianness             = 0;
    };

    class record {
    private:
        std::vector<char> recordHeaderBuffer;
        recordHeader_t recordHeader;

        std::vector<char> recordBuffer;
        std::vector<char> recordCompressedBuffer;

        benchmark readBenchmark;
        benchmark unzipBenchmark;
        benchmark indexBenchmark;

        /**
         * decompresses the content of given buffer ( *data), into a newly allocated
         * memory. User is responsible for free-ing the allocated memory.
         */
        static char *getUncompressed(const char *data, int dataLength, int dataLengthUncompressed) {
#ifdef LZ4_H_2983827168210
            char *output = (char *) malloc(dataLengthUncompressed);
            LZ4_decompress_safe(data, output, dataLength, dataLengthUncompressed);
            return output;
#endif

#ifndef LZ4_H_2983827168210
            printf("\n   >>>>> LZ4 compression is not supported.");
            printf("\n   >>>>> check if libz4 is installed on your system.");
            printf("\n   >>>>> recompile the library with liblz4 installed.\n");
            return nullptr;
#endif
        }

        /**
         * decompresses the buffer given with pointed *data, into a destination array
         * provided. The arguments indicate the compressed data length (dataLength),
         * and maximum decompressed length.
         * returns the number of bytes that were decompressed by LZ4
         */
        static int getUncompressed(const char *data, char *dest, int dataLength, int dataLengthUncompressed) {
#ifdef LZ4_H_2983827168210
            int result = LZ4_decompress_safe(data, dest, dataLength, dataLengthUncompressed);
            //int result = LZ4_decompress_fast(data,dest,dataLengthUncompressed);
            return result;
#endif

#ifndef LZ4_H_2983827168210
            printf("\n   >>>>> LZ4 compression is not supported.");
            printf("\n   >>>>> check if libz4 is installed on your system.");
            printf("\n   >>>>> recompile the library with liblz4 installed.\n");
            return NULL;
#endif
        }
        /**
         * prints the content of given buffer in HEX format. Used for debugging.
         */
        static void showBuffer(const char *data, int wrapping, int maxsize) {
            for (int i = 0; i < maxsize; i++) {
                printf("%X ", 0x000000FF & ((unsigned int) data[i]));
                if ((i + 1) % wrapping == 0) printf("\n");
            }
            printf("\n");
        }

    public:
        record()  = default;
        ~record() = default;

        /**
         * Read
         */
        void readRecord(std::ifstream &stream, long position) {
            recordHeaderBuffer.resize(80);
            stream.seekg(position, std::ios::beg);

            stream.read((char *) &recordHeaderBuffer[0], 80);
            recordHeader.recordLength     = *(reinterpret_cast<int *>(&recordHeaderBuffer[0]));
            recordHeader.headerLength     = *(reinterpret_cast<int *>(&recordHeaderBuffer[8]));
            recordHeader.numberOfEvents   = *(reinterpret_cast<int *>(&recordHeaderBuffer[12]));
            recordHeader.bitInfo          = *(reinterpret_cast<int *>(&recordHeaderBuffer[20]));
            recordHeader.signatureString  = *(reinterpret_cast<int *>(&recordHeaderBuffer[28]));
            recordHeader.recordDataLength = *(reinterpret_cast<int *>(&recordHeaderBuffer[32]));
            recordHeader.userHeaderLength = *(reinterpret_cast<int *>(&recordHeaderBuffer[24]));
            int compressedWord            = *(reinterpret_cast<int *>(&recordHeaderBuffer[36]));

            if (recordHeader.signatureString == 0xc0da0100) recordHeader.dataEndianness = 0;
            if (recordHeader.signatureString == 0x0001dac0) recordHeader.dataEndianness = 1;

            if (recordHeader.signatureString == 0x0001dac0) {
                recordHeader.recordLength     = static_cast<int>(__builtin_bswap32(recordHeader.recordLength));
                recordHeader.headerLength     = static_cast<int>(__builtin_bswap32(recordHeader.headerLength));
                recordHeader.numberOfEvents   = static_cast<int>(__builtin_bswap32(recordHeader.numberOfEvents));
                recordHeader.recordDataLength = static_cast<int>(__builtin_bswap32(recordHeader.recordDataLength));
                recordHeader.userHeaderLength = static_cast<int>(__builtin_bswap32(recordHeader.userHeaderLength));
                recordHeader.bitInfo          = static_cast<int>(__builtin_bswap32(recordHeader.bitInfo));
                compressedWord                = static_cast<int>(__builtin_bswap32(compressedWord));
            }

            int compressedDataLengthPadding = (recordHeader.bitInfo >> 24) & 0x00000003;
            int headerLengthBytes           = recordHeader.headerLength * 4;
            int dataBufferLengthBytes       = recordHeader.recordLength * 4 - headerLengthBytes;

            recordHeader.userHeaderLengthPadding    = (recordHeader.bitInfo >> 20) & 0x00000003;
            recordHeader.recordDataLengthCompressed = compressedWord & 0x0FFFFFFF;
            recordHeader.compressionType            = (compressedWord >> 28) & 0x0000000F;
            recordHeader.indexDataLength            = 4 * recordHeader.numberOfEvents;

            if (dataBufferLengthBytes > recordCompressedBuffer.size()) {
                int newSize = dataBufferLengthBytes + 5 * 1024;
                recordCompressedBuffer.resize(newSize);
            }
            long dataposition = position + headerLengthBytes;
            stream.seekg(dataposition, std::ios::beg);
            stream.read((&recordCompressedBuffer[0]), dataBufferLengthBytes);

            int decompressedLength = recordHeader.indexDataLength + recordHeader.userHeaderLength +
                                     recordHeader.userHeaderLengthPadding + recordHeader.recordDataLength;

            if (recordBuffer.size() < decompressedLength) { recordBuffer.resize(decompressedLength + 1024); }

            if (recordHeader.compressionType == 0) {
                // printf("compression type = 0 data length = %d\n", decompressedLength);
                memcpy((&recordBuffer[0]), (&recordCompressedBuffer[0]), decompressedLength);
            } else {
                getUncompressed((&recordCompressedBuffer[0]), (&recordBuffer[0]),
                                dataBufferLengthBytes - compressedDataLengthPadding, decompressedLength);
            }

            int eventPosition = 0;
            for (int i = 0; i < recordHeader.numberOfEvents; i++) {
                auto *ptr = reinterpret_cast<int *>(&recordBuffer[i * 4]);
                int size  = *ptr;
                if (recordHeader.dataEndianness == 1) size = static_cast<int>(__builtin_bswap32(size));
                eventPosition += size;
                *ptr = eventPosition;
            }
        }

        void readRecord_(std::ifstream &stream, long position, long recordLength) {
            stream.seekg(position, std::ios::beg);

            if (recordLength > recordCompressedBuffer.size()) {
                int newSize = static_cast<int>(recordLength) + 5 * 1024;
                recordCompressedBuffer.resize(newSize);
            }
            stream.seekg(position, std::ios::beg);
            stream.read((&recordCompressedBuffer[0]), recordLength);

            recordHeader.recordLength     = *(reinterpret_cast<int *>(&recordCompressedBuffer[0]));
            recordHeader.headerLength     = *(reinterpret_cast<int *>(&recordCompressedBuffer[8]));
            recordHeader.numberOfEvents   = *(reinterpret_cast<int *>(&recordCompressedBuffer[12]));
            recordHeader.bitInfo          = *(reinterpret_cast<int *>(&recordCompressedBuffer[20]));
            recordHeader.signatureString  = *(reinterpret_cast<int *>(&recordCompressedBuffer[28]));
            recordHeader.recordDataLength = *(reinterpret_cast<int *>(&recordCompressedBuffer[32]));
            recordHeader.userHeaderLength = *(reinterpret_cast<int *>(&recordCompressedBuffer[24]));
            int compressedWord            = *(reinterpret_cast<int *>(&recordCompressedBuffer[36]));

            if (recordHeader.signatureString == 0xc0da0100) recordHeader.dataEndianness = 0;
            if (recordHeader.signatureString == 0x0001dac0) recordHeader.dataEndianness = 1;

            if (recordHeader.signatureString == 0x0001dac0) {
                recordHeader.recordLength     = static_cast<int>(__builtin_bswap32(recordHeader.recordLength));
                recordHeader.headerLength     = static_cast<int>(__builtin_bswap32(recordHeader.headerLength));
                recordHeader.numberOfEvents   = static_cast<int>(__builtin_bswap32(recordHeader.numberOfEvents));
                recordHeader.recordDataLength = static_cast<int>(__builtin_bswap32(recordHeader.recordDataLength));
                recordHeader.userHeaderLength = static_cast<int>(__builtin_bswap32(recordHeader.userHeaderLength));
                recordHeader.bitInfo          = static_cast<int>(__builtin_bswap32(recordHeader.bitInfo));
                compressedWord                = static_cast<int>(__builtin_bswap32(compressedWord));
            }

            int compressedDataLengthPadding = (recordHeader.bitInfo >> 24) & 0x00000003;
            int headerLengthBytes           = recordHeader.headerLength * 4;
            int dataBufferLengthBytes       = recordHeader.recordLength * 4 - headerLengthBytes;

            recordHeader.userHeaderLengthPadding    = (recordHeader.bitInfo >> 20) & 0x00000003;
            recordHeader.recordDataLengthCompressed = compressedWord & 0x0FFFFFFF;
            recordHeader.compressionType            = (compressedWord >> 28) & 0x0000000F;
            recordHeader.indexDataLength            = 4 * recordHeader.numberOfEvents;

            long dataposition = position + headerLengthBytes;

            int decompressedLength = recordHeader.indexDataLength + recordHeader.userHeaderLength +
                                     recordHeader.userHeaderLengthPadding + recordHeader.recordDataLength;
            if (recordBuffer.size() < decompressedLength) { recordBuffer.resize(decompressedLength + 1024); }

            if (recordHeader.compressionType == 0) {
                memcpy((&recordBuffer[0]), (&recordCompressedBuffer[0]), decompressedLength);
            } else {
                getUncompressed((&recordCompressedBuffer[56]), (&recordBuffer[0]),
                                dataBufferLengthBytes - compressedDataLengthPadding, decompressedLength);
            }

            /**
             * converting index array from lengths of each buffer in the
             * record to relative positions in the record stream.
             */
            int eventPosition = static_cast<int>(dataposition);
            for (int i = 0; i < recordHeader.numberOfEvents; i++) {
                auto *ptr = reinterpret_cast<int *>(&recordBuffer[i * 4]);
                int size  = *ptr;
                if (recordHeader.dataEndianness == 1) size = static_cast<int>(__builtin_bswap32(size));
                eventPosition += size;
                *ptr = eventPosition;
            }
        }

        bool readRecord(std::ifstream &stream, long position, long inputSize) {
            readBenchmark.resume();
            if ((position + 80) >= inputSize) return false;

            recordHeaderBuffer.resize(80);
            stream.seekg(position, std::ios::beg);

            stream.read((char *) &recordHeaderBuffer[0], 80);
            recordHeader.recordLength     = *(reinterpret_cast<int *>(&recordHeaderBuffer[0]));
            recordHeader.headerLength     = *(reinterpret_cast<int *>(&recordHeaderBuffer[8]));
            recordHeader.numberOfEvents   = *(reinterpret_cast<int *>(&recordHeaderBuffer[12]));
            recordHeader.bitInfo          = *(reinterpret_cast<int *>(&recordHeaderBuffer[20]));
            recordHeader.signatureString  = *(reinterpret_cast<int *>(&recordHeaderBuffer[28]));
            recordHeader.recordDataLength = *(reinterpret_cast<int *>(&recordHeaderBuffer[32]));
            recordHeader.userHeaderLength = *(reinterpret_cast<int *>(&recordHeaderBuffer[24]));
            int compressedWord            = *(reinterpret_cast<int *>(&recordHeaderBuffer[36]));

            if (recordHeader.signatureString == 0xc0da0100) recordHeader.dataEndianness = 0;
            if (recordHeader.signatureString == 0x0001dac0) recordHeader.dataEndianness = 1;

            if (recordHeader.signatureString == 0x0001dac0) {
                recordHeader.recordLength     = static_cast<int>(__builtin_bswap32(recordHeader.recordLength));
                recordHeader.headerLength     = static_cast<int>(__builtin_bswap32(recordHeader.headerLength));
                recordHeader.numberOfEvents   = static_cast<int>(__builtin_bswap32(recordHeader.numberOfEvents));
                recordHeader.recordDataLength = static_cast<int>(__builtin_bswap32(recordHeader.recordDataLength));
                recordHeader.userHeaderLength = static_cast<int>(__builtin_bswap32(recordHeader.userHeaderLength));
                recordHeader.bitInfo          = static_cast<int>(__builtin_bswap32(recordHeader.bitInfo));
                compressedWord                = static_cast<int>(__builtin_bswap32(compressedWord));
            }

            int compressedDataLengthPadding = (recordHeader.bitInfo >> 24) & 0x00000003;
            int headerLengthBytes           = recordHeader.headerLength * 4;
            int dataBufferLengthBytes       = recordHeader.recordLength * 4 - headerLengthBytes;

            recordHeader.userHeaderLengthPadding    = (recordHeader.bitInfo >> 20) & 0x00000003;
            recordHeader.recordDataLengthCompressed = compressedWord & 0x0FFFFFFF;
            recordHeader.compressionType            = (compressedWord >> 28) & 0x0000000F;
            recordHeader.indexDataLength            = 4 * recordHeader.numberOfEvents;

            if (dataBufferLengthBytes > recordCompressedBuffer.size()) {
                int newSize = dataBufferLengthBytes + 500 * 1024;
                recordCompressedBuffer.resize(newSize);
            }

            long dataposition = position + headerLengthBytes;
            stream.seekg(dataposition, std::ios::beg);

            if (position + dataBufferLengthBytes + recordHeader.headerLength > inputSize) {
                printf("**** warning : record at position %ld is incomplete.", position);
                return false;
            }

            stream.read((&recordCompressedBuffer[0]), dataBufferLengthBytes);

            int decompressedLength = recordHeader.indexDataLength + recordHeader.userHeaderLength +
                                     recordHeader.userHeaderLengthPadding + recordHeader.recordDataLength;

            if (recordBuffer.size() < decompressedLength) {
                // Buffer resizes by 20% --- modified by me
                int resize_fraction = (int) (decompressedLength * 0.2);
                //printf(" resizing internal buffer from %lu to %d\n", recordBuffer.size(), recordHeader.recordDataLength);
                recordBuffer.resize(decompressedLength + resize_fraction);
            }

            readBenchmark.pause();
            unzipBenchmark.resume();
            if (recordHeader.compressionType == 0) {
                printf("compression type = 0 data length = %d\n", decompressedLength);
                memcpy((&recordBuffer[0]), (&recordCompressedBuffer[0]), decompressedLength);
            } else {
                getUncompressed((&recordCompressedBuffer[0]), (&recordBuffer[0]),
                                dataBufferLengthBytes - compressedDataLengthPadding, decompressedLength);
            }
            unzipBenchmark.pause();

            /**
             * converting index array from lengths of each buffer in the
             * record to relative positions in the record stream.
             */
            indexBenchmark.resume();
            int eventPosition = 0;
            for (int i = 0; i < recordHeader.numberOfEvents; i++) {
                auto *ptr = reinterpret_cast<int *>(&recordBuffer[i * 4]);
                int size  = *ptr;
                if (recordHeader.dataEndianness == 1) size = static_cast<int>(__builtin_bswap32(size));
                eventPosition += size;
                *ptr = eventPosition;
            }
            indexBenchmark.pause();
            return true;
        }

        /**
         * returns number of events in the record.
         */
        [[nodiscard]] int getEventCount() const { return recordHeader.numberOfEvents; }
        [[nodiscard]] int getRecordSizeCompressed() const { return recordHeader.recordLength; }

        void readHipoEvent(hipo::event &event, int index) {
            data event_data;
            getData(event_data, index);
            event.init(event_data.getDataPtr(), event_data.getDataSize());
        }

        /**
         * returns a data object that points to the event inside of the
         * record. For given index the data object will be filled with the
         * pointer to the position in the buffer where the event starts and
         * with the size indicating length of the event.
        */
        void getData(data &data, int index) {
            int first_position = 0;
            if (index > 0) { first_position = *(reinterpret_cast<int *>(&recordBuffer[(index - 1) * 4])); }
            int last_position = *(reinterpret_cast<int *>(&recordBuffer[index * 4]));
            int offset =
                    recordHeader.indexDataLength + recordHeader.userHeaderLength + recordHeader.userHeaderLengthPadding;
            data.setDataPtr(&recordBuffer[first_position + offset]);
            data.setDataSize(last_position - first_position);
            data.setDataOffset(first_position + offset);
        }

        benchmark &getReadBenchmark() { return readBenchmark; }
        benchmark &getUnzipBenchmark() { return unzipBenchmark; }
        benchmark &getIndexBenchmark() { return indexBenchmark; }
    };
}  // namespace hipo
#endif
