# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.3.4\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.3.4\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\YHK\CLionProjects\morsecode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\YHK\CLionProjects\morsecode\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/morsecode.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/morsecode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/morsecode.dir/flags.make

CMakeFiles/morsecode.dir/main.cpp.obj: CMakeFiles/morsecode.dir/flags.make
CMakeFiles/morsecode.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\YHK\CLionProjects\morsecode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/morsecode.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.1-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\morsecode.dir\main.cpp.obj -c C:\Users\YHK\CLionProjects\morsecode\main.cpp

CMakeFiles/morsecode.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/morsecode.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.1-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\YHK\CLionProjects\morsecode\main.cpp > CMakeFiles\morsecode.dir\main.cpp.i

CMakeFiles/morsecode.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/morsecode.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.1-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\YHK\CLionProjects\morsecode\main.cpp -o CMakeFiles\morsecode.dir\main.cpp.s

CMakeFiles/morsecode.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/morsecode.dir/main.cpp.obj.requires

CMakeFiles/morsecode.dir/main.cpp.obj.provides: CMakeFiles/morsecode.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\morsecode.dir\build.make CMakeFiles/morsecode.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/morsecode.dir/main.cpp.obj.provides

CMakeFiles/morsecode.dir/main.cpp.obj.provides.build: CMakeFiles/morsecode.dir/main.cpp.obj


# Object files for target morsecode
morsecode_OBJECTS = \
"CMakeFiles/morsecode.dir/main.cpp.obj"

# External object files for target morsecode
morsecode_EXTERNAL_OBJECTS =

morsecode.exe: CMakeFiles/morsecode.dir/main.cpp.obj
morsecode.exe: CMakeFiles/morsecode.dir/build.make
morsecode.exe: CMakeFiles/morsecode.dir/linklibs.rsp
morsecode.exe: CMakeFiles/morsecode.dir/objects1.rsp
morsecode.exe: CMakeFiles/morsecode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\YHK\CLionProjects\morsecode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable morsecode.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\morsecode.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/morsecode.dir/build: morsecode.exe

.PHONY : CMakeFiles/morsecode.dir/build

CMakeFiles/morsecode.dir/requires: CMakeFiles/morsecode.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/morsecode.dir/requires

CMakeFiles/morsecode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\morsecode.dir\cmake_clean.cmake
.PHONY : CMakeFiles/morsecode.dir/clean

CMakeFiles/morsecode.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\YHK\CLionProjects\morsecode C:\Users\YHK\CLionProjects\morsecode C:\Users\YHK\CLionProjects\morsecode\cmake-build-debug C:\Users\YHK\CLionProjects\morsecode\cmake-build-debug C:\Users\YHK\CLionProjects\morsecode\cmake-build-debug\CMakeFiles\morsecode.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/morsecode.dir/depend

