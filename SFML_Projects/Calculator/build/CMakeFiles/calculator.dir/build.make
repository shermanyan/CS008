# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.25.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.25.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/shermanyan/CLionProjects/CS008/Calculator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/shermanyan/CLionProjects/CS008/Calculator/build

# Include any dependencies generated for this target.
include CMakeFiles/calculator.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/calculator.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/calculator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/calculator.dir/flags.make

CMakeFiles/calculator.dir/SFML_tools/Application.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/SFML_tools/Application.cpp.o: /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/Application.cpp
CMakeFiles/calculator.dir/SFML_tools/Application.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shermanyan/CLionProjects/CS008/Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/calculator.dir/SFML_tools/Application.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/SFML_tools/Application.cpp.o -MF CMakeFiles/calculator.dir/SFML_tools/Application.cpp.o.d -o CMakeFiles/calculator.dir/SFML_tools/Application.cpp.o -c /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/Application.cpp

CMakeFiles/calculator.dir/SFML_tools/Application.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/SFML_tools/Application.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/Application.cpp > CMakeFiles/calculator.dir/SFML_tools/Application.cpp.i

CMakeFiles/calculator.dir/SFML_tools/Application.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/SFML_tools/Application.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/Application.cpp -o CMakeFiles/calculator.dir/SFML_tools/Application.cpp.s

CMakeFiles/calculator.dir/SFML_tools/Fonts.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/SFML_tools/Fonts.cpp.o: /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/Fonts.cpp
CMakeFiles/calculator.dir/SFML_tools/Fonts.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shermanyan/CLionProjects/CS008/Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/calculator.dir/SFML_tools/Fonts.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/SFML_tools/Fonts.cpp.o -MF CMakeFiles/calculator.dir/SFML_tools/Fonts.cpp.o.d -o CMakeFiles/calculator.dir/SFML_tools/Fonts.cpp.o -c /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/Fonts.cpp

CMakeFiles/calculator.dir/SFML_tools/Fonts.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/SFML_tools/Fonts.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/Fonts.cpp > CMakeFiles/calculator.dir/SFML_tools/Fonts.cpp.i

CMakeFiles/calculator.dir/SFML_tools/Fonts.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/SFML_tools/Fonts.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/Fonts.cpp -o CMakeFiles/calculator.dir/SFML_tools/Fonts.cpp.s

CMakeFiles/calculator.dir/SFML_tools/MouseEvents.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/SFML_tools/MouseEvents.cpp.o: /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/MouseEvents.cpp
CMakeFiles/calculator.dir/SFML_tools/MouseEvents.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shermanyan/CLionProjects/CS008/Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/calculator.dir/SFML_tools/MouseEvents.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/SFML_tools/MouseEvents.cpp.o -MF CMakeFiles/calculator.dir/SFML_tools/MouseEvents.cpp.o.d -o CMakeFiles/calculator.dir/SFML_tools/MouseEvents.cpp.o -c /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/MouseEvents.cpp

CMakeFiles/calculator.dir/SFML_tools/MouseEvents.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/SFML_tools/MouseEvents.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/MouseEvents.cpp > CMakeFiles/calculator.dir/SFML_tools/MouseEvents.cpp.i

CMakeFiles/calculator.dir/SFML_tools/MouseEvents.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/SFML_tools/MouseEvents.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/MouseEvents.cpp -o CMakeFiles/calculator.dir/SFML_tools/MouseEvents.cpp.s

CMakeFiles/calculator.dir/SFML_tools/Position.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/SFML_tools/Position.cpp.o: /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/Position.cpp
CMakeFiles/calculator.dir/SFML_tools/Position.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shermanyan/CLionProjects/CS008/Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/calculator.dir/SFML_tools/Position.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/SFML_tools/Position.cpp.o -MF CMakeFiles/calculator.dir/SFML_tools/Position.cpp.o.d -o CMakeFiles/calculator.dir/SFML_tools/Position.cpp.o -c /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/Position.cpp

CMakeFiles/calculator.dir/SFML_tools/Position.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/SFML_tools/Position.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/Position.cpp > CMakeFiles/calculator.dir/SFML_tools/Position.cpp.i

