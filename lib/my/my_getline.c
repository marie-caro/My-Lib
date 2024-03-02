/*
** EPITECH PROJECT, 2023
** my_dir
** File description:
** my_getline.c
*/

#include "my.h"

char *get_line(char **arr, int line)
{
    int i = 0;
    int len = my_strlenn(arr[line]);
    char *tmp = malloc(sizeof(char) * (len + 1));

    for (; i < len; i++) {
        tmp[i] = arr[line][i];
    }
    tmp[i] = '\0';
    return tmp;
}
