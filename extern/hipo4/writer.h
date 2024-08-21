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
 *This sowftware was developed at Jefferson National Laboratory.
 */
/**
  * <pre>
  *
  * FILE HEADER STRUCTURE ( 56 bytes, 14 integers (32 bit) )
  *
  *    +----------------------------------+
  *  1 |              ID                  | // HIPO: 0x43455248, Evio: 0x4556494F
  *    +----------------------------------+
  *  2 +          File Number             | // split file #
  *    +----------------------------------+
  *  3 +         Header Length            | // 14 (words)
  *    +----------------------------------+
  *  4 +      Record (Index) Count        |
  *    +----------------------------------+
  *  5 +      Index Array Length          | // bytes
  *    +-----------------------+----------+
  *  6 +       Bit Info        | Version  | // version (8 bits)
  *    +-----------------------+----------+
  *  7 +      User Header Length          | // bytes
  *    +----------------------------------+
  *  8 +          Magic Number            | // 0xc0da0100
  *    +----------------------------------+
  *  9 +          User Register           |
  *    +--                              --+
  * 10 +                                  |
  *    +----------------------------------+
  * 11 +         Trailer Position         | // File offset to trailer head (64 bits).
  *    +--                              --+ // 0 = no offset available or no trailer exists.
  * 12 +                                  |
  *    +----------------------------------+
  * 13 +          User Integer 1          |
  *    +----------------------------------+
  * 14 +          User Integer 2          |
  *    +----------------------------------+
  *
  * -------------------
  *   Bit Info Word
  * -------------------
  *     0-7  = version
  *     8    = true if dictionary is included (relevant for first record only)
  *     9    = true if this file has "first" event (in every split file)
  *    10    = File trailer with index array exists
  *    11-19 = reserved
  *    20-21 = pad 1
  *    22-23 = pad 2
  *    24-25 = pad 3 (always 0)
  *    26-27 = reserved
  *    28-31 = general header type: 1 = Evio file
  *                                 2 = Evio extended file
  *                                 5 = HIPO file
  *                                 6 = HIPO extended file
  *
  * </pre>
  *
  * @version 6.0
  * @since 6.0 9/6/17
  */
/*
 * File:   writer.h
 * Author: gavalian
 *
 * Created on April 11, 2017, 2:07 PM
 */

#ifndef HIPOWRITER_H
#define HIPOWRITER_H

#include "reader.h"
#include "recordbuilder.h"

#include <climits>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <memory>
#include <vector>

namespace hipo {

    struct hipoFileHeader_t {
        int uniqueid;
        int filenumber;
        int headerLength;// in words (usually 14)
        int recordCount;
        int indexArrayLength;// in bytes
        int bitInfoVersion;
        int userHeaderLength;
        int magicNumber;
        long userRegister;
        long trailerPosition;
        int userIntegerOne;
        int userIntegerTwo;
    };

    struct recordInfo_t {
        long recordPosition{};
        int recordLength{};
        int recordEntries{};
        long userWordOne{};
        long userWordTwo{};
    };

    /**
     * READER index class is used to construct entire events
     * sequence from all records, and provides ability to canAdvance
     * through events where record number is automatically calculated
     * and triggers reading of the next record when events in the current
     * record are exhausted.
     */
    class [[maybe_unused]] writer {

    private:
        std::ofstream outputStream;
        hipo::recordbuilder recordBuilder;
        hipo::dictionary writerDictionary;
        std::vector<hipo::recordInfo_t> writerRecordInfo;

        [[maybe_unused]] void writeIndexTable() {
            hipo::schema indexSchema("file::index", 32111, 1);
            indexSchema.parse("position/L,length/I,entries/I,userWordOne/L,userWordTwo/L");
            int nEntries       = static_cast<int>(writerRecordInfo.size());
            long indexPosition = outputStream.tellp();
            // printf("\n\n-----> writing file index : entries = %d, position = %ld\n", nEntries, indexPosition);
            hipo::bank indexBank(indexSchema, nEntries);
            for (int i = 0; i < nEntries; i++) {
                recordInfo_t recordInfo = writerRecordInfo[i];
                indexBank.putLong("position", i, recordInfo.recordPosition);
                indexBank.putInt("length", i, recordInfo.recordLength);
                indexBank.putInt("entries", i, recordInfo.recordEntries);
                indexBank.putLong("userWordOne", i, recordInfo.userWordOne);
                indexBank.putLong("userWordTwo", i, recordInfo.userWordTwo);
            }

            int eventSize = 32 * nEntries + 1024;

            hipo::event indexEvent(eventSize);
            indexEvent.addStructure(indexBank);
            recordBuilder.reset();
            recordBuilder.addEvent(indexEvent);
            writeRecord(recordBuilder);
            outputStream.seekp(40);
            outputStream.write(reinterpret_cast<char *>(&indexPosition), 8);
        }

    public:
        writer() = default;
        writer(const writer &writer1) {}
        virtual ~writer() = default;

        [[maybe_unused]] void addEvent(hipo::event &hevent) {
            bool status = recordBuilder.addEvent(hevent);
            if (!status) {
                writeRecord(recordBuilder);
                recordBuilder.addEvent(hevent);
            }
        }

