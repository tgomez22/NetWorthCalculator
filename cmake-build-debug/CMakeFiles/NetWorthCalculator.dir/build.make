# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/magos-gomez/clion-2020.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/magos-gomez/clion-2020.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/magos-gomez/CLionProjects/NetWorthCalculator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/magos-gomez/CLionProjects/NetWorthCalculator/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/NetWorthCalculator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/NetWorthCalculator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NetWorthCalculator.dir/flags.make

CMakeFiles/NetWorthCalculator.dir/main.cpp.o: CMakeFiles/NetWorthCalculator.dir/flags.make
CMakeFiles/NetWorthCalculator.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/magos-gomez/CLionProjects/NetWorthCalculator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/NetWorthCalculator.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NetWorthCalculator.dir/main.cpp.o -c /home/magos-gomez/CLionProjects/NetWorthCalculator/main.cpp

CMakeFiles/NetWorthCalculator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NetWorthCalculator.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/magos-gomez/CLionProjects/NetWorthCalculator/main.cpp > CMakeFiles/NetWorthCalculator.dir/main.cpp.i

CMakeFiles/NetWorthCalculator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NetWorthCalculator.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/magos-gomez/CLionProjects/NetWorthCalculator/main.cpp -o CMakeFiles/NetWorthCalculator.dir/main.cpp.s

CMakeFiles/NetWorthCalculator.dir/Person.cpp.o: CMakeFiles/NetWorthCalculator.dir/flags.make
CMakeFiles/NetWorthCalculator.dir/Person.cpp.o: ../Person.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/magos-gomez/CLionProjects/NetWorthCalculator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/NetWorthCalculator.dir/Person.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NetWorthCalculator.dir/Person.cpp.o -c /home/magos-gomez/CLionProjects/NetWorthCalculator/Person.cpp

CMakeFiles/NetWorthCalculator.dir/Person.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NetWorthCalculator.dir/Person.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/magos-gomez/CLionProjects/NetWorthCalculator/Person.cpp > CMakeFiles/NetWorthCalculator.dir/Person.cpp.i

CMakeFiles/NetWorthCalculator.dir/Person.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NetWorthCalculator.dir/Person.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/magos-gomez/CLionProjects/NetWorthCalculator/Person.cpp -o CMakeFiles/NetWorthCalculator.dir/Person.cpp.s

CMakeFiles/NetWorthCalculator.dir/Address.cpp.o: CMakeFiles/NetWorthCalculator.dir/flags.make
CMakeFiles/NetWorthCalculator.dir/Address.cpp.o: ../Address.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/magos-gomez/CLionProjects/NetWorthCalculator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/NetWorthCalculator.dir/Address.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NetWorthCalculator.dir/Address.cpp.o -c /home/magos-gomez/CLionProjects/NetWorthCalculator/Address.cpp

CMakeFiles/NetWorthCalculator.dir/Address.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NetWorthCalculator.dir/Address.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/magos-gomez/CLionProjects/NetWorthCalculator/Address.cpp > CMakeFiles/NetWorthCalculator.dir/Address.cpp.i

CMakeFiles/NetWorthCalculator.dir/Address.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NetWorthCalculator.dir/Address.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/magos-gomez/CLionProjects/NetWorthCalculator/Address.cpp -o CMakeFiles/NetWorthCalculator.dir/Address.cpp.s

# Object files for target NetWorthCalculator
NetWorthCalculator_OBJECTS = \
"CMakeFiles/NetWorthCalculator.dir/main.cpp.o" \
"CMakeFiles/NetWorthCalculator.dir/Person.cpp.o" \
"CMakeFiles/NetWorthCalculator.dir/Address.cpp.o"

# External object files for target NetWorthCalculator
NetWorthCalculator_EXTERNAL_OBJECTS =

NetWorthCalculator: CMakeFiles/NetWorthCalculator.dir/main.cpp.o
NetWorthCalculator: CMakeFiles/NetWorthCalculator.dir/Person.cpp.o
NetWorthCalculator: CMakeFiles/NetWorthCalculator.dir/Address.cpp.o
NetWorthCalculator: CMakeFiles/NetWorthCalculator.dir/build.make
NetWorthCalculator: CMakeFiles/NetWorthCalculator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/magos-gomez/CLionProjects/NetWorthCalculator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable NetWorthCalculator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NetWorthCalculator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NetWorthCalculator.dir/build: NetWorthCalculator

.PHONY : CMakeFiles/NetWorthCalculator.dir/build

CMakeFiles/NetWorthCalculator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NetWorthCalculator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NetWorthCalculator.dir/clean

CMakeFiles/NetWorthCalculator.dir/depend:
	cd /home/magos-gomez/CLionProjects/NetWorthCalculator/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/magos-gomez/CLionProjects/NetWorthCalculator /home/magos-gomez/CLionProjects/NetWorthCalculator /home/magos-gomez/CLionProjects/NetWorthCalculator/cmake-build-debug /home/magos-gomez/CLionProjects/NetWorthCalculator/cmake-build-debug /home/magos-gomez/CLionProjects/NetWorthCalculator/cmake-build-debug/CMakeFiles/NetWorthCalculator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NetWorthCalculator.dir/depend
