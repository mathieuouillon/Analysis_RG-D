#ifndef UNTITLED12_READERINDEX_HPP
#define UNTITLED12_READERINDEX_HPP

/**
  * READER index class is used to construct entire events
  * sequence from all records, and provides ability to canAdvance
  * through events where record number is automatically calculated
  * and triggers reading of the next record when events in the current
  * record are exhausted.
  */
#include <iostream>
#include <vector>

namespace hipo {
    class readerIndex {

    private:
        std::vector<int> recordEvents;
        std::vector<long> recordPosition;

        int currentRecord{};
        int currentEvent{};
        int currentRecordEvent{};

    public:
        readerIndex()  = default;
        ~readerIndex() = default;

        /**
         * Checks to determine if there are events left in the index buffer
         * @return true - if there are available events, false - otherwise
         */
        [[maybe_unused]] bool canAdvance() { return (currentEvent < getMaxEvents() - 1); }

        /**
         * Advances the event pointer to next. If the next event is in a different
         * record the record number is updated and events number in the record is
         * updated.
         * @return true - if the the next event is available, false - otherwise
         */
        [[maybe_unused]] bool advance() {
            if (recordEvents.empty()) return false;
            if (currentEvent + 1 < recordEvents[currentRecord + 1]) {
                currentEvent++;
                currentRecordEvent++;
                return true;
            }
            if (static_cast<int>(recordEvents.size()) < currentRecord + 2 + 1) {
                std::cout << "advance() : Warning, reached the limit of events." << std::endl;
                return false;
            }
            currentEvent++;
            currentRecord++;
            currentRecordEvent = 0;
            return true;
        }

        /**
         * Checks to verify if the next event is in the same record as current one.
         * Not sure why Derek needed it ;-), but may be it's useful
         * @return true - if the next event is in the same record, false - otherwise
         */
        [[maybe_unused]] bool canAdvanceInRecord() { return (currentEvent < recordEvents[currentRecord + 1] - 1); }

        /**
         * Implemented by Derek for clas12tool purposes (I think - therefore I am)
         */
        [[maybe_unused]] bool loadRecord(int irec) {
            if (irec == 0) {
                currentEvent       = -1;
                currentRecord      = 0;
                currentRecordEvent = -1;
                return true;
            }
            if (irec + 1 > (int) recordEvents.size()) return false;

            currentEvent       = recordEvents[irec] - 1;
            currentRecord      = irec;
            currentRecordEvent = -1;
            return true;
        }

        /**
         * Moves the event pointer to give event number. The record number and
         * relative event number in the record are recalculated.
         * @param event number to jump to
         * @return true - if event number is valid event, false - otherwise
         */
        [[maybe_unused]] bool gotoEvent(int eventNumber) {
            // The proper record number is found by binary search through records array
            auto l_bound       = std::lower_bound(recordEvents.begin(), recordEvents.end(), eventNumber);
            long position      = (l_bound - recordEvents.begin()) - 1;
            currentRecord      = static_cast<int>(position);
            currentRecordEvent = eventNumber - recordEvents[currentRecord];
            currentEvent       = eventNumber;
            return true;
        }

        /**
         * Sets the event pointer to the first even of provided record.
         * Originally implemenet by Derek as loadRecord(), I changed the
         * name to keep naming consistent, but left the old one not to break
         * clas12root code.
         * @param irec - the record number to jump to
         * @return true - if the provided record is valid, false - otherwise
         */
        [[maybe_unused]] bool gotoRecord(int irec) {
            if (irec == 0) {
                currentEvent       = -1;
                currentRecord      = 0;
                currentRecordEvent = -1;
                return true;
            }
            if (irec + 1 > (int) recordEvents.size()) return false;
            currentEvent       = recordEvents[irec] - 1;
            currentRecord      = irec;
            currentRecordEvent = -1;
            return true;
        }

        [[nodiscard]] int getEventNumber() const { return currentEvent; }
        [[nodiscard]] int getRecordNumber() const { return currentRecord; }
        [[nodiscard]] int getRecordEventNumber() const { return currentRecordEvent; }

        /**
         * Returns maximum number of events available to read.
         * @return maximum number of events.
         */
        [[maybe_unused]] int getMaxEvents() {
            if (recordEvents.empty()) return 0;
            return recordEvents[recordEvents.size() - 1];
        }

        /**
         * Adds record size (number of events) to the list of records.
         */
        [[maybe_unused]] void addSize(int size) {
            if (recordEvents.empty()) {
                recordEvents.push_back(0);
                recordEvents.push_back(size);
            } else {
                int cz = recordEvents[recordEvents.size() - 1] + size;
                recordEvents.push_back(cz);
            }
        }
        [[maybe_unused]] void addPosition(long position) { recordPosition.push_back(position); }
        [[maybe_unused]] long getPosition(int index) { return recordPosition[index]; }

        [[nodiscard]] auto getNRecords() const -> int { return static_cast<int>(recordEvents.size()); }

        [[maybe_unused]] void rewind() {
            currentRecord      = -1;
            currentEvent       = -1;
            currentRecordEvent = -1;
        }

        [[maybe_unused]] void clear() {
            recordEvents.clear();
            recordPosition.clear();
        }

        [[maybe_unused]] void reset() {
            currentRecord      = 0;
            currentEvent       = 0;
            currentRecordEvent = 0;
        }
    };
}// namespace hipo

#endif
