# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vm/OOP_Labs/lab_4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vm/OOP_Labs/lab_4/cmake_files

# Include any dependencies generated for this target.
include CMakeFiles/changing.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/changing.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/changing.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/changing.dir/flags.make

CMakeFiles/changing.dir/tests/changing.o: CMakeFiles/changing.dir/flags.make
CMakeFiles/changing.dir/tests/changing.o: ../tests/changing.cpp
CMakeFiles/changing.dir/tests/changing.o: CMakeFiles/changing.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vm/OOP_Labs/lab_4/cmake_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/changing.dir/tests/changing.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/changing.dir/tests/changing.o -MF CMakeFiles/changing.dir/tests/changing.o.d -o CMakeFiles/changing.dir/tests/changing.o -c /home/vm/OOP_Labs/lab_4/tests/changing.cpp

CMakeFiles/changing.dir/tests/changing.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/changing.dir/tests/changing.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vm/OOP_Labs/lab_4/tests/changing.cpp > CMakeFiles/changing.dir/tests/changing.i

CMakeFiles/changing.dir/tests/changing.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/changing.dir/tests/changing.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vm/OOP_Labs/lab_4/tests/changing.cpp -o CMakeFiles/changing.dir/tests/changing.s

# Object files for target changing
changing_OBJECTS = \
"CMakeFiles/changing.dir/tests/changing.o"

# External object files for target changing
changing_EXTERNAL_OBJECTS =

changing: CMakeFiles/changing.dir/tests/changing.o
changing: CMakeFiles/changing.dir/build.make
changing: libfigures.a
changing: lib/libgtest_main.a
changing: lib/libgtest.a
changing: CMakeFiles/changing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vm/OOP_Labs/lab_4/cmake_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable changing"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/changing.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/changing.dir/build: changing
.PHONY : CMakeFiles/changing.dir/build

CMakeFiles/changing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/changing.dir/cmake_clean.cmake
.PHONY : CMakeFiles/changing.dir/clean

CMakeFiles/changing.dir/depend:
	cd /home/vm/OOP_Labs/lab_4/cmake_files && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vm/OOP_Labs/lab_4 /home/vm/OOP_Labs/lab_4 /home/vm/OOP_Labs/lab_4/cmake_files /home/vm/OOP_Labs/lab_4/cmake_files /home/vm/OOP_Labs/lab_4/cmake_files/CMakeFiles/changing.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/changing.dir/depend

