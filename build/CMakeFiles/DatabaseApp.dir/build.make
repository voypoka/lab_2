# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.30.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.30.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/pavelstarostin/Source/Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/pavelstarostin/Source/Project/build

# Include any dependencies generated for this target.
include CMakeFiles/DatabaseApp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/DatabaseApp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/DatabaseApp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DatabaseApp.dir/flags.make

DatabaseApp_autogen/timestamp: /opt/homebrew/share/qt/libexec/moc
DatabaseApp_autogen/timestamp: /opt/homebrew/share/qt/libexec/uic
DatabaseApp_autogen/timestamp: CMakeFiles/DatabaseApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/pavelstarostin/Source/Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target DatabaseApp"
	/opt/homebrew/Cellar/cmake/3.30.3/bin/cmake -E cmake_autogen /Users/pavelstarostin/Source/Project/build/CMakeFiles/DatabaseApp_autogen.dir/AutogenInfo.json Debug
	/opt/homebrew/Cellar/cmake/3.30.3/bin/cmake -E touch /Users/pavelstarostin/Source/Project/build/DatabaseApp_autogen/timestamp

CMakeFiles/DatabaseApp.dir/DatabaseApp_autogen/mocs_compilation.cpp.o: CMakeFiles/DatabaseApp.dir/flags.make
CMakeFiles/DatabaseApp.dir/DatabaseApp_autogen/mocs_compilation.cpp.o: DatabaseApp_autogen/mocs_compilation.cpp
CMakeFiles/DatabaseApp.dir/DatabaseApp_autogen/mocs_compilation.cpp.o: CMakeFiles/DatabaseApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/pavelstarostin/Source/Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/DatabaseApp.dir/DatabaseApp_autogen/mocs_compilation.cpp.o"
	/opt/homebrew/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DatabaseApp.dir/DatabaseApp_autogen/mocs_compilation.cpp.o -MF CMakeFiles/DatabaseApp.dir/DatabaseApp_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/DatabaseApp.dir/DatabaseApp_autogen/mocs_compilation.cpp.o -c /Users/pavelstarostin/Source/Project/build/DatabaseApp_autogen/mocs_compilation.cpp

CMakeFiles/DatabaseApp.dir/DatabaseApp_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DatabaseApp.dir/DatabaseApp_autogen/mocs_compilation.cpp.i"
	/opt/homebrew/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pavelstarostin/Source/Project/build/DatabaseApp_autogen/mocs_compilation.cpp > CMakeFiles/DatabaseApp.dir/DatabaseApp_autogen/mocs_compilation.cpp.i

CMakeFiles/DatabaseApp.dir/DatabaseApp_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DatabaseApp.dir/DatabaseApp_autogen/mocs_compilation.cpp.s"
	/opt/homebrew/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pavelstarostin/Source/Project/build/DatabaseApp_autogen/mocs_compilation.cpp -o CMakeFiles/DatabaseApp.dir/DatabaseApp_autogen/mocs_compilation.cpp.s

CMakeFiles/DatabaseApp.dir/src/main.cpp.o: CMakeFiles/DatabaseApp.dir/flags.make
CMakeFiles/DatabaseApp.dir/src/main.cpp.o: /Users/pavelstarostin/Source/Project/src/main.cpp
CMakeFiles/DatabaseApp.dir/src/main.cpp.o: CMakeFiles/DatabaseApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/pavelstarostin/Source/Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/DatabaseApp.dir/src/main.cpp.o"
	/opt/homebrew/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DatabaseApp.dir/src/main.cpp.o -MF CMakeFiles/DatabaseApp.dir/src/main.cpp.o.d -o CMakeFiles/DatabaseApp.dir/src/main.cpp.o -c /Users/pavelstarostin/Source/Project/src/main.cpp

CMakeFiles/DatabaseApp.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DatabaseApp.dir/src/main.cpp.i"
	/opt/homebrew/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pavelstarostin/Source/Project/src/main.cpp > CMakeFiles/DatabaseApp.dir/src/main.cpp.i

CMakeFiles/DatabaseApp.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DatabaseApp.dir/src/main.cpp.s"
	/opt/homebrew/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pavelstarostin/Source/Project/src/main.cpp -o CMakeFiles/DatabaseApp.dir/src/main.cpp.s

CMakeFiles/DatabaseApp.dir/src/MainWindow.cpp.o: CMakeFiles/DatabaseApp.dir/flags.make
CMakeFiles/DatabaseApp.dir/src/MainWindow.cpp.o: /Users/pavelstarostin/Source/Project/src/MainWindow.cpp
CMakeFiles/DatabaseApp.dir/src/MainWindow.cpp.o: CMakeFiles/DatabaseApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/pavelstarostin/Source/Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/DatabaseApp.dir/src/MainWindow.cpp.o"
	/opt/homebrew/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DatabaseApp.dir/src/MainWindow.cpp.o -MF CMakeFiles/DatabaseApp.dir/src/MainWindow.cpp.o.d -o CMakeFiles/DatabaseApp.dir/src/MainWindow.cpp.o -c /Users/pavelstarostin/Source/Project/src/MainWindow.cpp

