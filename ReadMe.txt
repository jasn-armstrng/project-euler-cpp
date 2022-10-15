                                              The C++ compiler:
========================================================================================================================
  The compiler's job is convert our code in text into contant data or CPU executable instructions.
                                                      ------------    ----------------------------
  Flow: Text file.cpp -> [COMPILER] -> Object file.o

  The Compilation stages:
  -----------------------
    1. Prepocessing: Evaluate preprocessing instructions such as #include, #define, #if, #ifdef, #pragma ...
        #include - C++ copies whatever is in the file being included and paste's it in your program.
        #define - find <this> and rename it as <that> in your program. - Simplified explanation.
        #if - include or exclude code based on a given condition.

    2. Tokenizing and parsing the "English" C++ syntax in your program.

    1 & 2 above goes into producing an abstract syntax tree.

    3. The abstract syntax tree is used to produce the object file that contains binary instruction - source file.

  C++ does not care about files. There is no such thing as file, filenames are not important.
  C++ treats files as translation units.
  IMPORTANT - In C++ files have no meaning.


                                              The C++ Linker
========================================================================================================================
  Linker is the proces moving source file file.o to an executable.

  The Linker ensures that interoperability between the components of your application that are defined across multiple
  object files aka translation units.

  Flow: Text files -> [COMPILER] -> Object files -> [LINKER] -> Single Executable Binary

  Note: There's static linking and dynamic linking.

  More on the Linker here: https://www.learncpp.com/cpp-tutorial/introduction-to-the-compiler-linker-and-libraries/


                                              Variables in C++
========================================================================================================================

 When we write a programming we want to use, manipulate data. Variables are how we store data for usage in our program.
 Variables a named location in memory in either the stack or the heap.

 In C++ we have primitive data types for the various data we want to store. The main diff between data types are there
 sizes.

 1. int: int (integer) can store -2^31 to +2^31. An int can represent up to 4 bytes, that's 4x8 bits per byte which gives us 32.
    However the integer can be signed, that is be +ve or -ve. We need one bit for the sign leaving us with an integer max
    value of 2^31 - +/- 2,147,483,648.
 2. unsigned int: lets us define an integer without a sign giving us a max value of 2^32.
 3. char: 1 byte
 4. short: 2 bytes
 5. long: 4 bytes
 6. long long: 8 bytes
 3-6 can also be unsigned.
 7. float: decimal value up to 4 bytes. float a = 5.5f; The f indicates that float and not double.
 8. double: decimal value up to 8 bytes.
 9. bool: true(1), false(0). 1 byte. Note that even tho a bool only needs one bit for representing 0 or 1, memory is not is
    not addressed in bits but bytes and only accessed in bytes.


 C++ has the sizeof operator that tells us how big the data type is.
             ------

 The use of data types is up to the programmer but there are conventions that most programmers follow.
 Recall data type difference is the amount of space in memory is allocated when they are created.

 Custom data types are constructed from the above primitives


                                              Functions in C++
========================================================================================================================
 Functions in C++ are reusable code structures that exist outside of a class. In a class they are called methods.

 definition:
  <return type> <Name>(<parameters>Optional)
  {
    <action>
  }

 eg. 1
  int Multiply(int a, int b)
  {
    return a * b;
  }
