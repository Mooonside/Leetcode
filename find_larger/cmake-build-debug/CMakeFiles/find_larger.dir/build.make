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
CMAKE_SOURCE_DIR = /home/yifeng/LeetCodes/find_larger

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yifeng/LeetCodes/find_larger/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/find_larger.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/find_larger.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/find_larger.dir/flags.make

CMakeFiles/find_larger.dir/main.cpp.o: CMakeFiles/find_larger.dir/flags.make
CMakeFiles/find_larger.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yifeng/LeetCodes/find_larger/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/find_larger.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/find_larger.dir/main.cpp.o -c /home/yifeng/LeetCodes/find_larger/main.cpp

CMakeFiles/find_larger.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/find_larger.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yifeng/LeetCodes/find_larger/main.cpp > CMakeFiles/find_larger.dir/main.cpp.i

CMakeFiles/find_larger.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/find_larger.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yifeng/LeetCodes/find_larger/main.cpp -o CMakeFiles/find_larger.dir/main.cpp.s

CMakeFiles/find_larger.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/find_larger.dir/main.cpp.o.requires

CMakeFiles/find_larger.dir/main.cpp.o.provides: CMakeFiles/find_larger.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/find_larger.dir/build.make CMakeFiles/find_larger.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/find_larger.dir/main.cpp.o.provides

CMakeFiles/find_larger.dir/main.cpp.o.provides.build: CMakeFiles/find_larger.dir/main.cpp.o


# Object files for target find_larger
find_larger_OBJECTS = \
"CMakeFiles/find_larger.dir/main.cpp.o"

# External object files for target find_larger
find_larger_EXTERNAL_OBJECTS =

find_larger: CMakeFiles/find_larger.dir/main.cpp.o
find_larger: CMakeFiles/find_larger.dir/build.make
find_larger: CMakeFiles/find_larger.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yifeng/LeetCodes/find_larger/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable find_larger"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/find_larger.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/find_larger.dir/build: find_larger

.PHONY : CMakeFiles/find_larger.dir/build

CMakeFiles/find_larger.dir/requires: CMakeFiles/find_larger.dir/main.cpp.o.requires

.PHONY : CMakeFiles/find_larger.dir/requires

CMakeFiles/find_larger.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/find_larger.dir/cmake_clean.cmake
.PHONY : CMakeFiles/find_larger.dir/clean

CMakeFiles/find_larger.dir/depend:
	cd /home/yifeng/LeetCodes/find_larger/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yifeng/LeetCodes/find_larger /home/yifeng/LeetCodes/find_larger /home/yifeng/LeetCodes/find_larger/cmake-build-debug /home/yifeng/LeetCodes/find_larger/cmake-build-debug /home/yifeng/LeetCodes/find_larger/cmake-build-debug/CMakeFiles/find_larger.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/find_larger.dir/depend