CMakeFiles/DatabaseApp.dir/src/MainWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DatabaseApp.dir/src/MainWindow.cpp.i"
	/opt/homebrew/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pavelstarostin/Source/Project/src/MainWindow.cpp > CMakeFiles/DatabaseApp.dir/src/MainWindow.cpp.i

CMakeFiles/DatabaseApp.dir/src/MainWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DatabaseApp.dir/src/MainWindow.cpp.s"
	/opt/homebrew/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pavelstarostin/Source/Project/src/MainWindow.cpp -o CMakeFiles/DatabaseApp.dir/src/MainWindow.cpp.s

CMakeFiles/DatabaseApp.dir/src/TextDatabase.cpp.o: CMakeFiles/DatabaseApp.dir/flags.make
CMakeFiles/DatabaseApp.dir/src/TextDatabase.cpp.o: /Users/pavelstarostin/Source/Project/src/TextDatabase.cpp
CMakeFiles/DatabaseApp.dir/src/TextDatabase.cpp.o: CMakeFiles/DatabaseApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/pavelstarostin/Source/Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/DatabaseApp.dir/src/TextDatabase.cpp.o"
	/opt/homebrew/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DatabaseApp.dir/src/TextDatabase.cpp.o -MF CMakeFiles/DatabaseApp.dir/src/TextDatabase.cpp.o.d -o CMakeFiles/DatabaseApp.dir/src/TextDatabase.cpp.o -c /Users/pavelstarostin/Source/Project/src/TextDatabase.cpp

CMakeFiles/DatabaseApp.dir/src/TextDatabase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/DatabaseApp.dir/src/TextDatabase.cpp.i"
	/opt/homebrew/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pavelstarostin/Source/Project/src/TextDatabase.cpp > CMakeFiles/DatabaseApp.dir/src/TextDatabase.cpp.i

CMakeFiles/DatabaseApp.dir/src/TextDatabase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/DatabaseApp.dir/src/TextDatabase.cpp.s"
	/opt/homebrew/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pavelstarostin/Source/Project/src/TextDatabase.cpp -o CMakeFiles/DatabaseApp.dir/src/TextDatabase.cpp.s

# Object files for target DatabaseApp
DatabaseApp_OBJECTS = \
"CMakeFiles/DatabaseApp.dir/DatabaseApp_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/DatabaseApp.dir/src/main.cpp.o" \
"CMakeFiles/DatabaseApp.dir/src/MainWindow.cpp.o" \
"CMakeFiles/DatabaseApp.dir/src/TextDatabase.cpp.o"

# External object files for target DatabaseApp
DatabaseApp_EXTERNAL_OBJECTS =

DatabaseApp: CMakeFiles/DatabaseApp.dir/DatabaseApp_autogen/mocs_compilation.cpp.o
DatabaseApp: CMakeFiles/DatabaseApp.dir/src/main.cpp.o
DatabaseApp: CMakeFiles/DatabaseApp.dir/src/MainWindow.cpp.o
DatabaseApp: CMakeFiles/DatabaseApp.dir/src/TextDatabase.cpp.o
DatabaseApp: CMakeFiles/DatabaseApp.dir/build.make
DatabaseApp: /opt/homebrew/opt/qt/lib/QtWidgets.framework/Versions/A/QtWidgets
DatabaseApp: /opt/homebrew/opt/qt/lib/QtGui.framework/Versions/A/QtGui
DatabaseApp: /opt/homebrew/opt/qt/lib/QtCore.framework/Versions/A/QtCore
DatabaseApp: CMakeFiles/DatabaseApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/pavelstarostin/Source/Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable DatabaseApp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DatabaseApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DatabaseApp.dir/build: DatabaseApp
.PHONY : CMakeFiles/DatabaseApp.dir/build

CMakeFiles/DatabaseApp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DatabaseApp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DatabaseApp.dir/clean

CMakeFiles/DatabaseApp.dir/depend: DatabaseApp_autogen/timestamp
	cd /Users/pavelstarostin/Source/Project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/pavelstarostin/Source/Project /Users/pavelstarostin/Source/Project /Users/pavelstarostin/Source/Project/build /Users/pavelstarostin/Source/Project/build /Users/pavelstarostin/Source/Project/build/CMakeFiles/DatabaseApp.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/DatabaseApp.dir/depend
