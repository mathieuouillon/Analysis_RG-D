# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/cmake/3.29.0/bin/cmake

# The command to remove a file.
RM = /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/cmake/3.29.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /work/clas12/ouillon/Analysis_RG-D

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /work/clas12/ouillon/Analysis_RG-D/Debug

# Include any dependencies generated for this target.
include CMakeFiles/Analysis_RG-D.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Analysis_RG-D.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Analysis_RG-D.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Analysis_RG-D.dir/flags.make

CMakeFiles/Analysis_RG-D.dir/source/main.cpp.o: CMakeFiles/Analysis_RG-D.dir/flags.make
CMakeFiles/Analysis_RG-D.dir/source/main.cpp.o: /work/clas12/ouillon/Analysis_RG-D/source/main.cpp
CMakeFiles/Analysis_RG-D.dir/source/main.cpp.o: CMakeFiles/Analysis_RG-D.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/work/clas12/ouillon/Analysis_RG-D/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Analysis_RG-D.dir/source/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Analysis_RG-D.dir/source/main.cpp.o -MF CMakeFiles/Analysis_RG-D.dir/source/main.cpp.o.d -o CMakeFiles/Analysis_RG-D.dir/source/main.cpp.o -c /work/clas12/ouillon/Analysis_RG-D/source/main.cpp

CMakeFiles/Analysis_RG-D.dir/source/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Analysis_RG-D.dir/source/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/clas12/ouillon/Analysis_RG-D/source/main.cpp > CMakeFiles/Analysis_RG-D.dir/source/main.cpp.i

CMakeFiles/Analysis_RG-D.dir/source/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Analysis_RG-D.dir/source/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/clas12/ouillon/Analysis_RG-D/source/main.cpp -o CMakeFiles/Analysis_RG-D.dir/source/main.cpp.s

# Object files for target Analysis_RG-D
Analysis_RG__D_OBJECTS = \
"CMakeFiles/Analysis_RG-D.dir/source/main.cpp.o"

# External object files for target Analysis_RG-D
Analysis_RG__D_EXTERNAL_OBJECTS =

Analysis_RG-D: CMakeFiles/Analysis_RG-D.dir/source/main.cpp.o
Analysis_RG-D: CMakeFiles/Analysis_RG-D.dir/build.make
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libCore.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libImt.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libRIO.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libNet.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libHist.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libGraf.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libGraf3d.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libGpad.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libROOTDataFrame.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libTree.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libTreePlayer.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libRint.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libPostscript.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libMatrix.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libPhysics.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libMathCore.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libThread.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libMultiProc.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libROOTVecOps.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libEG.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libFoam.so
Analysis_RG-D: /cvmfs/oasis.opensciencegrid.org/jlab/hallb/clas12/sw/almalinux9-gcc11/local/root/6.30.04/lib/libGenVector.so
Analysis_RG-D: CMakeFiles/Analysis_RG-D.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/work/clas12/ouillon/Analysis_RG-D/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Analysis_RG-D"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Analysis_RG-D.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Analysis_RG-D.dir/build: Analysis_RG-D
.PHONY : CMakeFiles/Analysis_RG-D.dir/build

CMakeFiles/Analysis_RG-D.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Analysis_RG-D.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Analysis_RG-D.dir/clean

CMakeFiles/Analysis_RG-D.dir/depend:
	cd /work/clas12/ouillon/Analysis_RG-D/Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/clas12/ouillon/Analysis_RG-D /work/clas12/ouillon/Analysis_RG-D /work/clas12/ouillon/Analysis_RG-D/Debug /work/clas12/ouillon/Analysis_RG-D/Debug /work/clas12/ouillon/Analysis_RG-D/Debug/CMakeFiles/Analysis_RG-D.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Analysis_RG-D.dir/depend
