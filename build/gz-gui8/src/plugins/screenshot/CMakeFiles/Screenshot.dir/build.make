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
include src/plugins/screenshot/CMakeFiles/Screenshot.dir/depend.make

# Include the progress variables for this target.
include src/plugins/screenshot/CMakeFiles/Screenshot.dir/progress.make

# Include the compile flags for this target's objects.
include src/plugins/screenshot/CMakeFiles/Screenshot.dir/flags.make

src/plugins/screenshot/moc_Screenshot.cpp: /home/julia/workspace/src/gz-gui/src/plugins/screenshot/Screenshot.hh
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_Screenshot.cpp"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/screenshot && /usr/lib/qt5/bin/moc @/home/julia/workspace/build/gz-gui8/src/plugins/screenshot/moc_Screenshot.cpp_parameters

src/plugins/screenshot/qrc_Screenshot.cpp: /home/julia/workspace/src/gz-gui/src/plugins/screenshot/Screenshot.qml
src/plugins/screenshot/qrc_Screenshot.cpp: /home/julia/workspace/src/gz-gui/src/plugins/screenshot/screenshot.png
src/plugins/screenshot/qrc_Screenshot.cpp: /home/julia/workspace/src/gz-gui/src/plugins/screenshot/folder.png
src/plugins/screenshot/qrc_Screenshot.cpp: src/plugins/screenshot/Screenshot.qrc.depends
src/plugins/screenshot/qrc_Screenshot.cpp: /home/julia/workspace/src/gz-gui/src/plugins/screenshot/Screenshot.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating qrc_Screenshot.cpp"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/screenshot && /usr/lib/qt5/bin/rcc --name Screenshot --output /home/julia/workspace/build/gz-gui8/src/plugins/screenshot/qrc_Screenshot.cpp /home/julia/workspace/src/gz-gui/src/plugins/screenshot/Screenshot.qrc

src/plugins/screenshot/CMakeFiles/Screenshot.dir/Screenshot.cc.o: src/plugins/screenshot/CMakeFiles/Screenshot.dir/flags.make
src/plugins/screenshot/CMakeFiles/Screenshot.dir/Screenshot.cc.o: /home/julia/workspace/src/gz-gui/src/plugins/screenshot/Screenshot.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/plugins/screenshot/CMakeFiles/Screenshot.dir/Screenshot.cc.o"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/screenshot && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Screenshot.dir/Screenshot.cc.o -c /home/julia/workspace/src/gz-gui/src/plugins/screenshot/Screenshot.cc

src/plugins/screenshot/CMakeFiles/Screenshot.dir/Screenshot.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Screenshot.dir/Screenshot.cc.i"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/screenshot && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/src/gz-gui/src/plugins/screenshot/Screenshot.cc > CMakeFiles/Screenshot.dir/Screenshot.cc.i

src/plugins/screenshot/CMakeFiles/Screenshot.dir/Screenshot.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Screenshot.dir/Screenshot.cc.s"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/screenshot && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/src/gz-gui/src/plugins/screenshot/Screenshot.cc -o CMakeFiles/Screenshot.dir/Screenshot.cc.s

src/plugins/screenshot/CMakeFiles/Screenshot.dir/moc_Screenshot.cpp.o: src/plugins/screenshot/CMakeFiles/Screenshot.dir/flags.make
src/plugins/screenshot/CMakeFiles/Screenshot.dir/moc_Screenshot.cpp.o: src/plugins/screenshot/moc_Screenshot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/plugins/screenshot/CMakeFiles/Screenshot.dir/moc_Screenshot.cpp.o"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/screenshot && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Screenshot.dir/moc_Screenshot.cpp.o -c /home/julia/workspace/build/gz-gui8/src/plugins/screenshot/moc_Screenshot.cpp

src/plugins/screenshot/CMakeFiles/Screenshot.dir/moc_Screenshot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Screenshot.dir/moc_Screenshot.cpp.i"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/screenshot && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/build/gz-gui8/src/plugins/screenshot/moc_Screenshot.cpp > CMakeFiles/Screenshot.dir/moc_Screenshot.cpp.i

src/plugins/screenshot/CMakeFiles/Screenshot.dir/moc_Screenshot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Screenshot.dir/moc_Screenshot.cpp.s"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/screenshot && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/build/gz-gui8/src/plugins/screenshot/moc_Screenshot.cpp -o CMakeFiles/Screenshot.dir/moc_Screenshot.cpp.s

src/plugins/screenshot/CMakeFiles/Screenshot.dir/qrc_Screenshot.cpp.o: src/plugins/screenshot/CMakeFiles/Screenshot.dir/flags.make
src/plugins/screenshot/CMakeFiles/Screenshot.dir/qrc_Screenshot.cpp.o: src/plugins/screenshot/qrc_Screenshot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/plugins/screenshot/CMakeFiles/Screenshot.dir/qrc_Screenshot.cpp.o"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/screenshot && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Screenshot.dir/qrc_Screenshot.cpp.o -c /home/julia/workspace/build/gz-gui8/src/plugins/screenshot/qrc_Screenshot.cpp

src/plugins/screenshot/CMakeFiles/Screenshot.dir/qrc_Screenshot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Screenshot.dir/qrc_Screenshot.cpp.i"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/screenshot && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/build/gz-gui8/src/plugins/screenshot/qrc_Screenshot.cpp > CMakeFiles/Screenshot.dir/qrc_Screenshot.cpp.i

