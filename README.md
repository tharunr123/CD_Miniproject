# CD_Miniproject
Built a C++ compiler in C language as a part of a 4 credit course on Compiler Design (UE18CS351).

## Features of the compiler include:
* Syntax includes detecting class, compound statements, functions, header files, do-while loop, if-else conditional statements, variable declaration, assignment. If any of the above mentioned syntax rules is not satisfied the compiler throws a syntax error with the line number.
* Semantics include variable type checking, undeclared identifiers, type mismatch.
* Compiler prints the abstract syntax tree for the input code. Syntax tree for if-else statements, do-while loop and expressions will be printed.
* Intermediate code generation for expressions, if-else statements, do-while loops.
* Constant folding, Constant propagation, Dead Code, Loop Invariant Code motion optimization.

**Install the LEX and YACC packages before executing the program**

*To run the program, navigate to the desired folder, then run:*

`chmod 777 start.sh`

`./start.sh`
