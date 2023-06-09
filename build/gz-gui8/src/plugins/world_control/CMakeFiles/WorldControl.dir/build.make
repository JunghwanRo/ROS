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
CMAKE_SOURCE_DIR = /home/julia/workspace/src/gz-gui

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/julia/workspace/build/gz-gui8

# Include any dependencies generated for this target.
include src/plugins/world_control/CMakeFiles/WorldControl.dir/depend.make

# Include the progress variables for this target.
include src/plugins/world_control/CMakeFiles/WorldControl.dir/progress.make

# Include the compile flags for this target's objects.
include src/plugins/world_control/CMakeFiles/WorldControl.dir/flags.make

src/plugins/world_control/moc_WorldControl.cpp: /home/julia/workspace/src/gz-gui/src/plugins/world_control/WorldControl.hh
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_WorldControl.cpp"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && /usr/lib/qt5/bin/moc @/home/julia/workspace/build/gz-gui8/src/plugins/world_control/moc_WorldControl.cpp_parameters

src/plugins/world_control/moc_WorldControlEventListener.cpp: /home/julia/workspace/src/gz-gui/src/plugins/world_control/WorldControlEventListener.hh
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating moc_WorldControlEventListener.cpp"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && /usr/lib/qt5/bin/moc @/home/julia/workspace/build/gz-gui8/src/plugins/world_control/moc_WorldControlEventListener.cpp_parameters

src/plugins/world_control/qrc_WorldControl.cpp: /home/julia/workspace/src/gz-gui/src/plugins/world_control/WorldControl.qml
src/plugins/world_control/qrc_WorldControl.cpp: src/plugins/world_control/WorldControl.qrc.depends
src/plugins/world_control/qrc_WorldControl.cpp: /home/julia/workspace/src/gz-gui/src/plugins/world_control/WorldControl.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating qrc_WorldControl.cpp"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && /usr/lib/qt5/bin/rcc --name WorldControl --output /home/julia/workspace/build/gz-gui8/src/plugins/world_control/qrc_WorldControl.cpp /home/julia/workspace/src/gz-gui/src/plugins/world_control/WorldControl.qrc

src/plugins/world_control/CMakeFiles/WorldControl.dir/WorldControl.cc.o: src/plugins/world_control/CMakeFiles/WorldControl.dir/flags.make
src/plugins/world_control/CMakeFiles/WorldControl.dir/WorldControl.cc.o: /home/julia/workspace/src/gz-gui/src/plugins/world_control/WorldControl.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/plugins/world_control/CMakeFiles/WorldControl.dir/WorldControl.cc.o"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/WorldControl.dir/WorldControl.cc.o -c /home/julia/workspace/src/gz-gui/src/plugins/world_control/WorldControl.cc

src/plugins/world_control/CMakeFiles/WorldControl.dir/WorldControl.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WorldControl.dir/WorldControl.cc.i"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/src/gz-gui/src/plugins/world_control/WorldControl.cc > CMakeFiles/WorldControl.dir/WorldControl.cc.i

src/plugins/world_control/CMakeFiles/WorldControl.dir/WorldControl.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WorldControl.dir/WorldControl.cc.s"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/src/gz-gui/src/plugins/world_control/WorldControl.cc -o CMakeFiles/WorldControl.dir/WorldControl.cc.s

src/plugins/world_control/CMakeFiles/WorldControl.dir/WorldControlEventListener.cc.o: src/plugins/world_control/CMakeFiles/WorldControl.dir/flags.make
src/plugins/world_control/CMakeFiles/WorldControl.dir/WorldControlEventListener.cc.o: /home/julia/workspace/src/gz-gui/src/plugins/world_control/WorldControlEventListener.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/plugins/world_control/CMakeFiles/WorldControl.dir/WorldControlEventListener.cc.o"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/WorldControl.dir/WorldControlEventListener.cc.o -c /home/julia/workspace/src/gz-gui/src/plugins/world_control/WorldControlEventListener.cc

src/plugins/world_control/CMakeFiles/WorldControl.dir/WorldControlEventListener.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WorldControl.dir/WorldControlEventListener.cc.i"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/src/gz-gui/src/plugins/world_control/WorldControlEventListener.cc > CMakeFiles/WorldControl.dir/WorldControlEventListener.cc.i

src/plugins/world_control/CMakeFiles/WorldControl.dir/WorldControlEventListener.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WorldControl.dir/WorldControlEventListener.cc.s"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/src/gz-gui/src/plugins/world_control/WorldControlEventListener.cc -o CMakeFiles/WorldControl.dir/WorldControlEventListener.cc.s

