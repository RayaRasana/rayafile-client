# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chuck/Downloads/rayafile/seafile-client

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chuck/Downloads/rayafile/seafile-client

# Include any dependencies generated for this target.
include CMakeFiles/utils.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/utils.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/utils.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/utils.dir/flags.make

CMakeFiles/utils.dir/src/utils/utils.cpp.o: CMakeFiles/utils.dir/flags.make
CMakeFiles/utils.dir/src/utils/utils.cpp.o: src/utils/utils.cpp
CMakeFiles/utils.dir/src/utils/utils.cpp.o: CMakeFiles/utils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chuck/Downloads/rayafile/seafile-client/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/utils.dir/src/utils/utils.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/utils.dir/src/utils/utils.cpp.o -MF CMakeFiles/utils.dir/src/utils/utils.cpp.o.d -o CMakeFiles/utils.dir/src/utils/utils.cpp.o -c /home/chuck/Downloads/rayafile/seafile-client/src/utils/utils.cpp

CMakeFiles/utils.dir/src/utils/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utils.dir/src/utils/utils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chuck/Downloads/rayafile/seafile-client/src/utils/utils.cpp > CMakeFiles/utils.dir/src/utils/utils.cpp.i

CMakeFiles/utils.dir/src/utils/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utils.dir/src/utils/utils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chuck/Downloads/rayafile/seafile-client/src/utils/utils.cpp -o CMakeFiles/utils.dir/src/utils/utils.cpp.s

CMakeFiles/utils.dir/src/utils/rsa.cpp.o: CMakeFiles/utils.dir/flags.make
CMakeFiles/utils.dir/src/utils/rsa.cpp.o: src/utils/rsa.cpp
CMakeFiles/utils.dir/src/utils/rsa.cpp.o: CMakeFiles/utils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chuck/Downloads/rayafile/seafile-client/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/utils.dir/src/utils/rsa.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/utils.dir/src/utils/rsa.cpp.o -MF CMakeFiles/utils.dir/src/utils/rsa.cpp.o.d -o CMakeFiles/utils.dir/src/utils/rsa.cpp.o -c /home/chuck/Downloads/rayafile/seafile-client/src/utils/rsa.cpp

CMakeFiles/utils.dir/src/utils/rsa.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utils.dir/src/utils/rsa.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chuck/Downloads/rayafile/seafile-client/src/utils/rsa.cpp > CMakeFiles/utils.dir/src/utils/rsa.cpp.i

CMakeFiles/utils.dir/src/utils/rsa.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utils.dir/src/utils/rsa.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chuck/Downloads/rayafile/seafile-client/src/utils/rsa.cpp -o CMakeFiles/utils.dir/src/utils/rsa.cpp.s

CMakeFiles/utils.dir/src/utils/api-utils.cpp.o: CMakeFiles/utils.dir/flags.make
CMakeFiles/utils.dir/src/utils/api-utils.cpp.o: src/utils/api-utils.cpp
CMakeFiles/utils.dir/src/utils/api-utils.cpp.o: CMakeFiles/utils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chuck/Downloads/rayafile/seafile-client/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/utils.dir/src/utils/api-utils.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/utils.dir/src/utils/api-utils.cpp.o -MF CMakeFiles/utils.dir/src/utils/api-utils.cpp.o.d -o CMakeFiles/utils.dir/src/utils/api-utils.cpp.o -c /home/chuck/Downloads/rayafile/seafile-client/src/utils/api-utils.cpp

CMakeFiles/utils.dir/src/utils/api-utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utils.dir/src/utils/api-utils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chuck/Downloads/rayafile/seafile-client/src/utils/api-utils.cpp > CMakeFiles/utils.dir/src/utils/api-utils.cpp.i

CMakeFiles/utils.dir/src/utils/api-utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utils.dir/src/utils/api-utils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chuck/Downloads/rayafile/seafile-client/src/utils/api-utils.cpp -o CMakeFiles/utils.dir/src/utils/api-utils.cpp.s

