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
CMAKE_SOURCE_DIR = C:\Users\YHK\CLionProjects\pri

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\YHK\CLionProjects\pri\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pri.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pri.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pri.dir/flags.make

CMakeFiles/pri.dir/main.cpp.obj: CMakeFiles/pri.dir/flags.make
CMakeFiles/pri.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\YHK\CLionProjects\pri\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pri.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.1-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\pri.dir\main.cpp.obj -c C:\Users\YHK\CLionProjects\pri\main.cpp

CMakeFiles/pri.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pri.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.1-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\YHK\CLionProjects\pri\main.cpp > CMakeFiles\pri.dir\main.cpp.i

CMakeFiles/pri.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pri.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.1-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\YHK\CLionProjects\pri\main.cpp -o CMakeFiles\pri.dir\main.cpp.s

CMakeFiles/pri.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/pri.dir/main.cpp.obj.requires

CMakeFiles/pri.dir/main.cpp.obj.provides: CMakeFiles/pri.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\pri.dir\build.make CMakeFiles/pri.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/pri.dir/main.cpp.obj.provides

CMakeFiles/pri.dir/main.cpp.obj.provides.build: CMakeFiles/pri.dir/main.cpp.obj


# Object files for target pri
pri_OBJECTS = \
"CMakeFiles/pri.dir/main.cpp.obj"

# External object files for target pri
pri_EXTERNAL_OBJECTS =

pri.exe: CMakeFiles/pri.dir/main.cpp.obj
pri.exe: CMakeFiles/pri.dir/build.make
pri.exe: CMakeFiles/pri.dir/linklibs.rsp
pri.exe: CMakeFiles/pri.dir/objects1.rsp
pri.exe: CMakeFiles/pri.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\YHK\CLionProjects\pri\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pri.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pri.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pri.dir/build: pri.exe

.PHONY : CMakeFiles/pri.dir/build

CMakeFiles/pri.dir/requires: CMakeFiles/pri.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/pri.dir/requires

CMakeFiles/pri.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pri.dir\cmake_clean.cmake
.PHONY : CMakeFiles/pri.dir/clean

CMakeFiles/pri.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\YHK\CLionProjects\pri C:\Users\YHK\CLionProjects\pri C:\Users\YHK\CLionProjects\pri\cmake-build-debug C:\Users\YHK\CLionProjects\pri\cmake-build-debug C:\Users\YHK\CLionProjects\pri\cmake-build-debug\CMakeFiles\pri.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pri.dir/depend

