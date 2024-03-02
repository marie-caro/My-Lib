/*
** EPITECH PROJECT, 2023
** my_dir
** File description:
** my_memset.c
*/

#include "my.h"

char *my_memset(char *str, int num)
{
    int i = 0;

    for (i; i < num; i++)
        str[i] = '0';
    str[i] = '\0';
    return str;
}
