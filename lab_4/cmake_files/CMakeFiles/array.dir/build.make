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
include CMakeFiles/array.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/array.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/array.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/array.dir/flags.make

CMakeFiles/array.dir/lib/array.o: CMakeFiles/array.dir/flags.make
CMakeFiles/array.dir/lib/array.o: ../lib/array.cpp
CMakeFiles/array.dir/lib/array.o: CMakeFiles/array.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vm/OOP_Labs/lab_4/cmake_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/array.dir/lib/array.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/array.dir/lib/array.o -MF CMakeFiles/array.dir/lib/array.o.d -o CMakeFiles/array.dir/lib/array.o -c /home/vm/OOP_Labs/lab_4/lib/array.cpp

CMakeFiles/array.dir/lib/array.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/array.dir/lib/array.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vm/OOP_Labs/lab_4/lib/array.cpp > CMakeFiles/array.dir/lib/array.i

CMakeFiles/array.dir/lib/array.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/array.dir/lib/array.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vm/OOP_Labs/lab_4/lib/array.cpp -o CMakeFiles/array.dir/lib/array.s

# Object files for target array
array_OBJECTS = \
"CMakeFiles/array.dir/lib/array.o"

# External object files for target array
array_EXTERNAL_OBJECTS =

libarray.a: CMakeFiles/array.dir/lib/array.o
libarray.a: CMakeFiles/array.dir/build.make
libarray.a: CMakeFiles/array.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vm/OOP_Labs/lab_4/cmake_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libarray.a"
	$(CMAKE_COMMAND) -P CMakeFiles/array.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/array.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/array.dir/build: libarray.a
.PHONY : CMakeFiles/array.dir/build

CMakeFiles/array.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/array.dir/cmake_clean.cmake
.PHONY : CMakeFiles/array.dir/clean

CMakeFiles/array.dir/depend:
	cd /home/vm/OOP_Labs/lab_4/cmake_files && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vm/OOP_Labs/lab_4 /home/vm/OOP_Labs/lab_4 /home/vm/OOP_Labs/lab_4/cmake_files /home/vm/OOP_Labs/lab_4/cmake_files /home/vm/OOP_Labs/lab_4/cmake_files/CMakeFiles/array.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/array.dir/depend