src/plugins/world_control/CMakeFiles/WorldControl.dir/moc_WorldControl.cpp.o: src/plugins/world_control/CMakeFiles/WorldControl.dir/flags.make
src/plugins/world_control/CMakeFiles/WorldControl.dir/moc_WorldControl.cpp.o: src/plugins/world_control/moc_WorldControl.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/plugins/world_control/CMakeFiles/WorldControl.dir/moc_WorldControl.cpp.o"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/WorldControl.dir/moc_WorldControl.cpp.o -c /home/julia/workspace/build/gz-gui8/src/plugins/world_control/moc_WorldControl.cpp

src/plugins/world_control/CMakeFiles/WorldControl.dir/moc_WorldControl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WorldControl.dir/moc_WorldControl.cpp.i"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/build/gz-gui8/src/plugins/world_control/moc_WorldControl.cpp > CMakeFiles/WorldControl.dir/moc_WorldControl.cpp.i

src/plugins/world_control/CMakeFiles/WorldControl.dir/moc_WorldControl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WorldControl.dir/moc_WorldControl.cpp.s"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/build/gz-gui8/src/plugins/world_control/moc_WorldControl.cpp -o CMakeFiles/WorldControl.dir/moc_WorldControl.cpp.s

src/plugins/world_control/CMakeFiles/WorldControl.dir/moc_WorldControlEventListener.cpp.o: src/plugins/world_control/CMakeFiles/WorldControl.dir/flags.make
src/plugins/world_control/CMakeFiles/WorldControl.dir/moc_WorldControlEventListener.cpp.o: src/plugins/world_control/moc_WorldControlEventListener.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/plugins/world_control/CMakeFiles/WorldControl.dir/moc_WorldControlEventListener.cpp.o"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/WorldControl.dir/moc_WorldControlEventListener.cpp.o -c /home/julia/workspace/build/gz-gui8/src/plugins/world_control/moc_WorldControlEventListener.cpp

src/plugins/world_control/CMakeFiles/WorldControl.dir/moc_WorldControlEventListener.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WorldControl.dir/moc_WorldControlEventListener.cpp.i"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/build/gz-gui8/src/plugins/world_control/moc_WorldControlEventListener.cpp > CMakeFiles/WorldControl.dir/moc_WorldControlEventListener.cpp.i

src/plugins/world_control/CMakeFiles/WorldControl.dir/moc_WorldControlEventListener.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WorldControl.dir/moc_WorldControlEventListener.cpp.s"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/build/gz-gui8/src/plugins/world_control/moc_WorldControlEventListener.cpp -o CMakeFiles/WorldControl.dir/moc_WorldControlEventListener.cpp.s

src/plugins/world_control/CMakeFiles/WorldControl.dir/qrc_WorldControl.cpp.o: src/plugins/world_control/CMakeFiles/WorldControl.dir/flags.make
src/plugins/world_control/CMakeFiles/WorldControl.dir/qrc_WorldControl.cpp.o: src/plugins/world_control/qrc_WorldControl.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/plugins/world_control/CMakeFiles/WorldControl.dir/qrc_WorldControl.cpp.o"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/WorldControl.dir/qrc_WorldControl.cpp.o -c /home/julia/workspace/build/gz-gui8/src/plugins/world_control/qrc_WorldControl.cpp

src/plugins/world_control/CMakeFiles/WorldControl.dir/qrc_WorldControl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WorldControl.dir/qrc_WorldControl.cpp.i"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/build/gz-gui8/src/plugins/world_control/qrc_WorldControl.cpp > CMakeFiles/WorldControl.dir/qrc_WorldControl.cpp.i

src/plugins/world_control/CMakeFiles/WorldControl.dir/qrc_WorldControl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WorldControl.dir/qrc_WorldControl.cpp.s"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/build/gz-gui8/src/plugins/world_control/qrc_WorldControl.cpp -o CMakeFiles/WorldControl.dir/qrc_WorldControl.cpp.s

# Object files for target WorldControl
WorldControl_OBJECTS = \
"CMakeFiles/WorldControl.dir/WorldControl.cc.o" \
"CMakeFiles/WorldControl.dir/WorldControlEventListener.cc.o" \
"CMakeFiles/WorldControl.dir/moc_WorldControl.cpp.o" \
"CMakeFiles/WorldControl.dir/moc_WorldControlEventListener.cpp.o" \
"CMakeFiles/WorldControl.dir/qrc_WorldControl.cpp.o"

