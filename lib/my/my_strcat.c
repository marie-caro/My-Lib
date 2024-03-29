/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_strcat.c
*/
#include "my.h"

char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int len_dest = 0;
    int len_src = 0;
    char *new = NULL;

    if (dest == NULL || src == NULL)
        return NULL;
    len_src = my_strlen(src);
    len_dest = my_strlen(dest);
    new = malloc(sizeof(char) * (len_dest + len_src + 1));
    my_strcpy(new, dest);
    for (i; i < len_src; i++)
            new[len_dest + i] = src[i];
    new[len_dest + i] = '\0';
    return (new);
}