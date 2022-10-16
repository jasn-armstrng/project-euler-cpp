C++
                                        C++ Learning resources
================================================================================================================
 YouTube: https://www.youtube.com/watch?v=18c3MTX0PK0&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb
 Microsoft: https://learn.microsoft.com/en-us/cpp/cpp/cpp-language-reference?view=msvc-170


                                        The C++ compiler:
================================================================================================================
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

    3. The abstract syntax tree is used to produce the object file that contains binary instructions -> source
       file.

  C++ does not care about files. There is no such thing as file, filenames are not important.
  C++ treats files as translation units.
  IMPORTANT - In C++ files have no meaning.


                                              The C++ Linker
================================================================================================================
  Linker is the proces moving source file file.o to an executable.

  The Linker ensures that interoperability between the components of your application that are defined across
  multiple object files -> translation units.

  Flow: Text files -> [COMPILER] -> Object files -> [LINKER] -> Single Executable Binary

  Note: There's static linking and dynamic linking.

  More on the Linker here: https://www.learncpp.com/cpp-tutorial/introduction-to-the-compiler-linker-and-libraries/

                                              C++ One Definition Rule (ODR)
================================================================================================================
 The One Definition Rule (ODR): https://en.cppreference.com/w/cpp/language/definition
 Applies to: variables, functions, class types, enumeration types, concept or trmplate.


                                              Variables in C++
================================================================================================================

 When we write a programming we want to use, manipulate data. Variables are how we store data for usage in our
 program. Variables are a named location in memory in either the stack or the heap.

 A variable identifier can only have one definition - the one definiton rule.

 In C++ we have primitive data types for the various data we want to store. The main diff between data types are
 there sizes.

 1. int: int (integer) can store -2^31 to +2^31. An int can represent up to 4 bytes, that's 4x8 bits per byte
    which gives us 32. However the integer can be signed, that is be +ve or -ve. We need one bit for the sign
    leaving us with an integer max value of 2^31 - +/- 2,147,483,648.
 2. unsigned int: lets us define an integer without a sign giving us a max value of 2^32.
 3. char: 1 byte
 4. short: 2 bytes
 5. long: 4 bytes
 6. long long: 8 bytes
 3-6 can also be unsigned.
 7. float: decimal value up to 4 bytes. float a = 5.5f; The f indicates that float and not double.
 8. double: decimal value up to 8 bytes.
 9. bool: true(1), false(0). 1 byte. Note that even tho a bool only needs one bit for representing 0 or 1, memory
    is not is not addressed in bits but bytes and only accessed in bytes.


 C++ has the sizeof operator that tells us how big the data type is.
             ------

 The use of data types is up to the programmer but there are conventions that most programmers follow.
 Recall data type difference is the amount of space in memory is allocated when they are created.

 Custom data types are constructed from the above primitives


                                              Functions in C++
================================================================================================================
 Functions in C++ are reusable code structures that exist outside of a class. In a class they are called methods.
 A function identifier can only have one definition - the one definiton rule.

 definition:
  <return type> <Name>(<parameters>Optional)
  {
    <action>
    return <something> unless <return type> is void
  }

 eg. 1
  int Multiply(int a, int b)
  {
    return a * b;
  }

  Note: Every function declaration and definition must specify a return type, whether or not it actually
        returns a value.

  Function return types:
    1. Data types: int, String, double
    2. void: don't return, just do some action
    3. Optionals: inline, constexpr, static

  Use functions but don't overdo it to break up the actions of your application. Each function needs a stack
  frame in memory.

  A note on the main function defined as,
    int main()
    {
      <some action(s)>
    }
  Note the return type of the main function is not void and there is no return. Only the main function has this
  allowance.

  Note: functions can be broken up with declarations and definitions.


                                              C++ Header files
================================================================================================================

 Header files are used to declare certain types of functions that can be used throughout your program -> It's
 the common place where just function declarations are stored.

 Header guard
 ------------
 Note at the top of the header file we have the default prepocessor directive,
  #pragma once

 What this essentially means is include this particular header file once. This is what is called a header guard.
 We don't want our files to be including the same prepocessor directive more than once.
 More on header guards here: https://www.learncpp.com/cpp-tutorial/header-guards/

 Another header guard is the #ifndef but most people use #pragma once and most modern compilers support #pragma.


 Notes:
 1. Header files get included into .cpp files via the #include prepocessor directive.
 2. Put header file(s) into a separate header file directory.
 3. A header file is NOT a translation unit, but used in prepocessing one.
 4.
    #include "../Header Files/Log.h" // "<relative_path>/header_file.h"
    #include <iostream>

    Both of the above are header files but this one <iostream> is an example of a C++ standard library
    header file. Note it also does not have a .h extension.


                                              How to debug in C++ (Visual Studio or another IDE)
================================================================================================================
 Debugging with Break points and reading memory. Reading memory is super useful in debugging, understanding code
 execution.

 The break point pauses the execution at that point. At this point you can observe the state of the elements of
 your program.

 More detail here https://www.youtube.com/watch?v=0ebzPwixrJA&t=904s


                                              C++ Conditional statements and branching
================================================================================================================
 Branches (or jumps) are one of the most common instruction types. Branches change the execution flow of the
 program either conditionally or unconditionally. For the CPU, an effective branch implementation is crucial
 for good performance

 References:
  1. https://johnysswlab.com/how-branches-influence-the-performance-of-your-code-and-what-can-you-do-about-it/
  2. https://www.youtube.com/watch?v=qEgCT87KOfc
