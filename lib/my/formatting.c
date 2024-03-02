/*
** EPITECH PROJECT, 2023
** my_dir
** File description:
** formatting.c
*/

#include "my.h"

char *formatting(char *str)
{
    int j = 0;
    int k = 0;
    char *tmp = malloc(sizeof(char) * my_strlenn(str));

    for (j; str[j] != '\0'; j++) {
        while ((str[j - 1] && str[j] == ' '
        && str[j - 1] == ' ') || str[j] == 9)
            j++;
        tmp[k] = str[j];
        k++;
    }
    tmp[k] = '\0';
    return tmp;
}
