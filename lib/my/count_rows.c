/*
** EPITECH PROJECT, 2023
** radar_mod
** File description:
** count_rows.c
*/
#include "my.h"

int how_many_rows(char *filepath)
{
    struct stat sb;
    int fd = 0;
    char *buffer = NULL;
    int count = 0;

    stat(filepath, &sb);
    buffer = malloc(sizeof(char) * (sb.st_size + 1));
    fd = open(filepath, O_RDONLY);
    read(fd, buffer, sb.st_size);
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n')
            count += 1;
    }
    close(fd);
    free(buffer);
    return count;
}
