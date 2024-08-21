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
 * File:   reader.h
 * Author: gavalian
 *
 * Created on April 11, 2017, 2:07 PM
 */

#ifndef HIPOREADER_H
#define HIPOREADER_H

#include "bank.h"
#include "data.hpp"
#include "readerindex.hpp"
#include "record.h"
#include "utils.h"
#include <climits>

#include "../extern/lz4/lib/lz4.h"

#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <memory>
#include <sstream>
#include <utility>
#include <vector>

namespace hipo {

    struct fileHeader_t {
        int uniqueid{};
        int filenumber{};
        int headerLength{};// in words (usually 14)
        int recordCount{};
        int indexArrayLength{};// in bytes
        int bitInfo{};
        int version{};
        int userHeaderLength{};
        int magicNumber{};
        long userRegister{};
        long trailerPosition{};
        long firstRecordPosition{};
    };

    class reader {

    private:
        std::string fileName{};
        fileHeader_t header{};
        hipo::utils hipoUtils;
        std::ifstream inputStream;
        long inputStreamSize{};

        hipo::record inputRecord;
        hipo::readerIndex readerEventIndex;
        std::vector<long> tagsToRead;
        short _verbose = 0;

        /**
         * Reads the file header. The endiannes is determined for bytes
         * swap. The header structure will be filled with file parameters.
         */
        auto readHeader() -> void {

            std::vector<char> headerBuffer;
            headerBuffer.resize(80);
            inputStream.read(&headerBuffer[0], 80);

            header.uniqueid     = *(reinterpret_cast<int *>(&headerBuffer[0]));
            header.filenumber   = *(reinterpret_cast<int *>(&headerBuffer[4]));
            header.headerLength = *(reinterpret_cast<int *>(&headerBuffer[8]));
            header.recordCount  = *(reinterpret_cast<int *>(&headerBuffer[12]));

            header.indexArrayLength = *(reinterpret_cast<int *>(&headerBuffer[16]));
            int word_8              = *(reinterpret_cast<int *>(&headerBuffer[20]));

            header.userHeaderLength = *(reinterpret_cast<int *>(&headerBuffer[24]));
            header.magicNumber      = *(reinterpret_cast<int *>(&headerBuffer[28]));
            header.userRegister     = *(reinterpret_cast<long *>(&headerBuffer[32]));
            header.trailerPosition  = *(reinterpret_cast<long *>(&headerBuffer[40]));

            // If magic word is reversed, then the file was written in BIG_ENDIAN format, the bytes have to be swapped
            if (header.magicNumber == 0x0001dac0) {
                std::cout << " THIS FILE IS BIG ENDIAN: SWAPPING BYTES" << std::endl;
                header.uniqueid         = static_cast<int>(__builtin_bswap32(header.uniqueid));
                header.filenumber       = static_cast<int>(__builtin_bswap32(header.filenumber));
                header.headerLength     = static_cast<int>(__builtin_bswap32(header.headerLength));
                header.recordCount      = static_cast<int>(__builtin_bswap32(header.recordCount));
                header.userHeaderLength = static_cast<int>(__builtin_bswap32(header.userHeaderLength));
                header.indexArrayLength = static_cast<int>(__builtin_bswap32(header.indexArrayLength));
                word_8                  = static_cast<int>(__builtin_bswap32(word_8));
                header.userRegister     = static_cast<int>(__builtin_bswap64(header.userRegister));
                header.trailerPosition  = static_cast<int>(__builtin_bswap64(header.trailerPosition));
            }

            header.version             = word_8 & 0x000000FF;
            header.bitInfo             = (word_8 >> 8) & 0x00FFFFFF;
            header.firstRecordPosition = 4 * header.headerLength + header.userHeaderLength;
            if (_verbose) {
                std::cout << "----------------------------------------" << std::endl;
                std::cout << "**** reader:: header version   : %d \n" + std::to_string(header.version) << std::endl;
                std::cout << "**** reader:: header length    : %d \n" + std::to_string(header.headerLength * 4) << std::endl;
                std::cout << "**** reader:: first record pos : %lu\n" + std::to_string(header.firstRecordPosition) << std::endl;
                std::cout << "**** reader:: trailer position : %lu\n" + std::to_string(header.trailerPosition) << std::endl;
                std::cout << "**** reader:: file size        : %lu\n" + std::to_string(inputStreamSize) << std::endl;
                std::cout << "----------------------------------------" << std::endl;
            }
        }

