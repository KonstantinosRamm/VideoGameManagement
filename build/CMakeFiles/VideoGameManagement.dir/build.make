# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_SOURCE_DIR = /home/konstantinosrammos/Documents/VideoGameManagement

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/konstantinosrammos/Documents/VideoGameManagement/build

# Include any dependencies generated for this target.
include CMakeFiles/VideoGameManagement.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/VideoGameManagement.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/VideoGameManagement.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/VideoGameManagement.dir/flags.make

CMakeFiles/VideoGameManagement.dir/src/hashtable.cpp.o: CMakeFiles/VideoGameManagement.dir/flags.make
CMakeFiles/VideoGameManagement.dir/src/hashtable.cpp.o: /home/konstantinosrammos/Documents/VideoGameManagement/src/hashtable.cpp
CMakeFiles/VideoGameManagement.dir/src/hashtable.cpp.o: CMakeFiles/VideoGameManagement.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/konstantinosrammos/Documents/VideoGameManagement/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/VideoGameManagement.dir/src/hashtable.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/VideoGameManagement.dir/src/hashtable.cpp.o -MF CMakeFiles/VideoGameManagement.dir/src/hashtable.cpp.o.d -o CMakeFiles/VideoGameManagement.dir/src/hashtable.cpp.o -c /home/konstantinosrammos/Documents/VideoGameManagement/src/hashtable.cpp

CMakeFiles/VideoGameManagement.dir/src/hashtable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/VideoGameManagement.dir/src/hashtable.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/konstantinosrammos/Documents/VideoGameManagement/src/hashtable.cpp > CMakeFiles/VideoGameManagement.dir/src/hashtable.cpp.i

CMakeFiles/VideoGameManagement.dir/src/hashtable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/VideoGameManagement.dir/src/hashtable.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/konstantinosrammos/Documents/VideoGameManagement/src/hashtable.cpp -o CMakeFiles/VideoGameManagement.dir/src/hashtable.cpp.s

CMakeFiles/VideoGameManagement.dir/src/ll.cpp.o: CMakeFiles/VideoGameManagement.dir/flags.make
CMakeFiles/VideoGameManagement.dir/src/ll.cpp.o: /home/konstantinosrammos/Documents/VideoGameManagement/src/ll.cpp
CMakeFiles/VideoGameManagement.dir/src/ll.cpp.o: CMakeFiles/VideoGameManagement.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/konstantinosrammos/Documents/VideoGameManagement/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/VideoGameManagement.dir/src/ll.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/VideoGameManagement.dir/src/ll.cpp.o -MF CMakeFiles/VideoGameManagement.dir/src/ll.cpp.o.d -o CMakeFiles/VideoGameManagement.dir/src/ll.cpp.o -c /home/konstantinosrammos/Documents/VideoGameManagement/src/ll.cpp

CMakeFiles/VideoGameManagement.dir/src/ll.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/VideoGameManagement.dir/src/ll.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/konstantinosrammos/Documents/VideoGameManagement/src/ll.cpp > CMakeFiles/VideoGameManagement.dir/src/ll.cpp.i

CMakeFiles/VideoGameManagement.dir/src/ll.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/VideoGameManagement.dir/src/ll.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/konstantinosrammos/Documents/VideoGameManagement/src/ll.cpp -o CMakeFiles/VideoGameManagement.dir/src/ll.cpp.s

CMakeFiles/VideoGameManagement.dir/src/main.cpp.o: CMakeFiles/VideoGameManagement.dir/flags.make
CMakeFiles/VideoGameManagement.dir/src/main.cpp.o: /home/konstantinosrammos/Documents/VideoGameManagement/src/main.cpp
CMakeFiles/VideoGameManagement.dir/src/main.cpp.o: CMakeFiles/VideoGameManagement.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/konstantinosrammos/Documents/VideoGameManagement/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/VideoGameManagement.dir/src/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/VideoGameManagement.dir/src/main.cpp.o -MF CMakeFiles/VideoGameManagement.dir/src/main.cpp.o.d -o CMakeFiles/VideoGameManagement.dir/src/main.cpp.o -c /home/konstantinosrammos/Documents/VideoGameManagement/src/main.cpp

