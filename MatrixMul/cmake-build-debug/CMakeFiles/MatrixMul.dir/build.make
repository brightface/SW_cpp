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
CMAKE_SOURCE_DIR = C:\Users\YHK\CLionProjects\MatrixMul

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\YHK\CLionProjects\MatrixMul\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MatrixMul.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MatrixMul.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MatrixMul.dir/flags.make

CMakeFiles/MatrixMul.dir/main.cpp.obj: CMakeFiles/MatrixMul.dir/flags.make
CMakeFiles/MatrixMul.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\YHK\CLionProjects\MatrixMul\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MatrixMul.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.1-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MatrixMul.dir\main.cpp.obj -c C:\Users\YHK\CLionProjects\MatrixMul\main.cpp

CMakeFiles/MatrixMul.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MatrixMul.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.1-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\YHK\CLionProjects\MatrixMul\main.cpp > CMakeFiles\MatrixMul.dir\main.cpp.i

CMakeFiles/MatrixMul.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MatrixMul.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.1-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\YHK\CLionProjects\MatrixMul\main.cpp -o CMakeFiles\MatrixMul.dir\main.cpp.s

CMakeFiles/MatrixMul.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/MatrixMul.dir/main.cpp.obj.requires

CMakeFiles/MatrixMul.dir/main.cpp.obj.provides: CMakeFiles/MatrixMul.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\MatrixMul.dir\build.make CMakeFiles/MatrixMul.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/MatrixMul.dir/main.cpp.obj.provides

CMakeFiles/MatrixMul.dir/main.cpp.obj.provides.build: CMakeFiles/MatrixMul.dir/main.cpp.obj


# Object files for target MatrixMul
MatrixMul_OBJECTS = \
"CMakeFiles/MatrixMul.dir/main.cpp.obj"

# External object files for target MatrixMul
MatrixMul_EXTERNAL_OBJECTS =

MatrixMul.exe: CMakeFiles/MatrixMul.dir/main.cpp.obj
MatrixMul.exe: CMakeFiles/MatrixMul.dir/build.make
MatrixMul.exe: CMakeFiles/MatrixMul.dir/linklibs.rsp
MatrixMul.exe: CMakeFiles/MatrixMul.dir/objects1.rsp
MatrixMul.exe: CMakeFiles/MatrixMul.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\YHK\CLionProjects\MatrixMul\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MatrixMul.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MatrixMul.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MatrixMul.dir/build: MatrixMul.exe

.PHONY : CMakeFiles/MatrixMul.dir/build

CMakeFiles/MatrixMul.dir/requires: CMakeFiles/MatrixMul.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/MatrixMul.dir/requires

CMakeFiles/MatrixMul.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MatrixMul.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MatrixMul.dir/clean

CMakeFiles/MatrixMul.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\YHK\CLionProjects\MatrixMul C:\Users\YHK\CLionProjects\MatrixMul C:\Users\YHK\CLionProjects\MatrixMul\cmake-build-debug C:\Users\YHK\CLionProjects\MatrixMul\cmake-build-debug C:\Users\YHK\CLionProjects\MatrixMul\cmake-build-debug\CMakeFiles\MatrixMul.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MatrixMul.dir/depend
