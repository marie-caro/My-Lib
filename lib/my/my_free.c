/*
** EPITECH PROJECT, 2023
** my_dir
** File description:
** my_free.c
*/

#include "my.h"

void my_free_arr(char **arr)
{
    int i = 0;

    for (i; arr[i]; i++)
        free(arr[i]);
    free(arr);
    return;
}
