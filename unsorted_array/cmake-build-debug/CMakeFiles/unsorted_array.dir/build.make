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
CMAKE_SOURCE_DIR = /home/yifeng/LeetCodes/unsorted_array

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yifeng/LeetCodes/unsorted_array/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/unsorted_array.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/unsorted_array.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/unsorted_array.dir/flags.make

CMakeFiles/unsorted_array.dir/main.cpp.o: CMakeFiles/unsorted_array.dir/flags.make
CMakeFiles/unsorted_array.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yifeng/LeetCodes/unsorted_array/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/unsorted_array.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unsorted_array.dir/main.cpp.o -c /home/yifeng/LeetCodes/unsorted_array/main.cpp

CMakeFiles/unsorted_array.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unsorted_array.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yifeng/LeetCodes/unsorted_array/main.cpp > CMakeFiles/unsorted_array.dir/main.cpp.i

CMakeFiles/unsorted_array.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unsorted_array.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yifeng/LeetCodes/unsorted_array/main.cpp -o CMakeFiles/unsorted_array.dir/main.cpp.s

CMakeFiles/unsorted_array.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/unsorted_array.dir/main.cpp.o.requires

CMakeFiles/unsorted_array.dir/main.cpp.o.provides: CMakeFiles/unsorted_array.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/unsorted_array.dir/build.make CMakeFiles/unsorted_array.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/unsorted_array.dir/main.cpp.o.provides

CMakeFiles/unsorted_array.dir/main.cpp.o.provides.build: CMakeFiles/unsorted_array.dir/main.cpp.o


# Object files for target unsorted_array
unsorted_array_OBJECTS = \
"CMakeFiles/unsorted_array.dir/main.cpp.o"

# External object files for target unsorted_array
unsorted_array_EXTERNAL_OBJECTS =

unsorted_array: CMakeFiles/unsorted_array.dir/main.cpp.o
unsorted_array: CMakeFiles/unsorted_array.dir/build.make
unsorted_array: CMakeFiles/unsorted_array.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yifeng/LeetCodes/unsorted_array/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable unsorted_array"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unsorted_array.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/unsorted_array.dir/build: unsorted_array

.PHONY : CMakeFiles/unsorted_array.dir/build

CMakeFiles/unsorted_array.dir/requires: CMakeFiles/unsorted_array.dir/main.cpp.o.requires

.PHONY : CMakeFiles/unsorted_array.dir/requires

CMakeFiles/unsorted_array.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/unsorted_array.dir/cmake_clean.cmake
.PHONY : CMakeFiles/unsorted_array.dir/clean

CMakeFiles/unsorted_array.dir/depend:
	cd /home/yifeng/LeetCodes/unsorted_array/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yifeng/LeetCodes/unsorted_array /home/yifeng/LeetCodes/unsorted_array /home/yifeng/LeetCodes/unsorted_array/cmake-build-debug /home/yifeng/LeetCodes/unsorted_array/cmake-build-debug /home/yifeng/LeetCodes/unsorted_array/cmake-build-debug/CMakeFiles/unsorted_array.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/unsorted_array.dir/depend

