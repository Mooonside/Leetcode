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
CMAKE_SOURCE_DIR = /home/yifeng/LeetCodes/boring1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yifeng/LeetCodes/boring1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/boring1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/boring1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/boring1.dir/flags.make

CMakeFiles/boring1.dir/main.cpp.o: CMakeFiles/boring1.dir/flags.make
CMakeFiles/boring1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yifeng/LeetCodes/boring1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/boring1.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/boring1.dir/main.cpp.o -c /home/yifeng/LeetCodes/boring1/main.cpp

CMakeFiles/boring1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boring1.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yifeng/LeetCodes/boring1/main.cpp > CMakeFiles/boring1.dir/main.cpp.i

CMakeFiles/boring1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boring1.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yifeng/LeetCodes/boring1/main.cpp -o CMakeFiles/boring1.dir/main.cpp.s

CMakeFiles/boring1.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/boring1.dir/main.cpp.o.requires

CMakeFiles/boring1.dir/main.cpp.o.provides: CMakeFiles/boring1.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/boring1.dir/build.make CMakeFiles/boring1.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/boring1.dir/main.cpp.o.provides

CMakeFiles/boring1.dir/main.cpp.o.provides.build: CMakeFiles/boring1.dir/main.cpp.o


# Object files for target boring1
boring1_OBJECTS = \
"CMakeFiles/boring1.dir/main.cpp.o"

# External object files for target boring1
boring1_EXTERNAL_OBJECTS =

boring1: CMakeFiles/boring1.dir/main.cpp.o
boring1: CMakeFiles/boring1.dir/build.make
boring1: CMakeFiles/boring1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yifeng/LeetCodes/boring1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable boring1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/boring1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/boring1.dir/build: boring1

.PHONY : CMakeFiles/boring1.dir/build

CMakeFiles/boring1.dir/requires: CMakeFiles/boring1.dir/main.cpp.o.requires

.PHONY : CMakeFiles/boring1.dir/requires

CMakeFiles/boring1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/boring1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/boring1.dir/clean

CMakeFiles/boring1.dir/depend:
	cd /home/yifeng/LeetCodes/boring1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yifeng/LeetCodes/boring1 /home/yifeng/LeetCodes/boring1 /home/yifeng/LeetCodes/boring1/cmake-build-debug /home/yifeng/LeetCodes/boring1/cmake-build-debug /home/yifeng/LeetCodes/boring1/cmake-build-debug/CMakeFiles/boring1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/boring1.dir/depend

