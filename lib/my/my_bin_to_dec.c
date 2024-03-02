/*
** EPITECH PROJECT, 2023
** my_dir
** File description:
** my_bin_to_dec.c
*/

#include "my.h"

int my_bin_to_dec(int bin)
{
    int decimal = 0;
    int base = 1;
    int temp = bin;
    int last_digit = 0;

    while (temp) {
        last_digit = temp % 10;
        temp = temp / 10;
        decimal += last_digit * base;
        base = base * 2;
    }
    return decimal;
}
