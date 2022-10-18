#include <iostream>

// this is a function definition
//                    ----------
void log(const char* message)
// moving message to first function
{
  std::cout << message << std::endl;
}

// Notes:
// 1. When I run build in the IDE it tries to do both compile (create source) and create executable.
// 2. This file can be compiled but not built. Compile: g++ -c log.cpp produces the standalone log.o source file.
// 3. This file needs to be "linked" to be built because it does not have an entry point into its application. The
//    entry point is most times the main(){ } function.
