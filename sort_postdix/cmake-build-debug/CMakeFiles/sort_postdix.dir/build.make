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
CMAKE_SOURCE_DIR = /home/yifeng/LeetCodes/sort_postdix

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yifeng/LeetCodes/sort_postdix/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sort_postdix.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sort_postdix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sort_postdix.dir/flags.make

CMakeFiles/sort_postdix.dir/main.cpp.o: CMakeFiles/sort_postdix.dir/flags.make
CMakeFiles/sort_postdix.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yifeng/LeetCodes/sort_postdix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sort_postdix.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sort_postdix.dir/main.cpp.o -c /home/yifeng/LeetCodes/sort_postdix/main.cpp

CMakeFiles/sort_postdix.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sort_postdix.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yifeng/LeetCodes/sort_postdix/main.cpp > CMakeFiles/sort_postdix.dir/main.cpp.i

CMakeFiles/sort_postdix.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sort_postdix.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yifeng/LeetCodes/sort_postdix/main.cpp -o CMakeFiles/sort_postdix.dir/main.cpp.s

CMakeFiles/sort_postdix.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/sort_postdix.dir/main.cpp.o.requires

CMakeFiles/sort_postdix.dir/main.cpp.o.provides: CMakeFiles/sort_postdix.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/sort_postdix.dir/build.make CMakeFiles/sort_postdix.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/sort_postdix.dir/main.cpp.o.provides

CMakeFiles/sort_postdix.dir/main.cpp.o.provides.build: CMakeFiles/sort_postdix.dir/main.cpp.o


# Object files for target sort_postdix
sort_postdix_OBJECTS = \
"CMakeFiles/sort_postdix.dir/main.cpp.o"

# External object files for target sort_postdix
sort_postdix_EXTERNAL_OBJECTS =

sort_postdix: CMakeFiles/sort_postdix.dir/main.cpp.o
sort_postdix: CMakeFiles/sort_postdix.dir/build.make
sort_postdix: CMakeFiles/sort_postdix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yifeng/LeetCodes/sort_postdix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sort_postdix"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sort_postdix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sort_postdix.dir/build: sort_postdix

.PHONY : CMakeFiles/sort_postdix.dir/build

CMakeFiles/sort_postdix.dir/requires: CMakeFiles/sort_postdix.dir/main.cpp.o.requires

.PHONY : CMakeFiles/sort_postdix.dir/requires

CMakeFiles/sort_postdix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sort_postdix.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sort_postdix.dir/clean

CMakeFiles/sort_postdix.dir/depend:
	cd /home/yifeng/LeetCodes/sort_postdix/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yifeng/LeetCodes/sort_postdix /home/yifeng/LeetCodes/sort_postdix /home/yifeng/LeetCodes/sort_postdix/cmake-build-debug /home/yifeng/LeetCodes/sort_postdix/cmake-build-debug /home/yifeng/LeetCodes/sort_postdix/cmake-build-debug/CMakeFiles/sort_postdix.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sort_postdix.dir/depend

