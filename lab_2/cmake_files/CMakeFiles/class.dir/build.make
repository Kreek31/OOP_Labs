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
CMAKE_SOURCE_DIR = /home/vm/OOP_Labs/lab_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vm/OOP_Labs/lab_2/cmake_files

# Include any dependencies generated for this target.
include CMakeFiles/class.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/class.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/class.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/class.dir/flags.make

CMakeFiles/class.dir/lib_init/Twelve.o: CMakeFiles/class.dir/flags.make
CMakeFiles/class.dir/lib_init/Twelve.o: ../lib_init/Twelve.cpp
CMakeFiles/class.dir/lib_init/Twelve.o: CMakeFiles/class.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vm/OOP_Labs/lab_2/cmake_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/class.dir/lib_init/Twelve.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/class.dir/lib_init/Twelve.o -MF CMakeFiles/class.dir/lib_init/Twelve.o.d -o CMakeFiles/class.dir/lib_init/Twelve.o -c /home/vm/OOP_Labs/lab_2/lib_init/Twelve.cpp

CMakeFiles/class.dir/lib_init/Twelve.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/class.dir/lib_init/Twelve.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vm/OOP_Labs/lab_2/lib_init/Twelve.cpp > CMakeFiles/class.dir/lib_init/Twelve.i

CMakeFiles/class.dir/lib_init/Twelve.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/class.dir/lib_init/Twelve.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vm/OOP_Labs/lab_2/lib_init/Twelve.cpp -o CMakeFiles/class.dir/lib_init/Twelve.s

# Object files for target class
class_OBJECTS = \
"CMakeFiles/class.dir/lib_init/Twelve.o"

# External object files for target class
class_EXTERNAL_OBJECTS =

libclass.a: CMakeFiles/class.dir/lib_init/Twelve.o
libclass.a: CMakeFiles/class.dir/build.make
libclass.a: CMakeFiles/class.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vm/OOP_Labs/lab_2/cmake_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libclass.a"
	$(CMAKE_COMMAND) -P CMakeFiles/class.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/class.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/class.dir/build: libclass.a
.PHONY : CMakeFiles/class.dir/build

CMakeFiles/class.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/class.dir/cmake_clean.cmake
.PHONY : CMakeFiles/class.dir/clean

CMakeFiles/class.dir/depend:
	cd /home/vm/OOP_Labs/lab_2/cmake_files && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vm/OOP_Labs/lab_2 /home/vm/OOP_Labs/lab_2 /home/vm/OOP_Labs/lab_2/cmake_files /home/vm/OOP_Labs/lab_2/cmake_files /home/vm/OOP_Labs/lab_2/cmake_files/CMakeFiles/class.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/class.dir/depend

