# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\spear\Desktop\repo_zyang07\a7\graphs2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\spear\Desktop\repo_zyang07\a7\graphs2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/graphs_exec.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/graphs_exec.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/graphs_exec.dir/flags.make

CMakeFiles/graphs_exec.dir/src/main.cpp.obj: CMakeFiles/graphs_exec.dir/flags.make
CMakeFiles/graphs_exec.dir/src/main.cpp.obj: CMakeFiles/graphs_exec.dir/includes_CXX.rsp
CMakeFiles/graphs_exec.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\spear\Desktop\repo_zyang07\a7\graphs2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/graphs_exec.dir/src/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\graphs_exec.dir\src\main.cpp.obj -c C:\Users\spear\Desktop\repo_zyang07\a7\graphs2\src\main.cpp

CMakeFiles/graphs_exec.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphs_exec.dir/src/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\spear\Desktop\repo_zyang07\a7\graphs2\src\main.cpp > CMakeFiles\graphs_exec.dir\src\main.cpp.i

CMakeFiles/graphs_exec.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphs_exec.dir/src/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\spear\Desktop\repo_zyang07\a7\graphs2\src\main.cpp -o CMakeFiles\graphs_exec.dir\src\main.cpp.s

# Object files for target graphs_exec
graphs_exec_OBJECTS = \
"CMakeFiles/graphs_exec.dir/src/main.cpp.obj"

# External object files for target graphs_exec
graphs_exec_EXTERNAL_OBJECTS =

graphs_exec.exe: CMakeFiles/graphs_exec.dir/src/main.cpp.obj
graphs_exec.exe: CMakeFiles/graphs_exec.dir/build.make
graphs_exec.exe: CMakeFiles/graphs_exec.dir/linklibs.rsp
graphs_exec.exe: CMakeFiles/graphs_exec.dir/objects1.rsp
graphs_exec.exe: CMakeFiles/graphs_exec.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\spear\Desktop\repo_zyang07\a7\graphs2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable graphs_exec.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\graphs_exec.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/graphs_exec.dir/build: graphs_exec.exe

.PHONY : CMakeFiles/graphs_exec.dir/build

CMakeFiles/graphs_exec.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\graphs_exec.dir\cmake_clean.cmake
.PHONY : CMakeFiles/graphs_exec.dir/clean

CMakeFiles/graphs_exec.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\spear\Desktop\repo_zyang07\a7\graphs2 C:\Users\spear\Desktop\repo_zyang07\a7\graphs2 C:\Users\spear\Desktop\repo_zyang07\a7\graphs2\cmake-build-debug C:\Users\spear\Desktop\repo_zyang07\a7\graphs2\cmake-build-debug C:\Users\spear\Desktop\repo_zyang07\a7\graphs2\cmake-build-debug\CMakeFiles\graphs_exec.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/graphs_exec.dir/depend