CMakeFiles/utils.dir/src/utils/paint-utils.cpp.o: CMakeFiles/utils.dir/flags.make
CMakeFiles/utils.dir/src/utils/paint-utils.cpp.o: src/utils/paint-utils.cpp
CMakeFiles/utils.dir/src/utils/paint-utils.cpp.o: CMakeFiles/utils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chuck/Downloads/rayafile/seafile-client/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/utils.dir/src/utils/paint-utils.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/utils.dir/src/utils/paint-utils.cpp.o -MF CMakeFiles/utils.dir/src/utils/paint-utils.cpp.o.d -o CMakeFiles/utils.dir/src/utils/paint-utils.cpp.o -c /home/chuck/Downloads/rayafile/seafile-client/src/utils/paint-utils.cpp

CMakeFiles/utils.dir/src/utils/paint-utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utils.dir/src/utils/paint-utils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chuck/Downloads/rayafile/seafile-client/src/utils/paint-utils.cpp > CMakeFiles/utils.dir/src/utils/paint-utils.cpp.i

CMakeFiles/utils.dir/src/utils/paint-utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utils.dir/src/utils/paint-utils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chuck/Downloads/rayafile/seafile-client/src/utils/paint-utils.cpp -o CMakeFiles/utils.dir/src/utils/paint-utils.cpp.s

CMakeFiles/utils.dir/src/utils/file-utils.cpp.o: CMakeFiles/utils.dir/flags.make
CMakeFiles/utils.dir/src/utils/file-utils.cpp.o: src/utils/file-utils.cpp
CMakeFiles/utils.dir/src/utils/file-utils.cpp.o: CMakeFiles/utils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chuck/Downloads/rayafile/seafile-client/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/utils.dir/src/utils/file-utils.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/utils.dir/src/utils/file-utils.cpp.o -MF CMakeFiles/utils.dir/src/utils/file-utils.cpp.o.d -o CMakeFiles/utils.dir/src/utils/file-utils.cpp.o -c /home/chuck/Downloads/rayafile/seafile-client/src/utils/file-utils.cpp

CMakeFiles/utils.dir/src/utils/file-utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utils.dir/src/utils/file-utils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chuck/Downloads/rayafile/seafile-client/src/utils/file-utils.cpp > CMakeFiles/utils.dir/src/utils/file-utils.cpp.i

CMakeFiles/utils.dir/src/utils/file-utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utils.dir/src/utils/file-utils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chuck/Downloads/rayafile/seafile-client/src/utils/file-utils.cpp -o CMakeFiles/utils.dir/src/utils/file-utils.cpp.s

CMakeFiles/utils.dir/src/utils/translate-commit-desc.cpp.o: CMakeFiles/utils.dir/flags.make
CMakeFiles/utils.dir/src/utils/translate-commit-desc.cpp.o: src/utils/translate-commit-desc.cpp
CMakeFiles/utils.dir/src/utils/translate-commit-desc.cpp.o: CMakeFiles/utils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chuck/Downloads/rayafile/seafile-client/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/utils.dir/src/utils/translate-commit-desc.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/utils.dir/src/utils/translate-commit-desc.cpp.o -MF CMakeFiles/utils.dir/src/utils/translate-commit-desc.cpp.o.d -o CMakeFiles/utils.dir/src/utils/translate-commit-desc.cpp.o -c /home/chuck/Downloads/rayafile/seafile-client/src/utils/translate-commit-desc.cpp

CMakeFiles/utils.dir/src/utils/translate-commit-desc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utils.dir/src/utils/translate-commit-desc.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chuck/Downloads/rayafile/seafile-client/src/utils/translate-commit-desc.cpp > CMakeFiles/utils.dir/src/utils/translate-commit-desc.cpp.i

CMakeFiles/utils.dir/src/utils/translate-commit-desc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utils.dir/src/utils/translate-commit-desc.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chuck/Downloads/rayafile/seafile-client/src/utils/translate-commit-desc.cpp -o CMakeFiles/utils.dir/src/utils/translate-commit-desc.cpp.s

CMakeFiles/utils.dir/src/utils/json-utils.cpp.o: CMakeFiles/utils.dir/flags.make
CMakeFiles/utils.dir/src/utils/json-utils.cpp.o: src/utils/json-utils.cpp
CMakeFiles/utils.dir/src/utils/json-utils.cpp.o: CMakeFiles/utils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chuck/Downloads/rayafile/seafile-client/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/utils.dir/src/utils/json-utils.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/utils.dir/src/utils/json-utils.cpp.o -MF CMakeFiles/utils.dir/src/utils/json-utils.cpp.o.d -o CMakeFiles/utils.dir/src/utils/json-utils.cpp.o -c /home/chuck/Downloads/rayafile/seafile-client/src/utils/json-utils.cpp

