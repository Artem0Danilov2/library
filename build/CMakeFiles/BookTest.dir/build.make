# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/daniil/Desktop/New_Daniil

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/daniil/Desktop/New_Daniil/build

# Include any dependencies generated for this target.
include CMakeFiles/BookTest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/BookTest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/BookTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BookTest.dir/flags.make

CMakeFiles/BookTest.dir/Book.cpp.o: CMakeFiles/BookTest.dir/flags.make
CMakeFiles/BookTest.dir/Book.cpp.o: /home/daniil/Desktop/New_Daniil/Book.cpp
CMakeFiles/BookTest.dir/Book.cpp.o: CMakeFiles/BookTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/daniil/Desktop/New_Daniil/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BookTest.dir/Book.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BookTest.dir/Book.cpp.o -MF CMakeFiles/BookTest.dir/Book.cpp.o.d -o CMakeFiles/BookTest.dir/Book.cpp.o -c /home/daniil/Desktop/New_Daniil/Book.cpp

CMakeFiles/BookTest.dir/Book.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/BookTest.dir/Book.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/daniil/Desktop/New_Daniil/Book.cpp > CMakeFiles/BookTest.dir/Book.cpp.i

CMakeFiles/BookTest.dir/Book.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/BookTest.dir/Book.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/daniil/Desktop/New_Daniil/Book.cpp -o CMakeFiles/BookTest.dir/Book.cpp.s

CMakeFiles/BookTest.dir/gtest.cpp.o: CMakeFiles/BookTest.dir/flags.make
CMakeFiles/BookTest.dir/gtest.cpp.o: /home/daniil/Desktop/New_Daniil/gtest.cpp
CMakeFiles/BookTest.dir/gtest.cpp.o: CMakeFiles/BookTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/daniil/Desktop/New_Daniil/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/BookTest.dir/gtest.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BookTest.dir/gtest.cpp.o -MF CMakeFiles/BookTest.dir/gtest.cpp.o.d -o CMakeFiles/BookTest.dir/gtest.cpp.o -c /home/daniil/Desktop/New_Daniil/gtest.cpp

CMakeFiles/BookTest.dir/gtest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/BookTest.dir/gtest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/daniil/Desktop/New_Daniil/gtest.cpp > CMakeFiles/BookTest.dir/gtest.cpp.i

CMakeFiles/BookTest.dir/gtest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/BookTest.dir/gtest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/daniil/Desktop/New_Daniil/gtest.cpp -o CMakeFiles/BookTest.dir/gtest.cpp.s

# Object files for target BookTest
BookTest_OBJECTS = \
"CMakeFiles/BookTest.dir/Book.cpp.o" \
"CMakeFiles/BookTest.dir/gtest.cpp.o"

# External object files for target BookTest
BookTest_EXTERNAL_OBJECTS =

BookTest: CMakeFiles/BookTest.dir/Book.cpp.o
BookTest: CMakeFiles/BookTest.dir/gtest.cpp.o
BookTest: CMakeFiles/BookTest.dir/build.make
BookTest: /usr/lib/x86_64-linux-gnu/libgtest_main.a
BookTest: /usr/lib/x86_64-linux-gnu/libgtest.a
BookTest: CMakeFiles/BookTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/daniil/Desktop/New_Daniil/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable BookTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BookTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BookTest.dir/build: BookTest
.PHONY : CMakeFiles/BookTest.dir/build

CMakeFiles/BookTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BookTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BookTest.dir/clean

CMakeFiles/BookTest.dir/depend:
	cd /home/daniil/Desktop/New_Daniil/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/daniil/Desktop/New_Daniil /home/daniil/Desktop/New_Daniil /home/daniil/Desktop/New_Daniil/build /home/daniil/Desktop/New_Daniil/build /home/daniil/Desktop/New_Daniil/build/CMakeFiles/BookTest.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/BookTest.dir/depend
