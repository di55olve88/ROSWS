# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/viki/ROSWS/simws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/viki/ROSWS/simws/build

# Include any dependencies generated for this target.
include tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/depend.make

# Include the progress variables for this target.
include tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/progress.make

# Include the compile flags for this target's objects.
include tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/flags.make

tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.o: tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/flags.make
tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.o: /home/viki/ROSWS/simws/src/tum_simulator/cvg_sim_gazebo_plugins/src/quadrotor_state_controller.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/viki/ROSWS/simws/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.o"
	cd /home/viki/ROSWS/simws/build/tum_simulator/cvg_sim_gazebo_plugins && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.o -c /home/viki/ROSWS/simws/src/tum_simulator/cvg_sim_gazebo_plugins/src/quadrotor_state_controller.cpp

tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.i"
	cd /home/viki/ROSWS/simws/build/tum_simulator/cvg_sim_gazebo_plugins && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/viki/ROSWS/simws/src/tum_simulator/cvg_sim_gazebo_plugins/src/quadrotor_state_controller.cpp > CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.i

tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.s"
	cd /home/viki/ROSWS/simws/build/tum_simulator/cvg_sim_gazebo_plugins && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/viki/ROSWS/simws/src/tum_simulator/cvg_sim_gazebo_plugins/src/quadrotor_state_controller.cpp -o CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.s

tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.o.requires:
.PHONY : tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.o.requires

tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.o.provides: tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.o.requires
	$(MAKE) -f tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/build.make tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.o.provides.build
.PHONY : tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.o.provides

tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.o.provides.build: tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.o

# Object files for target hector_gazebo_quadrotor_state_controller
hector_gazebo_quadrotor_state_controller_OBJECTS = \
"CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.o"

# External object files for target hector_gazebo_quadrotor_state_controller
hector_gazebo_quadrotor_state_controller_EXTERNAL_OBJECTS =

/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.o
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/build.make
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /opt/ros/indigo/lib/libimage_transport.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /opt/ros/indigo/lib/libmessage_filters.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /usr/lib/x86_64-linux-gnu/libtinyxml.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /opt/ros/indigo/lib/libclass_loader.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /usr/lib/libPocoFoundation.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /usr/lib/x86_64-linux-gnu/libdl.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /opt/ros/indigo/lib/libroscpp.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /opt/ros/indigo/lib/librosconsole.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /opt/ros/indigo/lib/librosconsole_log4cxx.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /opt/ros/indigo/lib/librosconsole_backend_interface.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /usr/lib/liblog4cxx.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /opt/ros/indigo/lib/libxmlrpcpp.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /opt/ros/indigo/lib/libroslib.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /opt/ros/indigo/lib/libroscpp_serialization.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /opt/ros/indigo/lib/librostime.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /opt/ros/indigo/lib/libcpp_common.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so: tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library /home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so"
	cd /home/viki/ROSWS/simws/build/tum_simulator/cvg_sim_gazebo_plugins && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/build: /home/viki/ROSWS/simws/devel/lib/libhector_gazebo_quadrotor_state_controller.so
.PHONY : tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/build

tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/requires: tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/src/quadrotor_state_controller.cpp.o.requires
.PHONY : tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/requires

tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/clean:
	cd /home/viki/ROSWS/simws/build/tum_simulator/cvg_sim_gazebo_plugins && $(CMAKE_COMMAND) -P CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/cmake_clean.cmake
.PHONY : tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/clean

tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/depend:
	cd /home/viki/ROSWS/simws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/viki/ROSWS/simws/src /home/viki/ROSWS/simws/src/tum_simulator/cvg_sim_gazebo_plugins /home/viki/ROSWS/simws/build /home/viki/ROSWS/simws/build/tum_simulator/cvg_sim_gazebo_plugins /home/viki/ROSWS/simws/build/tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tum_simulator/cvg_sim_gazebo_plugins/CMakeFiles/hector_gazebo_quadrotor_state_controller.dir/depend

