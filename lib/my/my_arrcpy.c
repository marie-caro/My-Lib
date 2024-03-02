/*
** EPITECH PROJECT, 2023
** my_dir
** File description:
** my_arrcpy.c
*/

#include "my.h"

char **my_arrcpy(char **arr)
{
    int i = 0;
    int j = 0;
    int count = 0;
    char **my_arr;

    for (count; arr[count] != NULL; count++);
    my_arr = malloc(sizeof(char *) * (count + 1));
    for (i; arr[i] != NULL; i++) {
        my_arr[i] = malloc(sizeof(char) * (my_strlenn(arr[i]) + 1));
        for (j = 0; arr[i][j] != '\0'; j++)
            my_arr[i][j] = arr[i][j];
        my_arr[i][j] = '\0';
    }
    my_arr[i] = NULL;
    return my_arr;
}
