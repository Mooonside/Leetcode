# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/yifeng/clion-2017.1.1/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/yifeng/clion-2017.1.1/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yifeng/LeetCodes/Range_Sum_Query

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yifeng/LeetCodes/Range_Sum_Query/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Range_Sum_Query.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Range_Sum_Query.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Range_Sum_Query.dir/flags.make

CMakeFiles/Range_Sum_Query.dir/main.cpp.o: CMakeFiles/Range_Sum_Query.dir/flags.make
CMakeFiles/Range_Sum_Query.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yifeng/LeetCodes/Range_Sum_Query/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Range_Sum_Query.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Range_Sum_Query.dir/main.cpp.o -c /home/yifeng/LeetCodes/Range_Sum_Query/main.cpp

CMakeFiles/Range_Sum_Query.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Range_Sum_Query.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yifeng/LeetCodes/Range_Sum_Query/main.cpp > CMakeFiles/Range_Sum_Query.dir/main.cpp.i

CMakeFiles/Range_Sum_Query.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Range_Sum_Query.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yifeng/LeetCodes/Range_Sum_Query/main.cpp -o CMakeFiles/Range_Sum_Query.dir/main.cpp.s

CMakeFiles/Range_Sum_Query.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Range_Sum_Query.dir/main.cpp.o.requires

CMakeFiles/Range_Sum_Query.dir/main.cpp.o.provides: CMakeFiles/Range_Sum_Query.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Range_Sum_Query.dir/build.make CMakeFiles/Range_Sum_Query.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Range_Sum_Query.dir/main.cpp.o.provides

CMakeFiles/Range_Sum_Query.dir/main.cpp.o.provides.build: CMakeFiles/Range_Sum_Query.dir/main.cpp.o


# Object files for target Range_Sum_Query
Range_Sum_Query_OBJECTS = \
"CMakeFiles/Range_Sum_Query.dir/main.cpp.o"

# External object files for target Range_Sum_Query
Range_Sum_Query_EXTERNAL_OBJECTS =

Range_Sum_Query: CMakeFiles/Range_Sum_Query.dir/main.cpp.o
Range_Sum_Query: CMakeFiles/Range_Sum_Query.dir/build.make
Range_Sum_Query: CMakeFiles/Range_Sum_Query.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yifeng/LeetCodes/Range_Sum_Query/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Range_Sum_Query"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Range_Sum_Query.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Range_Sum_Query.dir/build: Range_Sum_Query

.PHONY : CMakeFiles/Range_Sum_Query.dir/build

CMakeFiles/Range_Sum_Query.dir/requires: CMakeFiles/Range_Sum_Query.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Range_Sum_Query.dir/requires

CMakeFiles/Range_Sum_Query.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Range_Sum_Query.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Range_Sum_Query.dir/clean

CMakeFiles/Range_Sum_Query.dir/depend:
	cd /home/yifeng/LeetCodes/Range_Sum_Query/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yifeng/LeetCodes/Range_Sum_Query /home/yifeng/LeetCodes/Range_Sum_Query /home/yifeng/LeetCodes/Range_Sum_Query/cmake-build-debug /home/yifeng/LeetCodes/Range_Sum_Query/cmake-build-debug /home/yifeng/LeetCodes/Range_Sum_Query/cmake-build-debug/CMakeFiles/Range_Sum_Query.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Range_Sum_Query.dir/depend