CMakeFiles/calculator.dir/SFML_tools/Position.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/SFML_tools/Position.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/Position.cpp -o CMakeFiles/calculator.dir/SFML_tools/Position.cpp.s

CMakeFiles/calculator.dir/SFML_tools/SpriteImage.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/SFML_tools/SpriteImage.cpp.o: /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/SpriteImage.cpp
CMakeFiles/calculator.dir/SFML_tools/SpriteImage.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shermanyan/CLionProjects/CS008/Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/calculator.dir/SFML_tools/SpriteImage.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/SFML_tools/SpriteImage.cpp.o -MF CMakeFiles/calculator.dir/SFML_tools/SpriteImage.cpp.o.d -o CMakeFiles/calculator.dir/SFML_tools/SpriteImage.cpp.o -c /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/SpriteImage.cpp

CMakeFiles/calculator.dir/SFML_tools/SpriteImage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/SFML_tools/SpriteImage.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/SpriteImage.cpp > CMakeFiles/calculator.dir/SFML_tools/SpriteImage.cpp.i

CMakeFiles/calculator.dir/SFML_tools/SpriteImage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/SFML_tools/SpriteImage.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/SpriteImage.cpp -o CMakeFiles/calculator.dir/SFML_tools/SpriteImage.cpp.s

CMakeFiles/calculator.dir/Button.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/Button.cpp.o: /Users/shermanyan/CLionProjects/CS008/Calculator/Button.cpp
CMakeFiles/calculator.dir/Button.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shermanyan/CLionProjects/CS008/Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/calculator.dir/Button.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/Button.cpp.o -MF CMakeFiles/calculator.dir/Button.cpp.o.d -o CMakeFiles/calculator.dir/Button.cpp.o -c /Users/shermanyan/CLionProjects/CS008/Calculator/Button.cpp

CMakeFiles/calculator.dir/Button.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/Button.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shermanyan/CLionProjects/CS008/Calculator/Button.cpp > CMakeFiles/calculator.dir/Button.cpp.i

CMakeFiles/calculator.dir/Button.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/Button.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shermanyan/CLionProjects/CS008/Calculator/Button.cpp -o CMakeFiles/calculator.dir/Button.cpp.s

CMakeFiles/calculator.dir/Calculator.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/Calculator.cpp.o: /Users/shermanyan/CLionProjects/CS008/Calculator/Calculator.cpp
CMakeFiles/calculator.dir/Calculator.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shermanyan/CLionProjects/CS008/Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/calculator.dir/Calculator.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/Calculator.cpp.o -MF CMakeFiles/calculator.dir/Calculator.cpp.o.d -o CMakeFiles/calculator.dir/Calculator.cpp.o -c /Users/shermanyan/CLionProjects/CS008/Calculator/Calculator.cpp

CMakeFiles/calculator.dir/Calculator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/Calculator.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shermanyan/CLionProjects/CS008/Calculator/Calculator.cpp > CMakeFiles/calculator.dir/Calculator.cpp.i

CMakeFiles/calculator.dir/Calculator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/Calculator.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shermanyan/CLionProjects/CS008/Calculator/Calculator.cpp -o CMakeFiles/calculator.dir/Calculator.cpp.s

CMakeFiles/calculator.dir/main.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/main.cpp.o: /Users/shermanyan/CLionProjects/CS008/Calculator/main.cpp
CMakeFiles/calculator.dir/main.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shermanyan/CLionProjects/CS008/Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/calculator.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/main.cpp.o -MF CMakeFiles/calculator.dir/main.cpp.o.d -o CMakeFiles/calculator.dir/main.cpp.o -c /Users/shermanyan/CLionProjects/CS008/Calculator/main.cpp

CMakeFiles/calculator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shermanyan/CLionProjects/CS008/Calculator/main.cpp > CMakeFiles/calculator.dir/main.cpp.i

CMakeFiles/calculator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shermanyan/CLionProjects/CS008/Calculator/main.cpp -o CMakeFiles/calculator.dir/main.cpp.s

