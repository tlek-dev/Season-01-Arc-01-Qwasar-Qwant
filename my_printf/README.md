# Welcome to My Printf
***

## Task
The challenge is to write the my_printf function, which is a simplified version of the standard printf function while adhering to the problem's rules and using only valid functions.

## Description
The my_printf function uses a va_list argument to handle a variable number of arguments. 
The format string is passed in as the first argument and its format specifiers determine how the following arguments are printed.

The function supports the following format specifiers:

%c for printing a character;
%u for printing an unsigned integer;
%d or %i for printing a signed integer;
%p for printing a memory address;
%x for printing an integer in hexadecimal format;
%o for printing an integer in octal format;
%s for printing a string.
The function implements several helper functions to handle specific format specifiers:

put_char writes a single character to the standard output.
print_str writes a string to the standard output.
rev_str reverses a string.
print_h converts a memory address to a string in hexadecimal format.
print_number converts a number to a string in a specified number base.
The function uses the write function to output the formatted string to the standard output.

## Installation
The program does not require npm/make to be installed. Can be used.
gcc -g my.printf.c
./a.out

## Usage
gcc -g my.printf.c
./a.out
gcc -g my_printf.c -g3 -fsanitize=address
./a.out

### The Core Team
agaidar_t
<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
