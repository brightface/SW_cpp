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
CMAKE_SOURCE_DIR = C:\Users\YHK\CLionProjects\sys

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\YHK\CLionProjects\sys\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sys.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sys.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sys.dir/flags.make

CMakeFiles/sys.dir/main.cpp.obj: CMakeFiles/sys.dir/flags.make
CMakeFiles/sys.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\YHK\CLionProjects\sys\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sys.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.1-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\sys.dir\main.cpp.obj -c C:\Users\YHK\CLionProjects\sys\main.cpp

CMakeFiles/sys.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sys.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.1-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\YHK\CLionProjects\sys\main.cpp > CMakeFiles\sys.dir\main.cpp.i

CMakeFiles/sys.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sys.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.1-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\YHK\CLionProjects\sys\main.cpp -o CMakeFiles\sys.dir\main.cpp.s

CMakeFiles/sys.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/sys.dir/main.cpp.obj.requires

CMakeFiles/sys.dir/main.cpp.obj.provides: CMakeFiles/sys.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\sys.dir\build.make CMakeFiles/sys.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/sys.dir/main.cpp.obj.provides

CMakeFiles/sys.dir/main.cpp.obj.provides.build: CMakeFiles/sys.dir/main.cpp.obj


CMakeFiles/sys.dir/main.c.obj: CMakeFiles/sys.dir/flags.make
CMakeFiles/sys.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\YHK\CLionProjects\sys\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/sys.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.1-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\sys.dir\main.c.obj   -c C:\Users\YHK\CLionProjects\sys\main.c

CMakeFiles/sys.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sys.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.1-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\YHK\CLionProjects\sys\main.c > CMakeFiles\sys.dir\main.c.i

CMakeFiles/sys.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sys.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.1-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\YHK\CLionProjects\sys\main.c -o CMakeFiles\sys.dir\main.c.s

CMakeFiles/sys.dir/main.c.obj.requires:

.PHONY : CMakeFiles/sys.dir/main.c.obj.requires

CMakeFiles/sys.dir/main.c.obj.provides: CMakeFiles/sys.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\sys.dir\build.make CMakeFiles/sys.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/sys.dir/main.c.obj.provides

CMakeFiles/sys.dir/main.c.obj.provides.build: CMakeFiles/sys.dir/main.c.obj


CMakeFiles/sys.dir/main2.c.obj: CMakeFiles/sys.dir/flags.make
CMakeFiles/sys.dir/main2.c.obj: ../main2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\YHK\CLionProjects\sys\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/sys.dir/main2.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.1-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\sys.dir\main2.c.obj   -c C:\Users\YHK\CLionProjects\sys\main2.c

CMakeFiles/sys.dir/main2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sys.dir/main2.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.1-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\YHK\CLionProjects\sys\main2.c > CMakeFiles\sys.dir\main2.c.i

CMakeFiles/sys.dir/main2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sys.dir/main2.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.1-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\YHK\CLionProjects\sys\main2.c -o CMakeFiles\sys.dir\main2.c.s

CMakeFiles/sys.dir/main2.c.obj.requires:

.PHONY : CMakeFiles/sys.dir/main2.c.obj.requires

CMakeFiles/sys.dir/main2.c.obj.provides: CMakeFiles/sys.dir/main2.c.obj.requires
	$(MAKE) -f CMakeFiles\sys.dir\build.make CMakeFiles/sys.dir/main2.c.obj.provides.build
.PHONY : CMakeFiles/sys.dir/main2.c.obj.provides

CMakeFiles/sys.dir/main2.c.obj.provides.build: CMakeFiles/sys.dir/main2.c.obj


# Object files for target sys
sys_OBJECTS = \
"CMakeFiles/sys.dir/main.cpp.obj" \
"CMakeFiles/sys.dir/main.c.obj" \
"CMakeFiles/sys.dir/main2.c.obj"

# External object files for target sys
sys_EXTERNAL_OBJECTS =

sys.exe: CMakeFiles/sys.dir/main.cpp.obj
sys.exe: CMakeFiles/sys.dir/main.c.obj
sys.exe: CMakeFiles/sys.dir/main2.c.obj
sys.exe: CMakeFiles/sys.dir/build.make
sys.exe: CMakeFiles/sys.dir/linklibs.rsp
sys.exe: CMakeFiles/sys.dir/objects1.rsp
sys.exe: CMakeFiles/sys.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\YHK\CLionProjects\sys\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable sys.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sys.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sys.dir/build: sys.exe

.PHONY : CMakeFiles/sys.dir/build

CMakeFiles/sys.dir/requires: CMakeFiles/sys.dir/main.cpp.obj.requires
CMakeFiles/sys.dir/requires: CMakeFiles/sys.dir/main.c.obj.requires
CMakeFiles/sys.dir/requires: CMakeFiles/sys.dir/main2.c.obj.requires

.PHONY : CMakeFiles/sys.dir/requires

CMakeFiles/sys.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sys.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sys.dir/clean

CMakeFiles/sys.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\YHK\CLionProjects\sys C:\Users\YHK\CLionProjects\sys C:\Users\YHK\CLionProjects\sys\cmake-build-debug C:\Users\YHK\CLionProjects\sys\cmake-build-debug C:\Users\YHK\CLionProjects\sys\cmake-build-debug\CMakeFiles\sys.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sys.dir/depend