CMakeFiles/utils.dir/src/utils/json-utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utils.dir/src/utils/json-utils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chuck/Downloads/rayafile/seafile-client/src/utils/json-utils.cpp > CMakeFiles/utils.dir/src/utils/json-utils.cpp.i

CMakeFiles/utils.dir/src/utils/json-utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utils.dir/src/utils/json-utils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chuck/Downloads/rayafile/seafile-client/src/utils/json-utils.cpp -o CMakeFiles/utils.dir/src/utils/json-utils.cpp.s

CMakeFiles/utils.dir/src/utils/log.c.o: CMakeFiles/utils.dir/flags.make
CMakeFiles/utils.dir/src/utils/log.c.o: src/utils/log.c
CMakeFiles/utils.dir/src/utils/log.c.o: CMakeFiles/utils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chuck/Downloads/rayafile/seafile-client/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/utils.dir/src/utils/log.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/utils.dir/src/utils/log.c.o -MF CMakeFiles/utils.dir/src/utils/log.c.o.d -o CMakeFiles/utils.dir/src/utils/log.c.o -c /home/chuck/Downloads/rayafile/seafile-client/src/utils/log.c

CMakeFiles/utils.dir/src/utils/log.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/utils.dir/src/utils/log.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/chuck/Downloads/rayafile/seafile-client/src/utils/log.c > CMakeFiles/utils.dir/src/utils/log.c.i

CMakeFiles/utils.dir/src/utils/log.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/utils.dir/src/utils/log.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/chuck/Downloads/rayafile/seafile-client/src/utils/log.c -o CMakeFiles/utils.dir/src/utils/log.c.s

CMakeFiles/utils.dir/src/utils/stl.cpp.o: CMakeFiles/utils.dir/flags.make
CMakeFiles/utils.dir/src/utils/stl.cpp.o: src/utils/stl.cpp
CMakeFiles/utils.dir/src/utils/stl.cpp.o: CMakeFiles/utils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chuck/Downloads/rayafile/seafile-client/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/utils.dir/src/utils/stl.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/utils.dir/src/utils/stl.cpp.o -MF CMakeFiles/utils.dir/src/utils/stl.cpp.o.d -o CMakeFiles/utils.dir/src/utils/stl.cpp.o -c /home/chuck/Downloads/rayafile/seafile-client/src/utils/stl.cpp

CMakeFiles/utils.dir/src/utils/stl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utils.dir/src/utils/stl.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chuck/Downloads/rayafile/seafile-client/src/utils/stl.cpp > CMakeFiles/utils.dir/src/utils/stl.cpp.i

CMakeFiles/utils.dir/src/utils/stl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utils.dir/src/utils/stl.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chuck/Downloads/rayafile/seafile-client/src/utils/stl.cpp -o CMakeFiles/utils.dir/src/utils/stl.cpp.s

CMakeFiles/utils.dir/src/utils/seafile-error.cpp.o: CMakeFiles/utils.dir/flags.make
CMakeFiles/utils.dir/src/utils/seafile-error.cpp.o: src/utils/seafile-error.cpp
CMakeFiles/utils.dir/src/utils/seafile-error.cpp.o: CMakeFiles/utils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chuck/Downloads/rayafile/seafile-client/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/utils.dir/src/utils/seafile-error.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/utils.dir/src/utils/seafile-error.cpp.o -MF CMakeFiles/utils.dir/src/utils/seafile-error.cpp.o.d -o CMakeFiles/utils.dir/src/utils/seafile-error.cpp.o -c /home/chuck/Downloads/rayafile/seafile-client/src/utils/seafile-error.cpp

CMakeFiles/utils.dir/src/utils/seafile-error.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utils.dir/src/utils/seafile-error.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chuck/Downloads/rayafile/seafile-client/src/utils/seafile-error.cpp > CMakeFiles/utils.dir/src/utils/seafile-error.cpp.i

CMakeFiles/utils.dir/src/utils/seafile-error.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utils.dir/src/utils/seafile-error.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chuck/Downloads/rayafile/seafile-client/src/utils/seafile-error.cpp -o CMakeFiles/utils.dir/src/utils/seafile-error.cpp.s