CMakeFiles/VideoGameManagement.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/VideoGameManagement.dir/src/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/konstantinosrammos/Documents/VideoGameManagement/src/main.cpp > CMakeFiles/VideoGameManagement.dir/src/main.cpp.i

CMakeFiles/VideoGameManagement.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/VideoGameManagement.dir/src/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/konstantinosrammos/Documents/VideoGameManagement/src/main.cpp -o CMakeFiles/VideoGameManagement.dir/src/main.cpp.s

CMakeFiles/VideoGameManagement.dir/src/videogame.cpp.o: CMakeFiles/VideoGameManagement.dir/flags.make
CMakeFiles/VideoGameManagement.dir/src/videogame.cpp.o: /home/konstantinosrammos/Documents/VideoGameManagement/src/videogame.cpp
CMakeFiles/VideoGameManagement.dir/src/videogame.cpp.o: CMakeFiles/VideoGameManagement.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/konstantinosrammos/Documents/VideoGameManagement/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/VideoGameManagement.dir/src/videogame.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/VideoGameManagement.dir/src/videogame.cpp.o -MF CMakeFiles/VideoGameManagement.dir/src/videogame.cpp.o.d -o CMakeFiles/VideoGameManagement.dir/src/videogame.cpp.o -c /home/konstantinosrammos/Documents/VideoGameManagement/src/videogame.cpp

CMakeFiles/VideoGameManagement.dir/src/videogame.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/VideoGameManagement.dir/src/videogame.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/konstantinosrammos/Documents/VideoGameManagement/src/videogame.cpp > CMakeFiles/VideoGameManagement.dir/src/videogame.cpp.i

CMakeFiles/VideoGameManagement.dir/src/videogame.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/VideoGameManagement.dir/src/videogame.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/konstantinosrammos/Documents/VideoGameManagement/src/videogame.cpp -o CMakeFiles/VideoGameManagement.dir/src/videogame.cpp.s

# Object files for target VideoGameManagement
VideoGameManagement_OBJECTS = \
"CMakeFiles/VideoGameManagement.dir/src/hashtable.cpp.o" \
"CMakeFiles/VideoGameManagement.dir/src/ll.cpp.o" \
"CMakeFiles/VideoGameManagement.dir/src/main.cpp.o" \
"CMakeFiles/VideoGameManagement.dir/src/videogame.cpp.o"

# External object files for target VideoGameManagement
VideoGameManagement_EXTERNAL_OBJECTS =

bin/VideoGameManagement: CMakeFiles/VideoGameManagement.dir/src/hashtable.cpp.o
bin/VideoGameManagement: CMakeFiles/VideoGameManagement.dir/src/ll.cpp.o
bin/VideoGameManagement: CMakeFiles/VideoGameManagement.dir/src/main.cpp.o
bin/VideoGameManagement: CMakeFiles/VideoGameManagement.dir/src/videogame.cpp.o
bin/VideoGameManagement: CMakeFiles/VideoGameManagement.dir/build.make
bin/VideoGameManagement: CMakeFiles/VideoGameManagement.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/konstantinosrammos/Documents/VideoGameManagement/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable bin/VideoGameManagement"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/VideoGameManagement.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/VideoGameManagement.dir/build: bin/VideoGameManagement
.PHONY : CMakeFiles/VideoGameManagement.dir/build

CMakeFiles/VideoGameManagement.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/VideoGameManagement.dir/cmake_clean.cmake
.PHONY : CMakeFiles/VideoGameManagement.dir/clean

CMakeFiles/VideoGameManagement.dir/depend:
	cd /home/konstantinosrammos/Documents/VideoGameManagement/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/konstantinosrammos/Documents/VideoGameManagement /home/konstantinosrammos/Documents/VideoGameManagement /home/konstantinosrammos/Documents/VideoGameManagement/build /home/konstantinosrammos/Documents/VideoGameManagement/build /home/konstantinosrammos/Documents/VideoGameManagement/build/CMakeFiles/VideoGameManagement.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/VideoGameManagement.dir/depend

