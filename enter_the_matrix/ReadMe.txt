Notes:
1. Problem:
   Encountered the linking error when compiling using g++ file.cpp,
                   -----------------
    Undefined symbols for architecture arm64:
    "_main", referenced from:
      implicit entry/start for main executable
    ld: symbol(s) not found for architecture arm64
    clang: error: linker command failed with exit code 1 (use -v to see invocation)

    when compiling the enter_the_matrix.cpp file after removing the log function to an external file.

  Resolution:
  Went to Google,
  Found this: https://stackoverflow.com/questions/19572665/compiling-a-c-file-undefined-symbols-for-architecture-x86-64
  then further information on the suggested g++ -c here: https://www.cs.bu.edu/fac/gkollios/cs113/Usingg++.html

  * The g++ -c command compiles a ".cpp" file to standalone ".o" object file. No linking.
  * The g++ -o <single_executable_name> file_1.o file_2.o will link the specified
    object files and produce a single executable.
