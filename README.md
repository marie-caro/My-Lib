# My-Lib

Welcome to My_Lib, a repository containing a collection of functions that I've developed and frequently use. 
These functions were primarily created during my C POOL at EPITECH, and they cover a range of utility and common programming tasks.

# Introduction
This repository serves as a personal library of functions that I find useful in various programming projects. The functions are written in C and cover a wide range of functionalities, from basic functions, like a my_putchar, to more complex ones, like my_printf.

# List of functions
+ my_putchar: outputs a char.
+ my_putstr: outputs a string.
+ my_put_nbr: takes a string vontaining a number and output said number as an int.
+ my_printf: basic recreation of the printf function from the std lib in c
  
             + conversions: %d, %i, %s, %c, %p, %f, %F, %E, %e, %X, %x, %o, %u,
             + len modifiers: h, l
             + flags: +, #
+ my_int_to_str: takes an number and output said number as a string.
+ my_revert: reverts a given string. (found in int_to_str.c file)
+ my_strcat: concatenates two strings.
+ my_strncat: concatenates x chars from a string with another.
+ my_strdup: duplicates a string into another.
+ my_strlen: finds the length of a string.
+ my_strcpy: copis a string into another.
+ my_strcmp: compares two strings || different from the original strcmp -> this function returns false if both strings are different and true if they are the same.
+ how_many_rows: given a string that represents any kind of rectangle, count how manys rows there are.
+ read_file: reads a file and stores its content into an array.
+ str_to_float: takes a string an outputs the corresponding float. || doesn't use stdio lib
+ str_to_float_lib: takes a string and returns the corresponding float. || uses of stdio lib
+ my_str_to_word_array: takes a string and a delimiter and outputs the corresponding array.
+ my_bin_to_dec: takes a binary number and returns the corresponding decimal number.
+ my_memset: takes a string and fills it with '0'.
+ formatting: takes a string a removes every unnecessary spaces or tabs.
+ how_many: takes a string and a character and returns how many times said char appears in the string.
+ get_line: takes an array and a number and returns the string located at said position in the array.
+ my_arrcpy: takes an array and copies it into another one.
+ my_free_arr: frees an array.
