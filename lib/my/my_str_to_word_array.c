/*
** EPITECH PROJECT, 2023
** my_lib
** File description:
** str_to_word_array.c
*/

#include "my.h"

char **my_str_to_word_array(char *buffer, char delimiter)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int rows = how_many_rows_str(buffer);
    char **arr = malloc(sizeof(char *) * (rows + 1));

    for (i; buffer[k] != '\0'; i++) {
        arr[i] = malloc(sizeof(char) * my_strlen(buffer) + 1);
        for (j = 0; buffer[k] != delimiter && buffer[k] != '\0'; j++) {
            arr[i][j] = buffer[k];
            k++;
        }
        k++;
        arr[i][j] = '\0';
    }
    arr[i] = NULL;
    return arr;
}
