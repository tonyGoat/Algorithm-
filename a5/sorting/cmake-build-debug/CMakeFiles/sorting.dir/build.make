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
CMAKE_SOURCE_DIR = C:\Users\spear\Desktop\repo_zyang07\a5\sorting

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\spear\Desktop\repo_zyang07\a5\sorting\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sorting.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sorting.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sorting.dir/flags.make

CMakeFiles/sorting.dir/src/main.cpp.obj: CMakeFiles/sorting.dir/flags.make
CMakeFiles/sorting.dir/src/main.cpp.obj: CMakeFiles/sorting.dir/includes_CXX.rsp
CMakeFiles/sorting.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\spear\Desktop\repo_zyang07\a5\sorting\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sorting.dir/src/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\sorting.dir\src\main.cpp.obj -c C:\Users\spear\Desktop\repo_zyang07\a5\sorting\src\main.cpp

CMakeFiles/sorting.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sorting.dir/src/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\spear\Desktop\repo_zyang07\a5\sorting\src\main.cpp > CMakeFiles\sorting.dir\src\main.cpp.i

CMakeFiles/sorting.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sorting.dir/src/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\spear\Desktop\repo_zyang07\a5\sorting\src\main.cpp -o CMakeFiles\sorting.dir\src\main.cpp.s

# Object files for target sorting
sorting_OBJECTS = \
"CMakeFiles/sorting.dir/src/main.cpp.obj"

# External object files for target sorting
sorting_EXTERNAL_OBJECTS =

sorting.exe: CMakeFiles/sorting.dir/src/main.cpp.obj
sorting.exe: CMakeFiles/sorting.dir/build.make
sorting.exe: CMakeFiles/sorting.dir/linklibs.rsp
sorting.exe: CMakeFiles/sorting.dir/objects1.rsp
sorting.exe: CMakeFiles/sorting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\spear\Desktop\repo_zyang07\a5\sorting\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sorting.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sorting.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sorting.dir/build: sorting.exe

.PHONY : CMakeFiles/sorting.dir/build

CMakeFiles/sorting.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sorting.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sorting.dir/clean

CMakeFiles/sorting.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\spear\Desktop\repo_zyang07\a5\sorting C:\Users\spear\Desktop\repo_zyang07\a5\sorting C:\Users\spear\Desktop\repo_zyang07\a5\sorting\cmake-build-debug C:\Users\spear\Desktop\repo_zyang07\a5\sorting\cmake-build-debug C:\Users\spear\Desktop\repo_zyang07\a5\sorting\cmake-build-debug\CMakeFiles\sorting.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sorting.dir/depend
