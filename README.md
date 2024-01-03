# My-Lib

Welcome to My_Lib, a repository containing a collection of functions that I've developed and frequently use. 
These functions were primarily created during my C POOL at EPITECH, and they cover a range of utility and common programming tasks.

# Introduction
This repository serves as a personal library of functions that I find useful in various programming projects. The functions are written in C and cover a wide range of functionalities, from basic functions, like a my_putchar, to more complex ones, like my_printf.

# List of functions
+ my_putchar: output a char.
+ my_putstr: output a string.
+ my_put_nbr: takes a string vontaining a number and output said number as an int.
+ my_printf: basic recreation of the printf function from the std lib in c
  
             + conversions: %d, %i, %s, %c, %p, %f, %F, %E, %e, %X, %x, %o, %u,
             + len modifiers: h, l
             + flags: +, #
+ my_int_to_str: take an number and output said number as a string.
+ my_revert: reverts a given string. (found in int_to_str.c file)
+ my_strcat: concatenate two strings.
+ my_strncat: concatenate x chars from a string with another.
+ my_strdup: duplicates a string into another.
+ my_strlen: find the length of a string.
+ my_strcpy: copy a string into another.
+ my_strcmp: compare two strings || different from the original strcmp -> this function returns false if both strings are different and true if they are the same.
+ how_many_rows: given a string that represents any kind of rectangle, count how manys rows there are.
+ read_file: read a file and store its content into an array.
+ str_to_float: take a string an output the corresponding float. || doesn't use stdio lib
+ str_to_float_lib: take a string an output the corresponding float. || uses of stdio lib