        /**
         * Reads run index from the file. The index is in the last record of the
         * file, and the pointer to that record is contained in the File Header.
         * If the file was not properly closed event index will not be loaded
         * then file has to be opened in sequential more, to read record by record.
         * in sequential mode the random access is not available.
         */
        auto readIndex() -> void {

            inputRecord.readRecord(inputStream, header.trailerPosition);
            if (_verbose) std::cout << "*** reader:: trailer record event count : %d\n" << inputRecord.getEventCount() << std::endl;

            //a catch for broken files
            //can use hiporeader.getNRecords() to see if successful (=-1 if not)
            if (inputRecord.getEventCount() == 0) return;

            hipo::event event;
            inputRecord.readHipoEvent(event, 0);
            if (_verbose) event.show();
            hipo::structure base;
            event.getStructure(base, 32111, 1);
            if (_verbose) base.show();
            readerEventIndex.clear();
            int rows = base.getSize() / 32;

            for (int i = 0; i < rows; i++) {
                long position = base.getLongAt(i * 8);
                int entries   = base.getIntAt(rows * 12 + i * 4);
                long uid1     = base.getLongAt(rows * 16 + i * 8);
                if (tagsToRead.empty()) {
                    readerEventIndex.addSize(entries);
                    readerEventIndex.addPosition(position);
                } else {
                    bool accept = false;
                    for (long jr: tagsToRead) {
                        if (jr == uid1) accept = true;
                    }
                    if (accept) {
                        readerEventIndex.addSize(entries);
                        readerEventIndex.addPosition(position);
                    }
                }
            }
            readerEventIndex.rewind();
            if (_verbose) std::cout << "**** reader::  # of events     : %d \n" << readerEventIndex.getMaxEvents() << std::endl;
        }


    public:
        /**
          * The constructor for reader, printWarning routine
          * will printout a warning message if the library
          * was not compiled with compression libraries LZ4 or GZIP
          */
        reader() { printWarning(); }

        /**
         * Copy constructor. Do nothing
         * @param r
         */
        reader(const reader &r) = delete;

        /**
         * The constructor for reader, printWarning routine
         * will printout a warning message if the library
         * was not compiled with compression libraries LZ4 or GZIP.
         * @param fileName - input file which will be access.
         * @param dict - reference to dictionary object.
         * @param verbose - verbosity
         */
        explicit reader(const std::string &_fileName, hipo::dictionary &dict, short verbose = 0) {
            printWarning();

            _verbose = verbose;
            fileName = _fileName;
            open(_fileName.c_str());
            readDictionary(dict);

            if (_verbose) {
                std::string out = "Open file : " + _fileName + '\n';
                std::cout << out << std::flush;
            }
        }

        /**
         * Default destructor.
         */
        ~reader() {
            if (inputStream.is_open()) inputStream.close();
        }


        /**
         * Reads the dictionary for the file. C++ API is reading packed dictionary
         * format from node (120,2), parses each schema and creates schema dictionary.
         * @param dict - reference to dictionary object.
         */
        auto readDictionary(hipo::dictionary &dict) -> void {
            long position = header.headerLength * 4;
            hipo::record dictRecord;
            hipo::structure schemaStructure;
            hipo::event event;

            dictRecord.readRecord(inputStream, position);

            for (int i = 0; i < dictRecord.getEventCount(); i++) {
                dictRecord.readHipoEvent(event, i);
                event.getStructure(schemaStructure, 120, 2);
                dict.parse(schemaStructure.getStringAt().c_str());
            }
        }

