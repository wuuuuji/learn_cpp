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
include CMakeFiles/sqrt.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/sqrt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sqrt.dir/flags.make

CMakeFiles/sqrt.dir/sqrt.cpp.obj: CMakeFiles/sqrt.dir/flags.make
CMakeFiles/sqrt.dir/sqrt.cpp.obj: ../sqrt.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\learnc++\c++_primer_plus\ch02\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sqrt.dir/sqrt.cpp.obj"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\sqrt.dir\sqrt.cpp.obj -c D:\learnc++\c++_primer_plus\ch02\sqrt.cpp

CMakeFiles/sqrt.dir/sqrt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sqrt.dir/sqrt.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\learnc++\c++_primer_plus\ch02\sqrt.cpp > CMakeFiles\sqrt.dir\sqrt.cpp.i

CMakeFiles/sqrt.dir/sqrt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sqrt.dir/sqrt.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\learnc++\c++_primer_plus\ch02\sqrt.cpp -o CMakeFiles\sqrt.dir\sqrt.cpp.s

# Object files for target sqrt
sqrt_OBJECTS = \
"CMakeFiles/sqrt.dir/sqrt.cpp.obj"

# External object files for target sqrt
sqrt_EXTERNAL_OBJECTS =

sqrt.exe: CMakeFiles/sqrt.dir/sqrt.cpp.obj
sqrt.exe: CMakeFiles/sqrt.dir/build.make
sqrt.exe: CMakeFiles/sqrt.dir/linklibs.rsp
sqrt.exe: CMakeFiles/sqrt.dir/objects1.rsp
sqrt.exe: CMakeFiles/sqrt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\learnc++\c++_primer_plus\ch02\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sqrt.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sqrt.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sqrt.dir/build: sqrt.exe
.PHONY : CMakeFiles/sqrt.dir/build

CMakeFiles/sqrt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sqrt.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sqrt.dir/clean

CMakeFiles/sqrt.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\learnc++\c++_primer_plus\ch02 D:\learnc++\c++_primer_plus\ch02 D:\learnc++\c++_primer_plus\ch02\cmake-build-debug D:\learnc++\c++_primer_plus\ch02\cmake-build-debug D:\learnc++\c++_primer_plus\ch02\cmake-build-debug\CMakeFiles\sqrt.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sqrt.dir/depend

