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
CMAKE_SOURCE_DIR = /home/julia/workspace/src/gz-transport

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/julia/workspace/build/gz-transport13

# Include any dependencies generated for this target.
include src/cmd/CMakeFiles/gz-transport-service.dir/depend.make

# Include the progress variables for this target.
include src/cmd/CMakeFiles/gz-transport-service.dir/progress.make

# Include the compile flags for this target's objects.
include src/cmd/CMakeFiles/gz-transport-service.dir/flags.make

src/cmd/CMakeFiles/gz-transport-service.dir/service_main.cc.o: src/cmd/CMakeFiles/gz-transport-service.dir/flags.make
src/cmd/CMakeFiles/gz-transport-service.dir/service_main.cc.o: /home/julia/workspace/src/gz-transport/src/cmd/service_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-transport13/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/cmd/CMakeFiles/gz-transport-service.dir/service_main.cc.o"
	cd /home/julia/workspace/build/gz-transport13/src/cmd && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gz-transport-service.dir/service_main.cc.o -c /home/julia/workspace/src/gz-transport/src/cmd/service_main.cc

src/cmd/CMakeFiles/gz-transport-service.dir/service_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gz-transport-service.dir/service_main.cc.i"
	cd /home/julia/workspace/build/gz-transport13/src/cmd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/src/gz-transport/src/cmd/service_main.cc > CMakeFiles/gz-transport-service.dir/service_main.cc.i

src/cmd/CMakeFiles/gz-transport-service.dir/service_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gz-transport-service.dir/service_main.cc.s"
	cd /home/julia/workspace/build/gz-transport13/src/cmd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/src/gz-transport/src/cmd/service_main.cc -o CMakeFiles/gz-transport-service.dir/service_main.cc.s

# Object files for target gz-transport-service
gz__transport__service_OBJECTS = \
"CMakeFiles/gz-transport-service.dir/service_main.cc.o"

# External object files for target gz-transport-service
gz__transport__service_EXTERNAL_OBJECTS =

bin/gz-transport-service: src/cmd/CMakeFiles/gz-transport-service.dir/service_main.cc.o
bin/gz-transport-service: src/cmd/CMakeFiles/gz-transport-service.dir/build.make
bin/gz-transport-service: lib/libgz.a
bin/gz-transport-service: lib/libgz-transport13.so.13.0.0~pre1
bin/gz-transport-service: /home/julia/workspace/install/lib/libgz-msgs10.so.10.0.0
bin/gz-transport-service: /usr/lib/x86_64-linux-gnu/libprotobuf.so
bin/gz-transport-service: /home/julia/workspace/install/lib/libgz-math7.so.7.1.0
bin/gz-transport-service: /home/julia/workspace/install/lib/libgz-utils2.so.2.0.0
bin/gz-transport-service: /usr/lib/x86_64-linux-gnu/libuuid.so
bin/gz-transport-service: /usr/lib/x86_64-linux-gnu/libuuid.so
bin/gz-transport-service: src/cmd/CMakeFiles/gz-transport-service.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/julia/workspace/build/gz-transport13/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/gz-transport-service"
	cd /home/julia/workspace/build/gz-transport13/src/cmd && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gz-transport-service.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/cmd/CMakeFiles/gz-transport-service.dir/build: bin/gz-transport-service

.PHONY : src/cmd/CMakeFiles/gz-transport-service.dir/build

src/cmd/CMakeFiles/gz-transport-service.dir/clean:
	cd /home/julia/workspace/build/gz-transport13/src/cmd && $(CMAKE_COMMAND) -P CMakeFiles/gz-transport-service.dir/cmake_clean.cmake
.PHONY : src/cmd/CMakeFiles/gz-transport-service.dir/clean

src/cmd/CMakeFiles/gz-transport-service.dir/depend:
	cd /home/julia/workspace/build/gz-transport13 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/julia/workspace/src/gz-transport /home/julia/workspace/src/gz-transport/src/cmd /home/julia/workspace/build/gz-transport13 /home/julia/workspace/build/gz-transport13/src/cmd /home/julia/workspace/build/gz-transport13/src/cmd/CMakeFiles/gz-transport-service.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/cmd/CMakeFiles/gz-transport-service.dir/depend
