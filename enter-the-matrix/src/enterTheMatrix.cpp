#include <iostream>
// - preprocessor statement. Happens before compilation.
// - This is also a header file
// - header files do not get compiled - they are included
// - iostream is file that is copy and pasted into your program
//   file before it's compiled so you can use the cout function.
// - cpp files get compiled to object files
// - cpp files are compiled inddividually
// - cpp files are 'glued' together by the linker
// - linker only gets actioned when there are more than one files in the project window.

// Created external log.cpp file and
// moved log function out to it

// Add function declaration to "assure" compiler that the log function exists
//              -----------
void log(const char* message);

int main()
{
  log("Wake up Neo! The Matrix has you.");
  // std::cout << "Wake up Neo! The Matrix has you." <<endl; // push the string to the console out then push an end line
  return 0;
}