        [[maybe_unused]] void addEvent(std::vector<char> &vec, int size = -1) {
            int transferSize = size;
            if (size < 0) { transferSize = static_cast<int>(vec.size()); }
            bool status = recordBuilder.addEvent(vec, 0, transferSize);
            if (!status) {
                writeRecord(recordBuilder);
                recordBuilder.addEvent(vec, 0, transferSize);
            }
        }


        [[maybe_unused]] void writeRecord(recordbuilder &builder) {
            builder.build();
            recordInfo_t recordInfo;
            recordInfo.recordPosition = outputStream.tellp();
            recordInfo.recordEntries  = builder.getEntries();
            recordInfo.recordLength   = builder.getRecordSize();
            recordInfo.userWordOne    = builder.getUserWordOne();
            recordInfo.userWordTwo    = builder.getUserWordTwo();
            if (recordInfo.recordEntries > 0) {
                outputStream.write(reinterpret_cast<char *>(&builder.getRecordBuffer()[0]), recordInfo.recordLength);
                writerRecordInfo.push_back(recordInfo);
                //printf("%6ld : writing::record : size = %8d, entries = %8d, position = %12ld word = %12ld %12ld\n",
                //       writerRecordInfo.size(), recordInfo.recordLength, recordInfo.recordEntries,
                //       recordInfo.recordPosition, recordInfo.userWordOne, recordInfo.userWordTwo);
            } else {
                // printf(" write::record : empty record will not be written.....");
            }
            builder.reset();
        }

        void open(const std::string &file) { open(file.c_str()); }

        /**
         * Open a File for writing, it includes the dictionary
         * in the file.
         */
        [[maybe_unused]] void open(const char *filename) {
            outputStream.open(filename);

            std::vector<std::string> schemaList = writerDictionary.getSchemaList();

            recordbuilder builder;
            event schemaEvent;

            for (auto &i: schemaList) {
                std::string schemaString     = writerDictionary.getSchema(i.c_str()).getSchemaString();
                std::string schemaStringJson = writerDictionary.getSchema(i.c_str()).getSchemaStringJson();
                //---> Can open after debug level is introduced in the class
                //printf("STR  : %s\n",schemaString.c_str());
                //printf("JSON : %s\n",schemaStringJson.c_str());
                schemaEvent.reset();
                structure schemaNode(120, 2, schemaString);
                structure schemaNodeJson(120, 1, schemaStringJson);
                schemaEvent.addStructure(schemaNode);
                schemaEvent.addStructure(schemaNodeJson);
                schemaEvent.show();
                builder.addEvent(schemaEvent);
            }


            // printf(" RECORD SIZE BEFORE BUILD = %d\n", builder.getRecordSize());
            builder.build();
            // printf(" RECORD SIZE AFTER  BUILD = %d, NENTRIES = %d\n", builder.getRecordSize(), builder.getEntries());

            int dictionarySize = builder.getRecordSize();

            hipoFileHeader_t header{};

            header.uniqueid         = 0x43455248;
            header.filenumber       = 1;
            header.headerLength     = 14;
            header.recordCount      = 0;
            header.indexArrayLength = 0;
            header.bitInfoVersion   = (0x000000FF & 6);
            header.userHeaderLength = dictionarySize;// will change with the dictionary
            header.magicNumber      = static_cast<int>(0xc0da0100);
            header.userRegister     = 0;
            header.trailerPosition  = 0;
            header.userIntegerOne   = 0;
            header.userIntegerTwo   = 0;

            outputStream.write(reinterpret_cast<char *>(&header), sizeof(header));
            long position = outputStream.tellp();

            // printf("writing     header:: position = %ld\n", position);
            outputStream.write(reinterpret_cast<char *>(&builder.getRecordBuffer()[0]), dictionarySize);
            position = outputStream.tellp();
            // printf("writing dictionary:: position = %ld\n", position);
        }

        void close() {
            writeRecord(recordBuilder);
            writeIndexTable();
            outputStream.close();
        }

        void showSummary() {
            for (int loop = 0; loop < writerRecordInfo.size(); loop++) {
                recordInfo_t recordInfo = writerRecordInfo[loop];
                // printf(" %6d : record INFO : size = %8d, entries = %8d, position = %12ld word = %12ld %12ld\n", loop,
                //        recordInfo.recordLength, recordInfo.recordEntries, recordInfo.recordPosition,
                //        recordInfo.userWordOne, recordInfo.userWordTwo);
            }
        }

        void addDictionary(hipo::dictionary &dict) {
            std::vector<std::string> schemaList = dict.getSchemaList();
            for (auto &i: schemaList) { writerDictionary.addSchema(dict.getSchema(i.c_str())); }
        }

        hipo::dictionary &getDictionary() { return writerDictionary; }
        void setUserIntegerOne(long userIntOne) { recordBuilder.setUserWordOne(userIntOne); }
        void setUserIntegerTwo(long userIntTwo) { recordBuilder.setUserWordTwo(userIntTwo); }
        void flush() { writeRecord(recordBuilder); }
    };

}// namespace hipo
#endif
