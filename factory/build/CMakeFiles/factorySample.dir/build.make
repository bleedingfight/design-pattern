# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_SOURCE_DIR = /home/liushuai/design-pattern/factory

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/liushuai/design-pattern/factory/build

# Include any dependencies generated for this target.
include CMakeFiles/factorySample.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/factorySample.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/factorySample.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/factorySample.dir/flags.make

CMakeFiles/factorySample.dir/main.cc.o: CMakeFiles/factorySample.dir/flags.make
CMakeFiles/factorySample.dir/main.cc.o: ../main.cc
CMakeFiles/factorySample.dir/main.cc.o: CMakeFiles/factorySample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liushuai/design-pattern/factory/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/factorySample.dir/main.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/factorySample.dir/main.cc.o -MF CMakeFiles/factorySample.dir/main.cc.o.d -o CMakeFiles/factorySample.dir/main.cc.o -c /home/liushuai/design-pattern/factory/main.cc

CMakeFiles/factorySample.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/factorySample.dir/main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liushuai/design-pattern/factory/main.cc > CMakeFiles/factorySample.dir/main.cc.i

CMakeFiles/factorySample.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/factorySample.dir/main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liushuai/design-pattern/factory/main.cc -o CMakeFiles/factorySample.dir/main.cc.s

# Object files for target factorySample
factorySample_OBJECTS = \
"CMakeFiles/factorySample.dir/main.cc.o"

# External object files for target factorySample
factorySample_EXTERNAL_OBJECTS =

factorySample: CMakeFiles/factorySample.dir/main.cc.o
factorySample: CMakeFiles/factorySample.dir/build.make
factorySample: src/libfactory.so
factorySample: CMakeFiles/factorySample.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/liushuai/design-pattern/factory/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable factorySample"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/factorySample.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/factorySample.dir/build: factorySample
.PHONY : CMakeFiles/factorySample.dir/build

CMakeFiles/factorySample.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/factorySample.dir/cmake_clean.cmake
.PHONY : CMakeFiles/factorySample.dir/clean

CMakeFiles/factorySample.dir/depend:
	cd /home/liushuai/design-pattern/factory/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/liushuai/design-pattern/factory /home/liushuai/design-pattern/factory /home/liushuai/design-pattern/factory/build /home/liushuai/design-pattern/factory/build /home/liushuai/design-pattern/factory/build/CMakeFiles/factorySample.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/factorySample.dir/depend
