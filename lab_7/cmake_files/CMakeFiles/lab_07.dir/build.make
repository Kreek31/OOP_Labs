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
CMAKE_SOURCE_DIR = /home/vm/OOP_Labs/lab_7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vm/OOP_Labs/lab_7/cmake_files

# Include any dependencies generated for this target.
include CMakeFiles/lab_07.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lab_07.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lab_07.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab_07.dir/flags.make

CMakeFiles/lab_07.dir/main.cpp.o: CMakeFiles/lab_07.dir/flags.make
CMakeFiles/lab_07.dir/main.cpp.o: ../main.cpp
CMakeFiles/lab_07.dir/main.cpp.o: CMakeFiles/lab_07.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vm/OOP_Labs/lab_7/cmake_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab_07.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab_07.dir/main.cpp.o -MF CMakeFiles/lab_07.dir/main.cpp.o.d -o CMakeFiles/lab_07.dir/main.cpp.o -c /home/vm/OOP_Labs/lab_7/main.cpp

CMakeFiles/lab_07.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_07.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vm/OOP_Labs/lab_7/main.cpp > CMakeFiles/lab_07.dir/main.cpp.i

CMakeFiles/lab_07.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_07.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vm/OOP_Labs/lab_7/main.cpp -o CMakeFiles/lab_07.dir/main.cpp.s

CMakeFiles/lab_07.dir/npc.cpp.o: CMakeFiles/lab_07.dir/flags.make
CMakeFiles/lab_07.dir/npc.cpp.o: ../npc.cpp
CMakeFiles/lab_07.dir/npc.cpp.o: CMakeFiles/lab_07.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vm/OOP_Labs/lab_7/cmake_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab_07.dir/npc.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab_07.dir/npc.cpp.o -MF CMakeFiles/lab_07.dir/npc.cpp.o.d -o CMakeFiles/lab_07.dir/npc.cpp.o -c /home/vm/OOP_Labs/lab_7/npc.cpp

CMakeFiles/lab_07.dir/npc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_07.dir/npc.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vm/OOP_Labs/lab_7/npc.cpp > CMakeFiles/lab_07.dir/npc.cpp.i

CMakeFiles/lab_07.dir/npc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_07.dir/npc.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vm/OOP_Labs/lab_7/npc.cpp -o CMakeFiles/lab_07.dir/npc.cpp.s

CMakeFiles/lab_07.dir/knight.cpp.o: CMakeFiles/lab_07.dir/flags.make
CMakeFiles/lab_07.dir/knight.cpp.o: ../knight.cpp
CMakeFiles/lab_07.dir/knight.cpp.o: CMakeFiles/lab_07.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vm/OOP_Labs/lab_7/cmake_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab_07.dir/knight.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab_07.dir/knight.cpp.o -MF CMakeFiles/lab_07.dir/knight.cpp.o.d -o CMakeFiles/lab_07.dir/knight.cpp.o -c /home/vm/OOP_Labs/lab_7/knight.cpp

CMakeFiles/lab_07.dir/knight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_07.dir/knight.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vm/OOP_Labs/lab_7/knight.cpp > CMakeFiles/lab_07.dir/knight.cpp.i

CMakeFiles/lab_07.dir/knight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_07.dir/knight.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vm/OOP_Labs/lab_7/knight.cpp -o CMakeFiles/lab_07.dir/knight.cpp.s

CMakeFiles/lab_07.dir/dragon.cpp.o: CMakeFiles/lab_07.dir/flags.make
CMakeFiles/lab_07.dir/dragon.cpp.o: ../dragon.cpp
CMakeFiles/lab_07.dir/dragon.cpp.o: CMakeFiles/lab_07.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vm/OOP_Labs/lab_7/cmake_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/lab_07.dir/dragon.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab_07.dir/dragon.cpp.o -MF CMakeFiles/lab_07.dir/dragon.cpp.o.d -o CMakeFiles/lab_07.dir/dragon.cpp.o -c /home/vm/OOP_Labs/lab_7/dragon.cpp

CMakeFiles/lab_07.dir/dragon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_07.dir/dragon.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vm/OOP_Labs/lab_7/dragon.cpp > CMakeFiles/lab_07.dir/dragon.cpp.i

CMakeFiles/lab_07.dir/dragon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_07.dir/dragon.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vm/OOP_Labs/lab_7/dragon.cpp -o CMakeFiles/lab_07.dir/dragon.cpp.s

CMakeFiles/lab_07.dir/black_knight.cpp.o: CMakeFiles/lab_07.dir/flags.make
CMakeFiles/lab_07.dir/black_knight.cpp.o: ../black_knight.cpp
CMakeFiles/lab_07.dir/black_knight.cpp.o: CMakeFiles/lab_07.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vm/OOP_Labs/lab_7/cmake_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/lab_07.dir/black_knight.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab_07.dir/black_knight.cpp.o -MF CMakeFiles/lab_07.dir/black_knight.cpp.o.d -o CMakeFiles/lab_07.dir/black_knight.cpp.o -c /home/vm/OOP_Labs/lab_7/black_knight.cpp

CMakeFiles/lab_07.dir/black_knight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab_07.dir/black_knight.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vm/OOP_Labs/lab_7/black_knight.cpp > CMakeFiles/lab_07.dir/black_knight.cpp.i

CMakeFiles/lab_07.dir/black_knight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab_07.dir/black_knight.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vm/OOP_Labs/lab_7/black_knight.cpp -o CMakeFiles/lab_07.dir/black_knight.cpp.s

# Object files for target lab_07
lab_07_OBJECTS = \
"CMakeFiles/lab_07.dir/main.cpp.o" \
"CMakeFiles/lab_07.dir/npc.cpp.o" \
"CMakeFiles/lab_07.dir/knight.cpp.o" \
"CMakeFiles/lab_07.dir/dragon.cpp.o" \
"CMakeFiles/lab_07.dir/black_knight.cpp.o"

# External object files for target lab_07
lab_07_EXTERNAL_OBJECTS =

lab_07: CMakeFiles/lab_07.dir/main.cpp.o
lab_07: CMakeFiles/lab_07.dir/npc.cpp.o
lab_07: CMakeFiles/lab_07.dir/knight.cpp.o
lab_07: CMakeFiles/lab_07.dir/dragon.cpp.o
lab_07: CMakeFiles/lab_07.dir/black_knight.cpp.o
lab_07: CMakeFiles/lab_07.dir/build.make
lab_07: CMakeFiles/lab_07.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vm/OOP_Labs/lab_7/cmake_files/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable lab_07"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab_07.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab_07.dir/build: lab_07
.PHONY : CMakeFiles/lab_07.dir/build

CMakeFiles/lab_07.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab_07.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab_07.dir/clean

CMakeFiles/lab_07.dir/depend:
	cd /home/vm/OOP_Labs/lab_7/cmake_files && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vm/OOP_Labs/lab_7 /home/vm/OOP_Labs/lab_7 /home/vm/OOP_Labs/lab_7/cmake_files /home/vm/OOP_Labs/lab_7/cmake_files /home/vm/OOP_Labs/lab_7/cmake_files/CMakeFiles/lab_07.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab_07.dir/depend

