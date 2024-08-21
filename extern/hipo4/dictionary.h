/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   dictionary.h
 * Author: gavalian
 *
 * Created on April 27, 2017, 10:01 AM
 */

#ifndef DICTIONARY_H
#define DICTIONARY_H

#include "schema.hpp"
#include "utils.h"

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <map>
#include <string>
#include <vector>

namespace hipo {


    class dictionary {
    private:
        std::map<std::string, schema> factory;

    public:
        [[maybe_unused]] dictionary()          = default;
        [[maybe_unused]] virtual ~dictionary() = default;

        [[maybe_unused]] std::vector<std::string> getSchemaList() {
            std::map<std::string, schema>::iterator it;
            std::vector<std::string> vec;
            for (it = factory.begin(); it != factory.end(); it++) { vec.push_back(it->first); }
            return vec;
        }
        [[maybe_unused]] void addSchema(schema sc) { factory.insert({sc.getName(), sc}); }
        [[maybe_unused]] bool hasSchema(const char *name) { return (factory.count(name) != 0); }
        [[maybe_unused]] schema &getSchema(const char *name) { return factory[name]; }
        [[maybe_unused]] schema &getSchema(const std::string &name) { return factory[name]; }

        [[maybe_unused]] bool parse(const char *schemaString) {
            std::vector<std::string> tokens;
            std::string schemahead = hipo::utils::substring(schemaString, "{", "}", 0);
            hipo::utils::tokenize(schemahead, tokens, "/");
            int group = std::stoi(tokens[1]);
            int item  = std::stoi(tokens[2]);
            schema schema(tokens[0].c_str(), group, item);
            std::string schemabody = hipo::utils::substring(schemaString, "{", "}", 1);
            schema.parse(schemabody);
            addSchema(schema);
            return true;
        }

        [[maybe_unused]] void show() {
            std::vector<std::string> list = getSchemaList();
            for (auto &i: list) {
                schema sc = getSchema(i.c_str());
                printf("%24s : %5d %5d %5d\n", sc.getName().c_str(), sc.getGroup(), sc.getItem(), sc.getEntries());
            }
        }
    };

}// namespace hipo

#endif
