/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   utils.h
 * Author: gavalian
 *
 * Created on April 27, 2017, 10:01 AM
 */

#ifndef UTILS_H
#define UTILS_H

#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

namespace hipo {

    class utils {
    private:
    public:
        [[maybe_unused]] utils()  = default;
        [[maybe_unused]] ~utils() = default;
        [[maybe_unused]] static void tokenize(const std::string &str, std::vector<std::string> &tokens,
                                              const std::string &delimiters = " ") {
            // Skip delimiters at beginning.
            std::string::size_type lastPos = str.find_first_not_of(delimiters, 0);
            // Find first "non-delimiter".
            std::string::size_type pos = str.find_first_of(delimiters, lastPos);


            while (std::string::npos != pos || std::string::npos != lastPos) {
                // Found a token, add it to the vector.
                tokens.push_back(str.substr(lastPos, pos - lastPos));
                // Skip delimiters.  Note the "not_of"
                lastPos = str.find_first_not_of(delimiters, pos);
                // Find next "non-delimiter"
                pos = str.find_first_of(delimiters, lastPos);
            }
        }

        [[maybe_unused]] static std::string substring(const std::string &str, const char *start_delim,
                                                      const char *end_delim, int order) {
            int firstPos = hipo::utils::findposition(str, start_delim, order);
            if (firstPos < 0) return {};
            int lastPos = static_cast<int>(str.find_first_of(end_delim, firstPos + 1));
            if (lastPos == std::string::npos) return {};
            int length = lastPos - firstPos - 1;
            return str.substr(firstPos + 1, length);
        }

        /**
         * finds postion of the dalim in the string, while skipping "order" times.
         */
        [[maybe_unused]] static int findposition(const std::string &str, const char *delim, int order) {
            int found    = 0;
            int position = 0;
            int firstPos = static_cast<int>(str.find_first_of(delim, position));
            if (firstPos == std::string::npos) return -1;
            position = firstPos;
            while (found != order) {
                firstPos = static_cast<int>(str.find_first_of(delim, position + 1));
                if (firstPos == std::string::npos) return -1;
                position = firstPos;
                found++;
            }
            return position;
        }

        [[maybe_unused]] static std::string &ltrim(std::string &str, const std::string &chars = "\t\n\v\f\r ") {
            str.erase(0, str.find_first_not_of(chars));
            return str;
        }
        [[maybe_unused]] static std::string &rtrim(std::string &str, const std::string &chars = "\t\n\v\f\r ") {
            str.erase(str.find_last_not_of(chars) + 1);
            return str;
        }
        [[maybe_unused]] static std::string &trim(std::string &str, const std::string &chars = "\t\n\v\f\r ") {
            return ltrim(rtrim(str, chars), chars);
        }

        [[maybe_unused]] static void printLogo() {
            std::cout << "************************************************" << std::endl;
            std::cout << "*         >=<      :  ---------------------    *" << std::endl;
            std::cout << "*    ,.--'  ''-.   :  HIPO 4.0 I/O Library     *" << std::endl;
            std::cout << "*    (  )  ',_.'   :  Jefferson National Lab   *" << std::endl;
            std::cout << "*     Xx'xX        :  Date: 01/24/2019         *" << std::endl;
            std::cout << "************************************************" << std::endl;
            std::cout << std::endl;
        }

        [[maybe_unused]] static std::string getHeader() {
            std::string header;
            header.append("//***********************************************************************\n");
            header.append("//***********************************************************************\n");
            header.append("//    ____  ____  _____  _______     ___      ______       __  \n");
            header.append("//   |_   ||   _||_   _||_   __ \\  .'   `.   / ____ `.    /  | \n");
            header.append("//     | |__| |    | |    | |__) |/  .-.  \\  `'  __) |    `| |  \n");
            header.append("//     |  __  |    | |    |  ___/ | |   | |  _  |__ '.     | |  \n");
            header.append("//    _| |  | |_  _| |_  _| |_    \\  `-'  / | \\____) | _  _| |_  \n");
            header.append("//   |____||____||_____||_____|    `.___.'   \\______.'(_)|_____| \n");
            header.append("// \n");
            header.append("//======================================================================= \n");
            header.append("// Autogenerated code by HIPO 3.1 io library\n");
            header.append("// Modify the main loop to suite your needs\n");
            header.append("// Date: \n");
            header.append("//***********************************************************************\n");
            return header;
        }

        [[maybe_unused]] static std::string getFileHeader() {
            std::string file_header;
            std::string comments = hipo::utils::getHeader();
            file_header.append(comments);
            file_header.append("#include <cstdlib>\n#include <iostream>\n\n");
            file_header.append("#include \"reader.h\"\n#include \"node.h\"\n");
            file_header.append("\nint main(int argc, char** argv) {\n");
            file_header.append("   std::cout << \" reading file example program (HIPO) \" << std::endl;\n");
            file_header.append("   char inputFile[256];\n\n");
            file_header.append("   if(argc>1) {\n      sprintf(inputFile,\"%s\",argv[1]);\n   } else {\n ");
            file_header.append("     std::cout << \" *** please provide a file name...\" << std::endl;\n");
            file_header.append("     exit(0);\n   }\n\n");
            file_header.append("   hipo::reader  reader;\n");
            file_header.append("   reader.open(inputFile);\n\n");
            return file_header;
        }

