# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_SOURCE_DIR = /workspaces/TFE23/CMAKE

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/TFE23/CMAKE/build

# Include any dependencies generated for this target.
include CMakeFiles/cmake_test_exec.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cmake_test_exec.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cmake_test_exec.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmake_test_exec.dir/flags.make

CMakeFiles/cmake_test_exec.dir/CMake.c.o: CMakeFiles/cmake_test_exec.dir/flags.make
CMakeFiles/cmake_test_exec.dir/CMake.c.o: /workspaces/TFE23/CMAKE/CMake.c
CMakeFiles/cmake_test_exec.dir/CMake.c.o: CMakeFiles/cmake_test_exec.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/workspaces/TFE23/CMAKE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cmake_test_exec.dir/CMake.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/cmake_test_exec.dir/CMake.c.o -MF CMakeFiles/cmake_test_exec.dir/CMake.c.o.d -o CMakeFiles/cmake_test_exec.dir/CMake.c.o -c /workspaces/TFE23/CMAKE/CMake.c

CMakeFiles/cmake_test_exec.dir/CMake.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cmake_test_exec.dir/CMake.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /workspaces/TFE23/CMAKE/CMake.c > CMakeFiles/cmake_test_exec.dir/CMake.c.i

CMakeFiles/cmake_test_exec.dir/CMake.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cmake_test_exec.dir/CMake.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /workspaces/TFE23/CMAKE/CMake.c -o CMakeFiles/cmake_test_exec.dir/CMake.c.s

# Object files for target cmake_test_exec
cmake_test_exec_OBJECTS = \
"CMakeFiles/cmake_test_exec.dir/CMake.c.o"

# External object files for target cmake_test_exec
cmake_test_exec_EXTERNAL_OBJECTS =

cmake_test_exec: CMakeFiles/cmake_test_exec.dir/CMake.c.o
cmake_test_exec: CMakeFiles/cmake_test_exec.dir/build.make
cmake_test_exec: CMakeFiles/cmake_test_exec.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/workspaces/TFE23/CMAKE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cmake_test_exec"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cmake_test_exec.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmake_test_exec.dir/build: cmake_test_exec
.PHONY : CMakeFiles/cmake_test_exec.dir/build

CMakeFiles/cmake_test_exec.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cmake_test_exec.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cmake_test_exec.dir/clean

CMakeFiles/cmake_test_exec.dir/depend:
	cd /workspaces/TFE23/CMAKE/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/TFE23/CMAKE /workspaces/TFE23/CMAKE /workspaces/TFE23/CMAKE/build /workspaces/TFE23/CMAKE/build /workspaces/TFE23/CMAKE/build/CMakeFiles/cmake_test_exec.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/cmake_test_exec.dir/depend