# External object files for target WorldControl
WorldControl_EXTERNAL_OBJECTS =

lib/libWorldControl.so: src/plugins/world_control/CMakeFiles/WorldControl.dir/WorldControl.cc.o
lib/libWorldControl.so: src/plugins/world_control/CMakeFiles/WorldControl.dir/WorldControlEventListener.cc.o
lib/libWorldControl.so: src/plugins/world_control/CMakeFiles/WorldControl.dir/moc_WorldControl.cpp.o
lib/libWorldControl.so: src/plugins/world_control/CMakeFiles/WorldControl.dir/moc_WorldControlEventListener.cpp.o
lib/libWorldControl.so: src/plugins/world_control/CMakeFiles/WorldControl.dir/qrc_WorldControl.cpp.o
lib/libWorldControl.so: src/plugins/world_control/CMakeFiles/WorldControl.dir/build.make
lib/libWorldControl.so: lib/libgz-gui8.so.8.0.0~pre1
lib/libWorldControl.so: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
lib/libWorldControl.so: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
lib/libWorldControl.so: /home/julia/workspace/install/lib/libgz-common5-events.so.5.3.1
lib/libWorldControl.so: /home/julia/workspace/install/lib/libgz-common5.so.5.3.1
lib/libWorldControl.so: /home/julia/workspace/install/lib/libgz-plugin2-loader.so.2.0.1
lib/libWorldControl.so: /usr/lib/x86_64-linux-gnu/libgz-transport12.so.12.1.0
lib/libWorldControl.so: /usr/lib/x86_64-linux-gnu/libgz-msgs9.so.9.3.0
lib/libWorldControl.so: /home/julia/workspace/install/lib/libgz-math7.so.7.1.0
lib/libWorldControl.so: /usr/lib/x86_64-linux-gnu/libprotobuf.so
lib/libWorldControl.so: /usr/lib/x86_64-linux-gnu/libuuid.so
lib/libWorldControl.so: /usr/lib/x86_64-linux-gnu/libuuid.so
lib/libWorldControl.so: /usr/lib/x86_64-linux-gnu/libQt5QuickControls2.so.5.12.8
lib/libWorldControl.so: /usr/lib/x86_64-linux-gnu/libQt5Quick.so.5.12.8
lib/libWorldControl.so: /usr/lib/x86_64-linux-gnu/libQt5Qml.so.5.12.8
lib/libWorldControl.so: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.12.8
lib/libWorldControl.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
lib/libWorldControl.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
lib/libWorldControl.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
lib/libWorldControl.so: /home/julia/workspace/install/lib/libgz-plugin2.so.2.0.1
lib/libWorldControl.so: /home/julia/workspace/install/lib/libgz-utils2.so.2.0.0
lib/libWorldControl.so: src/plugins/world_control/CMakeFiles/WorldControl.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX shared library ../../../lib/libWorldControl.so"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/WorldControl.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/plugins/world_control/CMakeFiles/WorldControl.dir/build: lib/libWorldControl.so

.PHONY : src/plugins/world_control/CMakeFiles/WorldControl.dir/build

src/plugins/world_control/CMakeFiles/WorldControl.dir/clean:
	cd /home/julia/workspace/build/gz-gui8/src/plugins/world_control && $(CMAKE_COMMAND) -P CMakeFiles/WorldControl.dir/cmake_clean.cmake
.PHONY : src/plugins/world_control/CMakeFiles/WorldControl.dir/clean

src/plugins/world_control/CMakeFiles/WorldControl.dir/depend: src/plugins/world_control/moc_WorldControl.cpp
src/plugins/world_control/CMakeFiles/WorldControl.dir/depend: src/plugins/world_control/moc_WorldControlEventListener.cpp
src/plugins/world_control/CMakeFiles/WorldControl.dir/depend: src/plugins/world_control/qrc_WorldControl.cpp
	cd /home/julia/workspace/build/gz-gui8 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/julia/workspace/src/gz-gui /home/julia/workspace/src/gz-gui/src/plugins/world_control /home/julia/workspace/build/gz-gui8 /home/julia/workspace/build/gz-gui8/src/plugins/world_control /home/julia/workspace/build/gz-gui8/src/plugins/world_control/CMakeFiles/WorldControl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/plugins/world_control/CMakeFiles/WorldControl.dir/depend

