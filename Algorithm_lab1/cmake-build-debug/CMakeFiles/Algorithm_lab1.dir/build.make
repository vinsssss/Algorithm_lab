# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Algorithm_lab1.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Algorithm_lab1.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Algorithm_lab1.dir\flags.make

CMakeFiles\Algorithm_lab1.dir\linklist.c.obj: CMakeFiles\Algorithm_lab1.dir\flags.make
CMakeFiles\Algorithm_lab1.dir\linklist.c.obj: ..\linklist.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Algorithm_lab1.dir/linklist.c.obj"
	C:\PROGRA~2\MICROS~4\2019\PROFES~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\Algorithm_lab1.dir\linklist.c.obj /FdCMakeFiles\Algorithm_lab1.dir\ /FS -c C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1\linklist.c
<<

CMakeFiles\Algorithm_lab1.dir\linklist.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Algorithm_lab1.dir/linklist.c.i"
	C:\PROGRA~2\MICROS~4\2019\PROFES~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\Algorithm_lab1.dir\linklist.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1\linklist.c
<<

CMakeFiles\Algorithm_lab1.dir\linklist.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Algorithm_lab1.dir/linklist.c.s"
	C:\PROGRA~2\MICROS~4\2019\PROFES~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\Algorithm_lab1.dir\linklist.c.s /c C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1\linklist.c
<<

CMakeFiles\Algorithm_lab1.dir\seqlist.c.obj: CMakeFiles\Algorithm_lab1.dir\flags.make
CMakeFiles\Algorithm_lab1.dir\seqlist.c.obj: ..\seqlist.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Algorithm_lab1.dir/seqlist.c.obj"
	C:\PROGRA~2\MICROS~4\2019\PROFES~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\Algorithm_lab1.dir\seqlist.c.obj /FdCMakeFiles\Algorithm_lab1.dir\ /FS -c C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1\seqlist.c
<<

CMakeFiles\Algorithm_lab1.dir\seqlist.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Algorithm_lab1.dir/seqlist.c.i"
	C:\PROGRA~2\MICROS~4\2019\PROFES~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\Algorithm_lab1.dir\seqlist.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1\seqlist.c
<<

CMakeFiles\Algorithm_lab1.dir\seqlist.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Algorithm_lab1.dir/seqlist.c.s"
	C:\PROGRA~2\MICROS~4\2019\PROFES~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\Algorithm_lab1.dir\seqlist.c.s /c C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1\seqlist.c
<<

CMakeFiles\Algorithm_lab1.dir\main.c.obj: CMakeFiles\Algorithm_lab1.dir\flags.make
CMakeFiles\Algorithm_lab1.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Algorithm_lab1.dir/main.c.obj"
	C:\PROGRA~2\MICROS~4\2019\PROFES~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\Algorithm_lab1.dir\main.c.obj /FdCMakeFiles\Algorithm_lab1.dir\ /FS -c C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1\main.c
<<

CMakeFiles\Algorithm_lab1.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Algorithm_lab1.dir/main.c.i"
	C:\PROGRA~2\MICROS~4\2019\PROFES~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\Algorithm_lab1.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1\main.c
<<

CMakeFiles\Algorithm_lab1.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Algorithm_lab1.dir/main.c.s"
	C:\PROGRA~2\MICROS~4\2019\PROFES~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\Algorithm_lab1.dir\main.c.s /c C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1\main.c
<<

# Object files for target Algorithm_lab1
Algorithm_lab1_OBJECTS = \
"CMakeFiles\Algorithm_lab1.dir\linklist.c.obj" \
"CMakeFiles\Algorithm_lab1.dir\seqlist.c.obj" \
"CMakeFiles\Algorithm_lab1.dir\main.c.obj"

# External object files for target Algorithm_lab1
Algorithm_lab1_EXTERNAL_OBJECTS =

Algorithm_lab1.exe: CMakeFiles\Algorithm_lab1.dir\linklist.c.obj
Algorithm_lab1.exe: CMakeFiles\Algorithm_lab1.dir\seqlist.c.obj
Algorithm_lab1.exe: CMakeFiles\Algorithm_lab1.dir\main.c.obj
Algorithm_lab1.exe: CMakeFiles\Algorithm_lab1.dir\build.make
Algorithm_lab1.exe: CMakeFiles\Algorithm_lab1.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable Algorithm_lab1.exe"
	"C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Algorithm_lab1.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~4\2019\PROFES~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Algorithm_lab1.dir\objects1.rsp @<<
 /out:Algorithm_lab1.exe /implib:Algorithm_lab1.lib /pdb:C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1\cmake-build-debug\Algorithm_lab1.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Algorithm_lab1.dir\build: Algorithm_lab1.exe

.PHONY : CMakeFiles\Algorithm_lab1.dir\build

CMakeFiles\Algorithm_lab1.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Algorithm_lab1.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Algorithm_lab1.dir\clean

CMakeFiles\Algorithm_lab1.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1 C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1 C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1\cmake-build-debug C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1\cmake-build-debug C:\Users\89252\CLionProjects\Alogorithm_lab\Algorithm_lab1\cmake-build-debug\CMakeFiles\Algorithm_lab1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Algorithm_lab1.dir\depend

