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
CMAKE_SOURCE_DIR = C:\Users\spear\Desktop\repo_zyang07\a4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\spear\Desktop\repo_zyang07\a4\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hashing.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hashing.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hashing.dir/flags.make

CMakeFiles/hashing.dir/main.cpp.obj: CMakeFiles/hashing.dir/flags.make
CMakeFiles/hashing.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\spear\Desktop\repo_zyang07\a4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hashing.dir/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\hashing.dir\main.cpp.obj -c C:\Users\spear\Desktop\repo_zyang07\a4\main.cpp

CMakeFiles/hashing.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hashing.dir/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\spear\Desktop\repo_zyang07\a4\main.cpp > CMakeFiles\hashing.dir\main.cpp.i

CMakeFiles/hashing.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hashing.dir/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\spear\Desktop\repo_zyang07\a4\main.cpp -o CMakeFiles\hashing.dir\main.cpp.s

# Object files for target hashing
hashing_OBJECTS = \
"CMakeFiles/hashing.dir/main.cpp.obj"

# External object files for target hashing
hashing_EXTERNAL_OBJECTS =

hashing.exe: CMakeFiles/hashing.dir/main.cpp.obj
hashing.exe: CMakeFiles/hashing.dir/build.make
hashing.exe: CMakeFiles/hashing.dir/linklibs.rsp
hashing.exe: CMakeFiles/hashing.dir/objects1.rsp
hashing.exe: CMakeFiles/hashing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\spear\Desktop\repo_zyang07\a4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hashing.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\hashing.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hashing.dir/build: hashing.exe

.PHONY : CMakeFiles/hashing.dir/build

CMakeFiles/hashing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\hashing.dir\cmake_clean.cmake
.PHONY : CMakeFiles/hashing.dir/clean

CMakeFiles/hashing.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\spear\Desktop\repo_zyang07\a4 C:\Users\spear\Desktop\repo_zyang07\a4 C:\Users\spear\Desktop\repo_zyang07\a4\cmake-build-debug C:\Users\spear\Desktop\repo_zyang07\a4\cmake-build-debug C:\Users\spear\Desktop\repo_zyang07\a4\cmake-build-debug\CMakeFiles\hashing.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hashing.dir/depend