        [[maybe_unused]] static std::string getFileTrailer(const char *code) {
            std::string file_trailer;
            file_trailer.append("\n");
            file_trailer.append("   //----------------------------------------------------\n");
            file_trailer.append("   //--  Main LOOP running through events and printing\n");
            file_trailer.append("   //--  values of the first decalred branch\n");
            file_trailer.append("   //----------------------------------------------------\n");
            file_trailer.append("   int entry = 0;\n");
            file_trailer.append("   while(reader.next()==true){\n");
            file_trailer.append("      entry++;\n");
            file_trailer.append("      std::cout << \"event # \" << entry << std::endl;\n");
            file_trailer.append(code);
            file_trailer.append("   }\n");
            file_trailer.append("   //----------------------------------------------------\n");
            file_trailer.append("}\n");
            file_trailer.append("//###### ENF OF GENERATED FILE #######\n");
            return file_trailer;
        }

        [[maybe_unused]] static std::string getSConstruct() {
            std::string std_string;
            std_string.append("#=================================================\n");
            std_string.append("# The SCONSTRUCT file for building HIPO project.\n");
            std_string.append("# \n");
            std_string.append("#=================================================\n");
            std_string.append("import glob\n");
            std_string.append("import os\n");
            std_string.append("import sys\n");
            std_string.append("#=================================================\n");
            std_string.append("# LOADING THE ENVIRONMENT\n");
            std_string.append("#=================================================\n");
            std_string.append(
                    "env = "
                    "Environment(CPPPATH=[\"include\",\".\",\"/usr/include\",\"/usr/local/include\",\"/opt/local/"
                    "include\",\"/group/clas12/packages/lz4/lib\",\"/group/clas12/packages/hipo-io/libcpp\"])\n");
            std_string.append("env.Append(ENV = os.environ)\n");
            std_string.append("env.Append(CPPPATH=[\"src/root\",\"src/evio\"])\n");
            std_string.append("env.Append(CCFLAGS=[\"-O2\",\"-fPIC\",\"-m64\",\"-fmessage-length=0\",\"-g\"])\n");
            std_string.append("env.Append(LIBPATH=[\"/opt/local/lib\",\"/usr/lib\",\"/usr/local/lib\",\"/group/clas12/"
                              "packages/lz4/lib\",\"lib\",\"/group/clas12/packages/hipo-io/lib\"])\n");
            std_string.append("env.Append(CONFIGUREDIR=[\"/group/clas12/packages/lz4/lib\",\"/group/clas12/packages/"
                              "hipo-io/lib\"])\n");
            std_string.append("#=================================================\n");
            std_string.append("# Check for compression libraries.\n");
            std_string.append("#=================================================\n");
            std_string.append("conf = Configure(env)\n");
            std_string.append("\n");
            std_string.append("if conf.CheckLib('libhipo'):\n");
            std_string.append("   print '\\n\\033[32m[**] >>>>> found library : HIPO'\n");
            std_string.append("   print ''\n");
            std_string.append("   env.Append(CCFLAGS=\"-D__HIPO__\")\n");
            std_string.append("    \n");
            std_string.append("if conf.CheckLib('liblz4'):\n");
            std_string.append("   print '\\n\\033[32m[**] >>>>> found library : LZ4'\n");
            std_string.append("   print '[**] >>>>> enabling lz4 compression. \\033[0m'\n");
            std_string.append("   print ''\n");
            std_string.append("   env.Append(CCFLAGS=\"-D__LZ4__\")\n");
            std_string.append("\n");
            std_string.append("if conf.CheckLib('libz'):\n");
            std_string.append("   print '\\n\\033[32m[**] >>>>> found library : libz'\n");
            std_string.append("   print '[**] >>>>> enabling gzip compression. \\033[0m'\n");
            std_string.append("   print ''\n");
            std_string.append("   env.Append(CCFLAGS=\"-D__LIBZ__\")\n");
            std_string.append("#=================================================\n");
            std_string.append("# BUILDING EXECUTABLE PROGRAM\n");
            std_string.append("#=================================================\n");
            std_string.append("runFileLoop   = env.Program(target=\"runFileLoop\",source=[\"runFileLoop.cc\"])\n");
            return std_string;
        }


        [[maybe_unused]] static void writeInt(char *buffer, int position, int value) {
            int *ptr = reinterpret_cast<int *>(&buffer[position]);
            *ptr     = value;
        }
        [[maybe_unused]] static void writeLong(char *buffer, int position, long value) {
            auto *ptr = reinterpret_cast<uint64_t *>(&buffer[position]);
            *ptr      = value;
        }
        [[maybe_unused]] static void writeByte(char *buffer, int position, uint8_t value) {
            auto *ptr = reinterpret_cast<uint8_t *>(&buffer[position]);
            *ptr      = value;
        }
    };

}// namespace hipo

#endif
