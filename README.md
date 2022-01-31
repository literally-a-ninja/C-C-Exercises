# Exercise Repository

A super simple way to quickly test and manage multiple unrelated C and C++ prototypes.

1. Make a directory for a new experiment, use this scheme: `$dirname := $cool_proj_name.$compiler`. (E.g., HelloWorld.clang)
2. Write your main code in `$dirname/main.c` or `$dirname/main.cpp` (E.g., HelloWorld.clang/main.cpp)
3. Run `./build.bsh` and run the program with `./build/$dirname` (E.g., ./build/HelloWorld.clang)
