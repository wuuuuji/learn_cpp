# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\IDEA\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\IDEA\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\learnc++\c++_primer_plus\ch02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\learnc++\c++_primer_plus\ch02\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/convert.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/convert.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/convert.dir/flags.make

CMakeFiles/convert.dir/convert.cpp.obj: CMakeFiles/convert.dir/flags.make
CMakeFiles/convert.dir/convert.cpp.obj: ../convert.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\learnc++\c++_primer_plus\ch02\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/convert.dir/convert.cpp.obj"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\convert.dir\convert.cpp.obj -c D:\learnc++\c++_primer_plus\ch02\convert.cpp

CMakeFiles/convert.dir/convert.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/convert.dir/convert.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\learnc++\c++_primer_plus\ch02\convert.cpp > CMakeFiles\convert.dir\convert.cpp.i

CMakeFiles/convert.dir/convert.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/convert.dir/convert.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\learnc++\c++_primer_plus\ch02\convert.cpp -o CMakeFiles\convert.dir\convert.cpp.s

# Object files for target convert
convert_OBJECTS = \
"CMakeFiles/convert.dir/convert.cpp.obj"

# External object files for target convert
convert_EXTERNAL_OBJECTS =

convert.exe: CMakeFiles/convert.dir/convert.cpp.obj
convert.exe: CMakeFiles/convert.dir/build.make
convert.exe: CMakeFiles/convert.dir/linklibs.rsp
convert.exe: CMakeFiles/convert.dir/objects1.rsp
convert.exe: CMakeFiles/convert.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\learnc++\c++_primer_plus\ch02\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable convert.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\convert.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/convert.dir/build: convert.exe
.PHONY : CMakeFiles/convert.dir/build

CMakeFiles/convert.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\convert.dir\cmake_clean.cmake
.PHONY : CMakeFiles/convert.dir/clean

CMakeFiles/convert.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\learnc++\c++_primer_plus\ch02 D:\learnc++\c++_primer_plus\ch02 D:\learnc++\c++_primer_plus\ch02\cmake-build-debug D:\learnc++\c++_primer_plus\ch02\cmake-build-debug D:\learnc++\c++_primer_plus\ch02\cmake-build-debug\CMakeFiles\convert.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/convert.dir/depend

