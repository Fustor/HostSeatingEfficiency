# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /opt/clion-2017.2.1/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2017.2.1/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zach/CLionProjects/hostSeatingEfficency

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zach/CLionProjects/hostSeatingEfficency/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hostSeatingEfficency.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hostSeatingEfficency.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hostSeatingEfficency.dir/flags.make

CMakeFiles/hostSeatingEfficency.dir/main.cpp.o: CMakeFiles/hostSeatingEfficency.dir/flags.make
CMakeFiles/hostSeatingEfficency.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zach/CLionProjects/hostSeatingEfficency/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hostSeatingEfficency.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hostSeatingEfficency.dir/main.cpp.o -c /home/zach/CLionProjects/hostSeatingEfficency/main.cpp

CMakeFiles/hostSeatingEfficency.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hostSeatingEfficency.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zach/CLionProjects/hostSeatingEfficency/main.cpp > CMakeFiles/hostSeatingEfficency.dir/main.cpp.i

CMakeFiles/hostSeatingEfficency.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hostSeatingEfficency.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zach/CLionProjects/hostSeatingEfficency/main.cpp -o CMakeFiles/hostSeatingEfficency.dir/main.cpp.s

CMakeFiles/hostSeatingEfficency.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/hostSeatingEfficency.dir/main.cpp.o.requires

CMakeFiles/hostSeatingEfficency.dir/main.cpp.o.provides: CMakeFiles/hostSeatingEfficency.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/hostSeatingEfficency.dir/build.make CMakeFiles/hostSeatingEfficency.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/hostSeatingEfficency.dir/main.cpp.o.provides

CMakeFiles/hostSeatingEfficency.dir/main.cpp.o.provides.build: CMakeFiles/hostSeatingEfficency.dir/main.cpp.o


CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.o: CMakeFiles/hostSeatingEfficency.dir/flags.make
CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.o: ../restaurant.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zach/CLionProjects/hostSeatingEfficency/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.o -c /home/zach/CLionProjects/hostSeatingEfficency/restaurant.cpp

CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zach/CLionProjects/hostSeatingEfficency/restaurant.cpp > CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.i

CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zach/CLionProjects/hostSeatingEfficency/restaurant.cpp -o CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.s

CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.o.requires:

.PHONY : CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.o.requires

CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.o.provides: CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.o.requires
	$(MAKE) -f CMakeFiles/hostSeatingEfficency.dir/build.make CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.o.provides.build
.PHONY : CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.o.provides

CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.o.provides.build: CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.o


CMakeFiles/hostSeatingEfficency.dir/section.cpp.o: CMakeFiles/hostSeatingEfficency.dir/flags.make
CMakeFiles/hostSeatingEfficency.dir/section.cpp.o: ../section.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zach/CLionProjects/hostSeatingEfficency/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/hostSeatingEfficency.dir/section.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hostSeatingEfficency.dir/section.cpp.o -c /home/zach/CLionProjects/hostSeatingEfficency/section.cpp

CMakeFiles/hostSeatingEfficency.dir/section.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hostSeatingEfficency.dir/section.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zach/CLionProjects/hostSeatingEfficency/section.cpp > CMakeFiles/hostSeatingEfficency.dir/section.cpp.i

CMakeFiles/hostSeatingEfficency.dir/section.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hostSeatingEfficency.dir/section.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zach/CLionProjects/hostSeatingEfficency/section.cpp -o CMakeFiles/hostSeatingEfficency.dir/section.cpp.s

CMakeFiles/hostSeatingEfficency.dir/section.cpp.o.requires:

.PHONY : CMakeFiles/hostSeatingEfficency.dir/section.cpp.o.requires

CMakeFiles/hostSeatingEfficency.dir/section.cpp.o.provides: CMakeFiles/hostSeatingEfficency.dir/section.cpp.o.requires
	$(MAKE) -f CMakeFiles/hostSeatingEfficency.dir/build.make CMakeFiles/hostSeatingEfficency.dir/section.cpp.o.provides.build
.PHONY : CMakeFiles/hostSeatingEfficency.dir/section.cpp.o.provides

CMakeFiles/hostSeatingEfficency.dir/section.cpp.o.provides.build: CMakeFiles/hostSeatingEfficency.dir/section.cpp.o


# Object files for target hostSeatingEfficency
hostSeatingEfficency_OBJECTS = \
"CMakeFiles/hostSeatingEfficency.dir/main.cpp.o" \
"CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.o" \
"CMakeFiles/hostSeatingEfficency.dir/section.cpp.o"

# External object files for target hostSeatingEfficency
hostSeatingEfficency_EXTERNAL_OBJECTS =

hostSeatingEfficency: CMakeFiles/hostSeatingEfficency.dir/main.cpp.o
hostSeatingEfficency: CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.o
hostSeatingEfficency: CMakeFiles/hostSeatingEfficency.dir/section.cpp.o
hostSeatingEfficency: CMakeFiles/hostSeatingEfficency.dir/build.make
hostSeatingEfficency: CMakeFiles/hostSeatingEfficency.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zach/CLionProjects/hostSeatingEfficency/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable hostSeatingEfficency"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hostSeatingEfficency.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hostSeatingEfficency.dir/build: hostSeatingEfficency

.PHONY : CMakeFiles/hostSeatingEfficency.dir/build

CMakeFiles/hostSeatingEfficency.dir/requires: CMakeFiles/hostSeatingEfficency.dir/main.cpp.o.requires
CMakeFiles/hostSeatingEfficency.dir/requires: CMakeFiles/hostSeatingEfficency.dir/restaurant.cpp.o.requires
CMakeFiles/hostSeatingEfficency.dir/requires: CMakeFiles/hostSeatingEfficency.dir/section.cpp.o.requires

.PHONY : CMakeFiles/hostSeatingEfficency.dir/requires

CMakeFiles/hostSeatingEfficency.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hostSeatingEfficency.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hostSeatingEfficency.dir/clean

CMakeFiles/hostSeatingEfficency.dir/depend:
	cd /home/zach/CLionProjects/hostSeatingEfficency/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zach/CLionProjects/hostSeatingEfficency /home/zach/CLionProjects/hostSeatingEfficency /home/zach/CLionProjects/hostSeatingEfficency/cmake-build-debug /home/zach/CLionProjects/hostSeatingEfficency/cmake-build-debug /home/zach/CLionProjects/hostSeatingEfficency/cmake-build-debug/CMakeFiles/hostSeatingEfficency.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hostSeatingEfficency.dir/depend