CMakeFiles/calculator.dir/Screen.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/Screen.cpp.o: /Users/shermanyan/CLionProjects/CS008/Calculator/Screen.cpp
CMakeFiles/calculator.dir/Screen.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shermanyan/CLionProjects/CS008/Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/calculator.dir/Screen.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/Screen.cpp.o -MF CMakeFiles/calculator.dir/Screen.cpp.o.d -o CMakeFiles/calculator.dir/Screen.cpp.o -c /Users/shermanyan/CLionProjects/CS008/Calculator/Screen.cpp

CMakeFiles/calculator.dir/Screen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/Screen.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shermanyan/CLionProjects/CS008/Calculator/Screen.cpp > CMakeFiles/calculator.dir/Screen.cpp.i

CMakeFiles/calculator.dir/Screen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/Screen.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shermanyan/CLionProjects/CS008/Calculator/Screen.cpp -o CMakeFiles/calculator.dir/Screen.cpp.s

CMakeFiles/calculator.dir/Helper.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/Helper.cpp.o: /Users/shermanyan/CLionProjects/CS008/Calculator/Helper.cpp
CMakeFiles/calculator.dir/Helper.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shermanyan/CLionProjects/CS008/Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/calculator.dir/Helper.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/Helper.cpp.o -MF CMakeFiles/calculator.dir/Helper.cpp.o.d -o CMakeFiles/calculator.dir/Helper.cpp.o -c /Users/shermanyan/CLionProjects/CS008/Calculator/Helper.cpp

CMakeFiles/calculator.dir/Helper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/Helper.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shermanyan/CLionProjects/CS008/Calculator/Helper.cpp > CMakeFiles/calculator.dir/Helper.cpp.i

CMakeFiles/calculator.dir/Helper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/Helper.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shermanyan/CLionProjects/CS008/Calculator/Helper.cpp -o CMakeFiles/calculator.dir/Helper.cpp.s

CMakeFiles/calculator.dir/SFML_tools/Shapes/Squircle.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/SFML_tools/Shapes/Squircle.cpp.o: /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/Shapes/Squircle.cpp
CMakeFiles/calculator.dir/SFML_tools/Shapes/Squircle.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shermanyan/CLionProjects/CS008/Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/calculator.dir/SFML_tools/Shapes/Squircle.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/SFML_tools/Shapes/Squircle.cpp.o -MF CMakeFiles/calculator.dir/SFML_tools/Shapes/Squircle.cpp.o.d -o CMakeFiles/calculator.dir/SFML_tools/Shapes/Squircle.cpp.o -c /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/Shapes/Squircle.cpp

CMakeFiles/calculator.dir/SFML_tools/Shapes/Squircle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/SFML_tools/Shapes/Squircle.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/Shapes/Squircle.cpp > CMakeFiles/calculator.dir/SFML_tools/Shapes/Squircle.cpp.i

CMakeFiles/calculator.dir/SFML_tools/Shapes/Squircle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/SFML_tools/Shapes/Squircle.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shermanyan/CLionProjects/CS008/Calculator/SFML_tools/Shapes/Squircle.cpp -o CMakeFiles/calculator.dir/SFML_tools/Shapes/Squircle.cpp.s

CMakeFiles/calculator.dir/ButtonColor.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/ButtonColor.cpp.o: /Users/shermanyan/CLionProjects/CS008/Calculator/ButtonColor.cpp
CMakeFiles/calculator.dir/ButtonColor.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shermanyan/CLionProjects/CS008/Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/calculator.dir/ButtonColor.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/ButtonColor.cpp.o -MF CMakeFiles/calculator.dir/ButtonColor.cpp.o.d -o CMakeFiles/calculator.dir/ButtonColor.cpp.o -c /Users/shermanyan/CLionProjects/CS008/Calculator/ButtonColor.cpp

CMakeFiles/calculator.dir/ButtonColor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/ButtonColor.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shermanyan/CLionProjects/CS008/Calculator/ButtonColor.cpp > CMakeFiles/calculator.dir/ButtonColor.cpp.i

CMakeFiles/calculator.dir/ButtonColor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/ButtonColor.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shermanyan/CLionProjects/CS008/Calculator/ButtonColor.cpp -o CMakeFiles/calculator.dir/ButtonColor.cpp.s