CMakeFiles/utils.dir/src/utils/process-linux.cpp.o: CMakeFiles/utils.dir/flags.make
CMakeFiles/utils.dir/src/utils/process-linux.cpp.o: src/utils/process-linux.cpp
CMakeFiles/utils.dir/src/utils/process-linux.cpp.o: CMakeFiles/utils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chuck/Downloads/rayafile/seafile-client/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/utils.dir/src/utils/process-linux.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/utils.dir/src/utils/process-linux.cpp.o -MF CMakeFiles/utils.dir/src/utils/process-linux.cpp.o.d -o CMakeFiles/utils.dir/src/utils/process-linux.cpp.o -c /home/chuck/Downloads/rayafile/seafile-client/src/utils/process-linux.cpp

CMakeFiles/utils.dir/src/utils/process-linux.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utils.dir/src/utils/process-linux.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chuck/Downloads/rayafile/seafile-client/src/utils/process-linux.cpp > CMakeFiles/utils.dir/src/utils/process-linux.cpp.i

CMakeFiles/utils.dir/src/utils/process-linux.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utils.dir/src/utils/process-linux.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chuck/Downloads/rayafile/seafile-client/src/utils/process-linux.cpp -o CMakeFiles/utils.dir/src/utils/process-linux.cpp.s

# Object files for target utils
utils_OBJECTS = \
"CMakeFiles/utils.dir/src/utils/utils.cpp.o" \
"CMakeFiles/utils.dir/src/utils/rsa.cpp.o" \
"CMakeFiles/utils.dir/src/utils/api-utils.cpp.o" \
"CMakeFiles/utils.dir/src/utils/paint-utils.cpp.o" \
"CMakeFiles/utils.dir/src/utils/file-utils.cpp.o" \
"CMakeFiles/utils.dir/src/utils/translate-commit-desc.cpp.o" \
"CMakeFiles/utils.dir/src/utils/json-utils.cpp.o" \
"CMakeFiles/utils.dir/src/utils/log.c.o" \
"CMakeFiles/utils.dir/src/utils/stl.cpp.o" \
"CMakeFiles/utils.dir/src/utils/seafile-error.cpp.o" \
"CMakeFiles/utils.dir/src/utils/process-linux.cpp.o"

# External object files for target utils
utils_EXTERNAL_OBJECTS =

libutils.a: CMakeFiles/utils.dir/src/utils/utils.cpp.o
libutils.a: CMakeFiles/utils.dir/src/utils/rsa.cpp.o
libutils.a: CMakeFiles/utils.dir/src/utils/api-utils.cpp.o
libutils.a: CMakeFiles/utils.dir/src/utils/paint-utils.cpp.o
libutils.a: CMakeFiles/utils.dir/src/utils/file-utils.cpp.o
libutils.a: CMakeFiles/utils.dir/src/utils/translate-commit-desc.cpp.o
libutils.a: CMakeFiles/utils.dir/src/utils/json-utils.cpp.o
libutils.a: CMakeFiles/utils.dir/src/utils/log.c.o
libutils.a: CMakeFiles/utils.dir/src/utils/stl.cpp.o
libutils.a: CMakeFiles/utils.dir/src/utils/seafile-error.cpp.o
libutils.a: CMakeFiles/utils.dir/src/utils/process-linux.cpp.o
libutils.a: CMakeFiles/utils.dir/build.make
libutils.a: CMakeFiles/utils.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chuck/Downloads/rayafile/seafile-client/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX static library libutils.a"
	$(CMAKE_COMMAND) -P CMakeFiles/utils.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/utils.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/utils.dir/build: libutils.a
.PHONY : CMakeFiles/utils.dir/build

CMakeFiles/utils.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/utils.dir/cmake_clean.cmake
.PHONY : CMakeFiles/utils.dir/clean

CMakeFiles/utils.dir/depend:
	cd /home/chuck/Downloads/rayafile/seafile-client && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chuck/Downloads/rayafile/seafile-client /home/chuck/Downloads/rayafile/seafile-client /home/chuck/Downloads/rayafile/seafile-client /home/chuck/Downloads/rayafile/seafile-client /home/chuck/Downloads/rayafile/seafile-client/CMakeFiles/utils.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/utils.dir/depend

