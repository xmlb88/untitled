# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/wenwei/CLionProjects/untitled

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/wenwei/CLionProjects/untitled/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/divide.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/divide.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/divide.dir/flags.make

CMakeFiles/divide.dir/5/divide.cpp.o: CMakeFiles/divide.dir/flags.make
CMakeFiles/divide.dir/5/divide.cpp.o: ../5/divide.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wenwei/CLionProjects/untitled/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/divide.dir/5/divide.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/divide.dir/5/divide.cpp.o -c /Users/wenwei/CLionProjects/untitled/5/divide.cpp

CMakeFiles/divide.dir/5/divide.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/divide.dir/5/divide.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wenwei/CLionProjects/untitled/5/divide.cpp > CMakeFiles/divide.dir/5/divide.cpp.i

CMakeFiles/divide.dir/5/divide.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/divide.dir/5/divide.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wenwei/CLionProjects/untitled/5/divide.cpp -o CMakeFiles/divide.dir/5/divide.cpp.s

# Object files for target divide
divide_OBJECTS = \
"CMakeFiles/divide.dir/5/divide.cpp.o"

# External object files for target divide
divide_EXTERNAL_OBJECTS =

divide: CMakeFiles/divide.dir/5/divide.cpp.o
divide: CMakeFiles/divide.dir/build.make
divide: CMakeFiles/divide.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wenwei/CLionProjects/untitled/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable divide"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/divide.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/divide.dir/build: divide

.PHONY : CMakeFiles/divide.dir/build

CMakeFiles/divide.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/divide.dir/cmake_clean.cmake
.PHONY : CMakeFiles/divide.dir/clean

CMakeFiles/divide.dir/depend:
	cd /Users/wenwei/CLionProjects/untitled/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wenwei/CLionProjects/untitled /Users/wenwei/CLionProjects/untitled /Users/wenwei/CLionProjects/untitled/cmake-build-debug /Users/wenwei/CLionProjects/untitled/cmake-build-debug /Users/wenwei/CLionProjects/untitled/cmake-build-debug/CMakeFiles/divide.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/divide.dir/depend

