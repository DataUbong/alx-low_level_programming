A.2 Variadic Functions

ISO C defines a syntax for declaring a function to take a variable number or type of arguments. (Such functions are referred to as varargs functions or variadic functions.) However, the language itself provides no mechanism for such functions to access their non-required arguments; instead, you use the variable arguments macros defined in stdarg.h.



This section describes how to declare variadic functions, how to write them, and how to call them properly.



Compatibility Note: Many older C dialects provide a similar, but incompatible, mechanism for defining functions with variable numbers of arguments, using varargs.h.

Ordinary C functions take a fixed number of arguments. When you define a function, you specify the data type for each argument. Every call to the function should supply the expected number of arguments, with types that can be converted to the specified ones. Thus, if the function ‘foo’ is declared with int foo (int, char *); then you must call it with two arguments, a number (any kind will do) and a string pointer.



But some functions perform operations that can meaningfully accept an unlimited number of arguments.
