#ifndef SCHEMA_HPP
#define SCHEMA_HPP

#include "utils.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <map>
#include <string>
#include <vector>

namespace hipo {
    struct schemaEntry_t {
        std::string name;
        std::string type;
        int typeId{};
        int typeSize{};
        int offset{};
    };

    class schema {
    private:
        std::map<std::string, int> schemaEntriesMap;
        std::vector<hipo::schemaEntry_t> schemaEntries;

        int groupid{};
        int itemid{};
        int rowLength{};
        mutable int warningCount{10};

        std::string schemaName;


        static int getTypeSize(int id) {
            switch (id) {
                case 1:
                    return 1;
                case 2:
                    return 2;
                case 3:
                case 4:
                    return 4;
                case 5:
                case 8:
                    return 8;
                default:
                    return 0;
            }
        }
        static int getTypeByString(std::string &typeName) {
            if (typeName == "B") {
                return 1;
            } else if (typeName == "S") {
                return 2;
            } else if (typeName == "I") {
                return 3;
            } else if (typeName == "F") {
                return 4;
            } else if (typeName == "D") {
                return 5;
            } else if (typeName == "L") {
                return 8;
            }
            return -1;
        }


    public:
        schema() {
            groupid   = 0;
            itemid    = 0;
            rowLength = 0;
        }
        schema(const char *name, int _group, int _item) {
            schemaName = name;
            groupid    = _group;
            itemid     = _item;
        }
        schema(const schema &s) {
            schemaName       = s.schemaName;
            schemaEntries    = s.schemaEntries;
            schemaEntriesMap = s.schemaEntriesMap;
            groupid          = s.groupid;
            itemid           = s.itemid;
        }

        virtual ~schema() = default;

        void parse(const std::string &schString) {
            std::vector<std::string> entries;
            std::vector<std::string> entry;
            hipo::utils::tokenize(schString, entries, ",");
            int offset = 0;
            for (int i = 0; i < entries.size(); i++) {
                entry.clear();
                hipo::utils::tokenize(entries[i], entry, "/");
                hipo::schemaEntry_t e;
                e.name     = hipo::utils::trim(entry[0]);
                e.type     = hipo::utils::trim(entry[1]);
                e.typeId   = getTypeByString(e.type);
                e.typeSize = getTypeSize(e.typeId);
                e.offset   = offset;
                offset += e.typeSize;
                schemaEntries.push_back(e);
                schemaEntriesMap[e.name] = i;
            }
        }

        std::string getName() { return schemaName; }
        int getGroup() const { return groupid; }
        int getItem() const { return itemid; }

        int getSizeForRows(int rows) {
            int nentries = static_cast<int>(schemaEntries.size());
            int offset   = getOffset(nentries - 1, rows - 1, rows) + schemaEntries[nentries - 1].typeSize;
            return offset;
        }

        int getRowLength() const noexcept {
            const auto nentries = schemaEntries.size() - 1;
            const auto &sch     = schemaEntries[nentries];
            return sch.offset + sch.typeSize;
        }

        int getEntryOrder(const char *name) const {
            if (exists(name)) return schemaEntriesMap.at(name);//at needed for const function

            if (warningCount > 0) {
                warningCount--;
                std::cout << "Warning , hipo::schema getEntryOrder(const char *name) item :" << name
                          << " not found, for bank " << schemaName << " data for this item is not valid " << std::endl;
            }
            return 0;
        }

        bool exists(const char *name) const {
            if (schemaEntriesMap.count(name)) return true;
            return false;
        }

        int getOffset(int item, int order, int rows) const {
            const auto &sch = schemaEntries[item];
            return rows * sch.offset + order * sch.typeSize;
        }

        [[maybe_unused]] int getOffset(const char *name, int order, int rows) const {
            int item = schemaEntriesMap.at(name);
            return getOffset(item, order, rows);
        }

        int getEntryType(int item) const noexcept { return schemaEntries[item].typeId; }
        std::string getEntryTypeString(int item) const noexcept { return schemaEntries[item].type; }
        std::string getEntryName(int item) const noexcept { return schemaEntries[item].name; }
        int getEntries() const noexcept { return static_cast<int>(schemaEntries.size()); }

        [[maybe_unused]] void show() {
            printf("schema : %14s , group = %6d, item = %3d\n", schemaName.c_str(), groupid, itemid);
            for (auto &schemaEntrie: schemaEntries) {
                printf("%16s : (%3s) %5d %5d , offset = %3d --> [%s]\n", schemaEntrie.name.c_str(),
                       schemaEntrie.type.c_str(), schemaEntrie.typeId, schemaEntrie.typeSize, schemaEntrie.offset,
                       schemaEntrie.name.c_str());
            }
        }

        [[maybe_unused]] std::string getSchemaString() {
            char parts[256];
            std::string result;
            sprintf(parts, "{%s/%d/%d}{", schemaName.c_str(), groupid, itemid);
            result.append(parts);
            for (int loop = 0; loop < schemaEntries.size(); loop++) {
                sprintf(parts, "%s/%s", schemaEntries[loop].name.c_str(), schemaEntries[loop].type.c_str());
                if (loop != 0) result.append(",");
                result.append(parts);
            }
            result.append("}");
            return result;
        }

        [[maybe_unused]] std::string getSchemaStringJson() {
            char parts[256];
            std::string result;
            sprintf(parts, R"({ "name": "%s", "group": %d, "item": %d, "info": " ",)", schemaName.c_str(), groupid,
                    itemid);
            result.append(parts);
            result.append("\"entries\": [ ");
            for (int loop = 0; loop < schemaEntries.size(); loop++) {
                sprintf(parts, R"({"name":"%s", "type":"%s", "info":" "})", schemaEntries[loop].name.c_str(),
                        schemaEntries[loop].type.c_str());
                if (loop != 0) result.append(",");
                result.append(parts);
            }
            result.append("] }");
            return result;
        }

        schema &operator=(const schema &D) {
            schemaName       = D.schemaName;
            groupid          = D.groupid;
            itemid           = D.itemid;
            schemaEntries    = D.schemaEntries;
            schemaEntriesMap = D.schemaEntriesMap;

            return *this;
        }
    };

}// namespace hipo
#endif
