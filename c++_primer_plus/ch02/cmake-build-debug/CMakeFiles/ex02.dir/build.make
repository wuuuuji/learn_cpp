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
include CMakeFiles/ex02.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ex02.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex02.dir/flags.make

CMakeFiles/ex02.dir/ex02.cpp.obj: CMakeFiles/ex02.dir/flags.make
CMakeFiles/ex02.dir/ex02.cpp.obj: ../ex02.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\learnc++\c++_primer_plus\ch02\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex02.dir/ex02.cpp.obj"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ex02.dir\ex02.cpp.obj -c D:\learnc++\c++_primer_plus\ch02\ex02.cpp

CMakeFiles/ex02.dir/ex02.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex02.dir/ex02.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\learnc++\c++_primer_plus\ch02\ex02.cpp > CMakeFiles\ex02.dir\ex02.cpp.i

CMakeFiles/ex02.dir/ex02.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex02.dir/ex02.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\learnc++\c++_primer_plus\ch02\ex02.cpp -o CMakeFiles\ex02.dir\ex02.cpp.s

# Object files for target ex02
ex02_OBJECTS = \
"CMakeFiles/ex02.dir/ex02.cpp.obj"

# External object files for target ex02
ex02_EXTERNAL_OBJECTS =

ex02.exe: CMakeFiles/ex02.dir/ex02.cpp.obj
ex02.exe: CMakeFiles/ex02.dir/build.make
ex02.exe: CMakeFiles/ex02.dir/linklibs.rsp
ex02.exe: CMakeFiles/ex02.dir/objects1.rsp
ex02.exe: CMakeFiles/ex02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\learnc++\c++_primer_plus\ch02\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ex02.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ex02.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex02.dir/build: ex02.exe
.PHONY : CMakeFiles/ex02.dir/build

CMakeFiles/ex02.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ex02.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ex02.dir/clean

CMakeFiles/ex02.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\learnc++\c++_primer_plus\ch02 D:\learnc++\c++_primer_plus\ch02 D:\learnc++\c++_primer_plus\ch02\cmake-build-debug D:\learnc++\c++_primer_plus\ch02\cmake-build-debug D:\learnc++\c++_primer_plus\ch02\cmake-build-debug\CMakeFiles\ex02.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex02.dir/depend

