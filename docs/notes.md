## Environment setup ##

1. toochain installation : sudo apt-get install gcc
2. make installation     : sudo apt-get install make
3. cmake installation
	1. sudo apt purge --auto-remove cmake
	2. Go to official cmake webpage - click on Downlaod - Downaload cmake-3.14.0.tar.gz
	3. Extract cmake from downloaded directory
	4. Enter the folder - right click - open terminal
	5. ./bootstrap
	6. make -j4
	7. sudo make install
	8. Check for cmake version : cmake --version

## What is a Build System ? ##
* It is a collection of tools for automating the program compilation
* At its core, there is normally a functional based language. It maps a set of source resources(files) to a target (executable/libraries)
* Build systems: Make, Ant, Jam, ...

## What is CMake? ##
* CMake stands for Cross Platform Make - build system manager
* CMake builds build systems
* Can be used for multiple programming languages
* Open Source

![how_cmake_works](https://user-images.githubusercontent.com/15670283/58197403-ce303200-7ce9-11e9-9718-27a19fc8cb31.jpg)

[Reference] https://cmake.org/cmake/help/v3.14/index.html

## CMake source files are organized into: ##
* Directories (CMakeLists.txt)
* Scripts (<script>.cmake)
* Modules (<modules>.cmake)

## CMake variables ##
* Basic unit of storage
* Values are always of string type (but some commands may interpret the strings as values of other types)
* Use set()/unset() to initialize/delete variables in the current scope
* Use variable reference ${<variable>} to access variable values.
	If variable is not set , the variable value is empty string
* Environment variable have got a global scope
* Environment variable reference : $ENV{<variable>}
* Cmake variables (Provide information, change behavior , control the build, ...)
* There are also lists, which can be set()/unset()

## Scopes ##
* Function scope: A variable in this scope is only visible for the current function and any nested calls within it
* Directory scope: Each of directories in a source tree has its own variable bindings
* Persistent cache: This variables are stored in a separate cache and there are persist across multiple CMake runs

## Control structures ##
* if()/elseif()/else()/endif()
* foreach()/endforeach()
* while()/endwhile()

## Command Definitiones ##
* macro()/endmacro()
* function()/endfunction()