        /**
         * Reads the structure from the current event without copying the event
         * buffer.
         * @param structure - reference to the structure object
         * @param group - the group is for the structure.
         * @param item  - item id for the structure.
         */
        auto getStructure(hipo::structure &structure, int group, int item) -> void {
            data data;
            int eventNumberInRecord = readerEventIndex.getRecordEventNumber();
            inputRecord.getData(data, eventNumberInRecord);
            event::getStructure(data.getDataPtr(), structure, group, item);
        }

        /**
         * Reads the structure from the current event without copying the event
         * buffer and without copying the structure buffer. This should be used
         * very carefully, since it sets the pointer of the structure directly
         * to the buffer owned by the record. If new record is loaded this
         * structure will be pointing to the wrong part of the buffer.
         * @param structure - reference to the structure object
         * @param group - the group is for the structure.
         * @param item  - item id for the structure.
         */
        auto getStructureNoCopy(hipo::structure &structure, int group, int item) -> void {
            data data;
            int eventNumberInRecord = readerEventIndex.getRecordEventNumber();
            inputRecord.getData(data, eventNumberInRecord);
            event::getStructureNoCopy(data.getDataPtr(), structure, group, item);
        }

        /**
         * Open file, if file stream is open, it is closed first.
         * At open time verification of file structure is performed.
         * If the signature does not match EVIO/HIPO template, the
         * file will be closed and warning message is printed.
         * @param filename - name of the file to open
         */
        auto open(const char *filename) -> void {

            if (inputStream.is_open()) { inputStream.close(); }

            inputStream.open(filename, std::ios::binary);
            inputStream.seekg(0, std::ios_base::end);
            inputStreamSize = inputStream.tellg();
            inputStream.seekg(0, std::ios_base::beg);
            if (!inputStream.is_open()) {
                std::cout << "[ERROR] something went wrong with openning file : %s\n" << filename << std::endl;
                return;
            }
            readHeader();
            readIndex();
        }

        void setTags(int tag) { tagsToRead.push_back(tag); }

        void setTags(std::vector<long> tags) { tagsToRead = std::move(tags); }

        void setVerbose(short level = 1) { _verbose = level; }

        /**
         * Checks if there are more events in the file to advance to.
         * @return true if there are events left to read, false - otherwise
         */
        auto hasNext() -> bool { return readerEventIndex.canAdvance(); }

        /**
         * Advances the event pointer to the next event. This does not read an
         * event, but if the event goes beyond boundary of the record the next
         * record is loaded into the memory.
         * @return returns true - if the are events available in the file, false - otherwise
         */
        auto next() -> bool {
            if (!readerEventIndex.canAdvance()) return false;
            int recordNumber = readerEventIndex.getRecordNumber();
            readerEventIndex.advance();
            int recordToBeRead = readerEventIndex.getRecordNumber();
            if (recordToBeRead != recordNumber) {
                long position = readerEventIndex.getPosition(recordToBeRead);
                inputRecord.readRecord(inputStream, position);
            }
            return true;
        }

        /**
         * Moves the pointer of the event to the event number provided. If the event
         * number is within the same record no reading is done, otherwise the appropriate
         * record is loaded and event indicies are updated.
         * @param eventNumber - number of event to jump to
         * @return true if event is available, false - otherwise
         */
        auto gotoEvent(int eventNumber) -> bool {
            int recordNumber = readerEventIndex.getRecordNumber();
            readerEventIndex.gotoEvent(eventNumber);
            int recordToBeRead = readerEventIndex.getRecordNumber();
            if (recordToBeRead != recordNumber) {
                long position = readerEventIndex.getPosition(recordToBeRead);
                inputRecord.readRecord(inputStream, position);
            }
            return true;
        }