CMakeFiles/calculator.dir/RPN.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/RPN.cpp.o: /Users/shermanyan/CLionProjects/CS008/Calculator/RPN.cpp
CMakeFiles/calculator.dir/RPN.cpp.o: CMakeFiles/calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shermanyan/CLionProjects/CS008/Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/calculator.dir/RPN.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculator.dir/RPN.cpp.o -MF CMakeFiles/calculator.dir/RPN.cpp.o.d -o CMakeFiles/calculator.dir/RPN.cpp.o -c /Users/shermanyan/CLionProjects/CS008/Calculator/RPN.cpp

CMakeFiles/calculator.dir/RPN.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/RPN.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shermanyan/CLionProjects/CS008/Calculator/RPN.cpp > CMakeFiles/calculator.dir/RPN.cpp.i

CMakeFiles/calculator.dir/RPN.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/RPN.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shermanyan/CLionProjects/CS008/Calculator/RPN.cpp -o CMakeFiles/calculator.dir/RPN.cpp.s

# Object files for target calculator
calculator_OBJECTS = \
"CMakeFiles/calculator.dir/SFML_tools/Application.cpp.o" \
"CMakeFiles/calculator.dir/SFML_tools/Fonts.cpp.o" \
"CMakeFiles/calculator.dir/SFML_tools/MouseEvents.cpp.o" \
"CMakeFiles/calculator.dir/SFML_tools/Position.cpp.o" \
"CMakeFiles/calculator.dir/SFML_tools/SpriteImage.cpp.o" \
"CMakeFiles/calculator.dir/Button.cpp.o" \
"CMakeFiles/calculator.dir/Calculator.cpp.o" \
"CMakeFiles/calculator.dir/main.cpp.o" \
"CMakeFiles/calculator.dir/Screen.cpp.o" \
"CMakeFiles/calculator.dir/Helper.cpp.o" \
"CMakeFiles/calculator.dir/SFML_tools/Shapes/Squircle.cpp.o" \
"CMakeFiles/calculator.dir/ButtonColor.cpp.o" \
"CMakeFiles/calculator.dir/RPN.cpp.o"

# External object files for target calculator
calculator_EXTERNAL_OBJECTS =

calculator: CMakeFiles/calculator.dir/SFML_tools/Application.cpp.o
calculator: CMakeFiles/calculator.dir/SFML_tools/Fonts.cpp.o
calculator: CMakeFiles/calculator.dir/SFML_tools/MouseEvents.cpp.o
calculator: CMakeFiles/calculator.dir/SFML_tools/Position.cpp.o
calculator: CMakeFiles/calculator.dir/SFML_tools/SpriteImage.cpp.o
calculator: CMakeFiles/calculator.dir/Button.cpp.o
calculator: CMakeFiles/calculator.dir/Calculator.cpp.o
calculator: CMakeFiles/calculator.dir/main.cpp.o
calculator: CMakeFiles/calculator.dir/Screen.cpp.o
calculator: CMakeFiles/calculator.dir/Helper.cpp.o
calculator: CMakeFiles/calculator.dir/SFML_tools/Shapes/Squircle.cpp.o
calculator: CMakeFiles/calculator.dir/ButtonColor.cpp.o
calculator: CMakeFiles/calculator.dir/RPN.cpp.o
calculator: CMakeFiles/calculator.dir/build.make
calculator: /opt/homebrew/lib/libsfml-graphics.2.5.1.dylib
calculator: /opt/homebrew/lib/libsfml-window.2.5.1.dylib
calculator: /opt/homebrew/lib/libsfml-system.2.5.1.dylib
calculator: CMakeFiles/calculator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/shermanyan/CLionProjects/CS008/Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable calculator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calculator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/calculator.dir/build: calculator
.PHONY : CMakeFiles/calculator.dir/build

CMakeFiles/calculator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/calculator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/calculator.dir/clean

CMakeFiles/calculator.dir/depend:
	cd /Users/shermanyan/CLionProjects/CS008/Calculator/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/shermanyan/CLionProjects/CS008/Calculator /Users/shermanyan/CLionProjects/CS008/Calculator /Users/shermanyan/CLionProjects/CS008/Calculator/build /Users/shermanyan/CLionProjects/CS008/Calculator/build /Users/shermanyan/CLionProjects/CS008/Calculator/build/CMakeFiles/calculator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/calculator.dir/depend

