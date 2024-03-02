/*
** EPITECH PROJECT, 2023
** my_dir
** File description:
** how_many.c
*/

#include "my.h"

int how_many(char *str, char character)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == character)
            count++;
    }
    return count;
}