        /**
         * Moves the current event pointer to the new record # irec. The readerIndex
         * is updated so current event is the first event in loaded record.
         * @param irec - record number to jump to
         * @return true - if the record exists, false - otherwise
         */
        auto gotoRecord(int irec) -> bool {
            bool status = readerEventIndex.gotoRecord(irec);
            if (!status) return false;
            long position = readerEventIndex.getPosition(irec);
            inputRecord.readRecord(inputStream, position);
            return true;
        }

        /**
         * Reads next event from the file, the event pointer is automatically
         * advanced to the next event.
         * @param reference to the event object to be filled from the record.
         * @return true if the event was successfully read, and false otherwise
         */
        auto next(hipo::event &dataevent) -> bool {
            int recordNumber = readerEventIndex.getRecordNumber();
            readerEventIndex.advance();
            int recordToBeRead = readerEventIndex.getRecordNumber();
            if (recordToBeRead != recordNumber) {
                long position = readerEventIndex.getPosition(recordToBeRead);
                inputRecord.readRecord(inputStream, position);
            }
            int eventNumberInRecord = readerEventIndex.getRecordEventNumber();
            inputRecord.readHipoEvent(dataevent, eventNumberInRecord);
            return true;
        }

        auto read(hipo::event &dataevent) -> void {
            int eventNumberInRecord = readerEventIndex.getRecordEventNumber();
            inputRecord.readHipoEvent(dataevent, eventNumberInRecord);
        }


        int getNRecords() const { return readerEventIndex.getNRecords() - 1; }

        auto nextInRecord() -> bool {
            if (!readerEventIndex.canAdvanceInRecord()) return false;
            readerEventIndex.advance();
            return true;
        }

        auto getEntries() -> int { return readerEventIndex.getMaxEvents(); }

        template<typename... Args, std::enable_if_t<std::is_same_v<Args, hipo::bank>, bool>...>
        auto for_each_arg(hipo::event &event, Args &...args) -> void {
            (event.getStructureBank(args), ...);
        }

        template<typename... Args, std::enable_if_t<std::is_same_v<Args, hipo::bank>, bool>...>
        auto next(hipo::event &event, Args &...args) -> bool {
            if (!readerEventIndex.canAdvance()) return false;
            int recordNumber = readerEventIndex.getRecordNumber();
            readerEventIndex.advance();
            int recordToBeRead = readerEventIndex.getRecordNumber();
            if (recordToBeRead != recordNumber) {
                long position = readerEventIndex.getPosition(recordToBeRead);
                inputRecord.readRecord(inputStream, position);
            }

            if (_verbose and readerEventIndex.getEventNumber() % (getEntries() / 10) == 0) {
                std::stringstream stream;
                stream << std::fixed << std::setprecision(2) << (100. * readerEventIndex.getEventNumber() / getEntries());
                std::string s = stream.str();
                auto out      = "Process " + fileName + " : " + s + "% \n";
                std::cout << out << std::flush;
            }

            read(event);
            for_each_arg(event, args...);

            return true;
        }

        static auto about() -> void { hipo::utils::printLogo(); }

        /**
         * Prints out warning if the LZ4 library was not linked to the compiled
         * library. In that case only uncompressed files can be read and written.
         */
        static auto printWarning() -> void {
#ifndef LZ4_H_2983827168210
            std::cout << "******************************************************" << std::endl;
            std::cout << "* WARNING:                                           *" << std::endl;
            std::cout << "*   This library war compiled without LZ4 support.   *" << std::endl;
            std::cout << "*   Reading and writing compressed buffers will not  *" << std::endl;
            std::cout << "*   work. However un-compressed file I/O will work.  *" << std::endl;
            std::cout << "******************************************************" << std::endl;
#endif
        }
    };
}// namespace hipo
#endif
