# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\karee\Desktop\coding\C\Data structutres\Array Stack"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\karee\Desktop\coding\C\Data structutres\Array Stack\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Array_Stack.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Array_Stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Array_Stack.dir/flags.make

CMakeFiles/Array_Stack.dir/main.c.obj: CMakeFiles/Array_Stack.dir/flags.make
CMakeFiles/Array_Stack.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\karee\Desktop\coding\C\Data structutres\Array Stack\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Array_Stack.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Array_Stack.dir\main.c.obj -c "C:\Users\karee\Desktop\coding\C\Data structutres\Array Stack\main.c"

CMakeFiles/Array_Stack.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Array_Stack.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\karee\Desktop\coding\C\Data structutres\Array Stack\main.c" > CMakeFiles\Array_Stack.dir\main.c.i

CMakeFiles/Array_Stack.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Array_Stack.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\karee\Desktop\coding\C\Data structutres\Array Stack\main.c" -o CMakeFiles\Array_Stack.dir\main.c.s

CMakeFiles/Array_Stack.dir/Stack.c.obj: CMakeFiles/Array_Stack.dir/flags.make
CMakeFiles/Array_Stack.dir/Stack.c.obj: ../Stack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\karee\Desktop\coding\C\Data structutres\Array Stack\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Array_Stack.dir/Stack.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Array_Stack.dir\Stack.c.obj -c "C:\Users\karee\Desktop\coding\C\Data structutres\Array Stack\Stack.c"

CMakeFiles/Array_Stack.dir/Stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Array_Stack.dir/Stack.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\karee\Desktop\coding\C\Data structutres\Array Stack\Stack.c" > CMakeFiles\Array_Stack.dir\Stack.c.i

CMakeFiles/Array_Stack.dir/Stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Array_Stack.dir/Stack.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\karee\Desktop\coding\C\Data structutres\Array Stack\Stack.c" -o CMakeFiles\Array_Stack.dir\Stack.c.s

# Object files for target Array_Stack
Array_Stack_OBJECTS = \
"CMakeFiles/Array_Stack.dir/main.c.obj" \
"CMakeFiles/Array_Stack.dir/Stack.c.obj"

# External object files for target Array_Stack
Array_Stack_EXTERNAL_OBJECTS =

Array_Stack.exe: CMakeFiles/Array_Stack.dir/main.c.obj
Array_Stack.exe: CMakeFiles/Array_Stack.dir/Stack.c.obj
Array_Stack.exe: CMakeFiles/Array_Stack.dir/build.make
Array_Stack.exe: CMakeFiles/Array_Stack.dir/linklibs.rsp
Array_Stack.exe: CMakeFiles/Array_Stack.dir/objects1.rsp
Array_Stack.exe: CMakeFiles/Array_Stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\karee\Desktop\coding\C\Data structutres\Array Stack\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Array_Stack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Array_Stack.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Array_Stack.dir/build: Array_Stack.exe
.PHONY : CMakeFiles/Array_Stack.dir/build

CMakeFiles/Array_Stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Array_Stack.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Array_Stack.dir/clean

CMakeFiles/Array_Stack.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\karee\Desktop\coding\C\Data structutres\Array Stack" "C:\Users\karee\Desktop\coding\C\Data structutres\Array Stack" "C:\Users\karee\Desktop\coding\C\Data structutres\Array Stack\cmake-build-debug" "C:\Users\karee\Desktop\coding\C\Data structutres\Array Stack\cmake-build-debug" "C:\Users\karee\Desktop\coding\C\Data structutres\Array Stack\cmake-build-debug\CMakeFiles\Array_Stack.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Array_Stack.dir/depend

