# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.26.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.26.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Examples

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Examples/build

# Include any dependencies generated for this target.
include CMakeFiles/energycalctb.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/energycalctb.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/energycalctb.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/energycalctb.dir/flags.make

CMakeFiles/energycalctb.dir/src/sha3/energycalc_tb.cc.o: CMakeFiles/energycalctb.dir/flags.make
CMakeFiles/energycalctb.dir/src/sha3/energycalc_tb.cc.o: /Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Examples/src/sha3/energycalc_tb.cc
CMakeFiles/energycalctb.dir/src/sha3/energycalc_tb.cc.o: CMakeFiles/energycalctb.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Examples/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/energycalctb.dir/src/sha3/energycalc_tb.cc.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/energycalctb.dir/src/sha3/energycalc_tb.cc.o -MF CMakeFiles/energycalctb.dir/src/sha3/energycalc_tb.cc.o.d -o CMakeFiles/energycalctb.dir/src/sha3/energycalc_tb.cc.o -c /Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Examples/src/sha3/energycalc_tb.cc

CMakeFiles/energycalctb.dir/src/sha3/energycalc_tb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/energycalctb.dir/src/sha3/energycalc_tb.cc.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Examples/src/sha3/energycalc_tb.cc > CMakeFiles/energycalctb.dir/src/sha3/energycalc_tb.cc.i

CMakeFiles/energycalctb.dir/src/sha3/energycalc_tb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/energycalctb.dir/src/sha3/energycalc_tb.cc.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Examples/src/sha3/energycalc_tb.cc -o CMakeFiles/energycalctb.dir/src/sha3/energycalc_tb.cc.s

# Object files for target energycalctb
energycalctb_OBJECTS = \
"CMakeFiles/energycalctb.dir/src/sha3/energycalc_tb.cc.o"

# External object files for target energycalctb
energycalctb_EXTERNAL_OBJECTS =

energycalctb: CMakeFiles/energycalctb.dir/src/sha3/energycalc_tb.cc.o
energycalctb: CMakeFiles/energycalctb.dir/build.make
energycalctb: /usr/local/lib/libcomposer.dylib
energycalctb: CMakeFiles/energycalctb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Examples/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable energycalctb"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/energycalctb.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/energycalctb.dir/build: energycalctb
.PHONY : CMakeFiles/energycalctb.dir/build

CMakeFiles/energycalctb.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/energycalctb.dir/cmake_clean.cmake
.PHONY : CMakeFiles/energycalctb.dir/clean

CMakeFiles/energycalctb.dir/depend:
	cd /Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Examples/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Examples /Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Examples /Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Examples/build /Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Examples/build /Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Examples/build/CMakeFiles/energycalctb.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/energycalctb.dir/depend
