# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mikael/Projects/c++/ClassicAspFormat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mikael/Projects/c++/ClassicAspFormat/build

# Include any dependencies generated for this target.
include CMakeFiles/caspfmt.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/caspfmt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/caspfmt.dir/flags.make

CMakeFiles/caspfmt.dir/src/main.cpp.o: CMakeFiles/caspfmt.dir/flags.make
CMakeFiles/caspfmt.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mikael/Projects/c++/ClassicAspFormat/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/caspfmt.dir/src/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/caspfmt.dir/src/main.cpp.o -c /home/mikael/Projects/c++/ClassicAspFormat/src/main.cpp

CMakeFiles/caspfmt.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/caspfmt.dir/src/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mikael/Projects/c++/ClassicAspFormat/src/main.cpp > CMakeFiles/caspfmt.dir/src/main.cpp.i

CMakeFiles/caspfmt.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/caspfmt.dir/src/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mikael/Projects/c++/ClassicAspFormat/src/main.cpp -o CMakeFiles/caspfmt.dir/src/main.cpp.s

# Object files for target caspfmt
caspfmt_OBJECTS = \
"CMakeFiles/caspfmt.dir/src/main.cpp.o"

# External object files for target caspfmt
caspfmt_EXTERNAL_OBJECTS =

bin/caspfmt: CMakeFiles/caspfmt.dir/src/main.cpp.o
bin/caspfmt: CMakeFiles/caspfmt.dir/build.make
bin/caspfmt: CMakeFiles/caspfmt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mikael/Projects/c++/ClassicAspFormat/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/caspfmt"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/caspfmt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/caspfmt.dir/build: bin/caspfmt

.PHONY : CMakeFiles/caspfmt.dir/build

CMakeFiles/caspfmt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/caspfmt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/caspfmt.dir/clean

CMakeFiles/caspfmt.dir/depend:
	cd /home/mikael/Projects/c++/ClassicAspFormat/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mikael/Projects/c++/ClassicAspFormat /home/mikael/Projects/c++/ClassicAspFormat /home/mikael/Projects/c++/ClassicAspFormat/build /home/mikael/Projects/c++/ClassicAspFormat/build /home/mikael/Projects/c++/ClassicAspFormat/build/CMakeFiles/caspfmt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/caspfmt.dir/depend