src/plugins/screenshot/CMakeFiles/Screenshot.dir/qrc_Screenshot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Screenshot.dir/qrc_Screenshot.cpp.s"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/screenshot && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/build/gz-gui8/src/plugins/screenshot/qrc_Screenshot.cpp -o CMakeFiles/Screenshot.dir/qrc_Screenshot.cpp.s

# Object files for target Screenshot
Screenshot_OBJECTS = \
"CMakeFiles/Screenshot.dir/Screenshot.cc.o" \
"CMakeFiles/Screenshot.dir/moc_Screenshot.cpp.o" \
"CMakeFiles/Screenshot.dir/qrc_Screenshot.cpp.o"

# External object files for target Screenshot
Screenshot_EXTERNAL_OBJECTS =

lib/libScreenshot.so: src/plugins/screenshot/CMakeFiles/Screenshot.dir/Screenshot.cc.o
lib/libScreenshot.so: src/plugins/screenshot/CMakeFiles/Screenshot.dir/moc_Screenshot.cpp.o
lib/libScreenshot.so: src/plugins/screenshot/CMakeFiles/Screenshot.dir/qrc_Screenshot.cpp.o
lib/libScreenshot.so: src/plugins/screenshot/CMakeFiles/Screenshot.dir/build.make
lib/libScreenshot.so: lib/libgz-gui8.so.8.0.0~pre1
lib/libScreenshot.so: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
lib/libScreenshot.so: /home/julia/workspace/install/lib/libgz-rendering8.so.8.0.0~pre1
lib/libScreenshot.so: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
lib/libScreenshot.so: /home/julia/workspace/install/lib/libgz-plugin2-loader.so.2.0.1
lib/libScreenshot.so: /usr/lib/x86_64-linux-gnu/libgz-transport12.so.12.1.0
lib/libScreenshot.so: /usr/lib/x86_64-linux-gnu/libgz-msgs9.so.9.3.0
lib/libScreenshot.so: /usr/lib/x86_64-linux-gnu/libprotobuf.so
lib/libScreenshot.so: /usr/lib/x86_64-linux-gnu/libQt5QuickControls2.so.5.12.8
lib/libScreenshot.so: /usr/lib/x86_64-linux-gnu/libQt5Quick.so.5.12.8
lib/libScreenshot.so: /usr/lib/x86_64-linux-gnu/libQt5Qml.so.5.12.8
lib/libScreenshot.so: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.12.8
lib/libScreenshot.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
lib/libScreenshot.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
lib/libScreenshot.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
lib/libScreenshot.so: /home/julia/workspace/install/lib/libgz-common5-events.so.5.3.1
lib/libScreenshot.so: /home/julia/workspace/install/lib/libgz-common5-profiler.so.5.3.1
lib/libScreenshot.so: /home/julia/workspace/install/lib/libgz-common5-geospatial.so.5.3.1
lib/libScreenshot.so: /home/julia/workspace/install/lib/libgz-common5-graphics.so.5.3.1
lib/libScreenshot.so: /home/julia/workspace/install/lib/libgz-math7.so.7.1.0
lib/libScreenshot.so: /home/julia/workspace/install/lib/libgz-common5.so.5.3.1
lib/libScreenshot.so: /usr/lib/x86_64-linux-gnu/libuuid.so
lib/libScreenshot.so: /usr/lib/x86_64-linux-gnu/libuuid.so
lib/libScreenshot.so: /home/julia/workspace/install/lib/libgz-plugin2.so.2.0.1
lib/libScreenshot.so: /home/julia/workspace/install/lib/libgz-utils2.so.2.0.0
lib/libScreenshot.so: src/plugins/screenshot/CMakeFiles/Screenshot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/julia/workspace/build/gz-gui8/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library ../../../lib/libScreenshot.so"
	cd /home/julia/workspace/build/gz-gui8/src/plugins/screenshot && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Screenshot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/plugins/screenshot/CMakeFiles/Screenshot.dir/build: lib/libScreenshot.so

.PHONY : src/plugins/screenshot/CMakeFiles/Screenshot.dir/build

src/plugins/screenshot/CMakeFiles/Screenshot.dir/clean:
	cd /home/julia/workspace/build/gz-gui8/src/plugins/screenshot && $(CMAKE_COMMAND) -P CMakeFiles/Screenshot.dir/cmake_clean.cmake
.PHONY : src/plugins/screenshot/CMakeFiles/Screenshot.dir/clean

src/plugins/screenshot/CMakeFiles/Screenshot.dir/depend: src/plugins/screenshot/moc_Screenshot.cpp
src/plugins/screenshot/CMakeFiles/Screenshot.dir/depend: src/plugins/screenshot/qrc_Screenshot.cpp
	cd /home/julia/workspace/build/gz-gui8 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/julia/workspace/src/gz-gui /home/julia/workspace/src/gz-gui/src/plugins/screenshot /home/julia/workspace/build/gz-gui8 /home/julia/workspace/build/gz-gui8/src/plugins/screenshot /home/julia/workspace/build/gz-gui8/src/plugins/screenshot/CMakeFiles/Screenshot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/plugins/screenshot/CMakeFiles/Screenshot.dir/depend

