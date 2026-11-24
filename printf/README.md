This activity has been created as part of the 42 curriculum by rsiba

ft_printf
Description

The ft_printf project is part of the 42 curriculum. Its goal is to recreate the behavior of the standard C library function printf().

The purpose of this project is to understand and implement variadic functions in C, manage different data types, and handle formatted output.

The implementation reproduces the main features of the original printf() function, allowing users to display characters, strings, numbers, pointers, and hexadecimal values using format specifiers.

This project provides a deeper understanding of:

Variadic functions (va_list, va_start, va_arg, va_end).
String and character manipulation.
Data type conversions.
Memory and output management.
Modular programming in C.
Features

The implementation supports the following format specifiers:

Specifier	Description
%c	Prints a single character.
%s	Prints a string.
%p	Prints a pointer address in hexadecimal format.
%d	Prints a decimal integer.
%i	Prints an integer.
%u	Prints an unsigned decimal integer.
%x	Prints an unsigned integer in lowercase hexadecimal.
%X	Prints an unsigned integer in uppercase hexadecimal.
%%	Prints a literal percentage sign.
Instructions
Compilation

The project is compiled using the provided Makefile.

Compile the library:

bash
make


This generates the static library:

bash
libftprintf.a

Makefile commands
Command	Description
make	Compiles the project.
make clean	Removes object files.
make fclean	Removes object files and the library.
make re	Recompiles everything from scratch.
Usage

To use ft_printf() in another C project, include the header file:

c
#include "ft_printf.h"


Compile your program with the library:

bash
make a 


Example:

#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!", "42");
    ft_printf("Number: %d", 42);
    ft_printf("Hexadecimal: %x", 255);
    ft_printf("Percentage: %%");
    return (0);
}

Run the program:

bash
./program


Algorithm and Data Structures

Algorithm

The implementation uses a format-string parsing algorithm.

The main function, ft_printf(), processes the format string character by character.

    It initializes a va_list to access the variable arguments.
    It iterates through the format string.
    If the current character is not %, it is printed directly.
    If a % is encountered, the next character is examined to identify the conversion specifier.
    The corresponding function is called to handle the argument.
    The number of printed characters is counted and returned.
    Once the entire format string has been processed, the va_list is released.

This approach separates format parsing from data conversion, making the code easier to read, maintain, and extend.
Data Structures

The main data structure used in this project is va_list.

It allows the function to handle a variable number of arguments without knowing their number or types in advance.

The following macros are used:

    va_start: Initializes the argument list.
    va_arg: Retrieves the next argument with the expected type.
    va_end: Releases the argument list.

The implementation also uses basic C data types such as:

    int for signed integers and character counts.
    unsigned int for unsigned integers and hexadecimal conversions.
    char * for strings.
    void * for pointer addresses.

Algorithm and Data Structure Justification

A character-by-character parsing algorithm was chosen because the format string is naturally sequential.

It avoids unnecessary memory allocation and allows each conversion to be handled immediately.

Using va_list is essential because ft_printf() must accept a variable number of arguments, just like the original printf() function.

The implementation is divided into smaller conversion functions. This modular approach avoids duplicating code and makes each conversion easier to test independently.

For numerical conversions, recursive or iterative division and modulo operations can be used to extract digits and display numbers in decimal or hexadecimal format.

Overall, these choices provide a simple, efficient, and memory-conscious implementation.
Resources
Documentation

    printf(3) — Linux manual page
    stdarg.h — C standard library
    GNU C Library Documentation
    C Programming Language — cppreference

Author

rsiba
42 Student