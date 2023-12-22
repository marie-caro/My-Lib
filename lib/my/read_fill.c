/*
** EPITECH PROJECT, 2023
** radar_mod
** File description:
** read.c
*/
#include "my.h"

int my_putchar_error(char c)
{
    write(2, &c, 1);
    return 0;
}

int is_errno(int err, char *error)
{
    if (err == 2) {
        my_putstr("error: ");
        my_putstr(error);
        my_putstr(": No such file or directory\n");
        return 84;
    }
    return 0;
}

char **load_to_arr(char *buffer)
{
    int rows = 58;
    char **arr = malloc(sizeof(char *) * (rows + 1));
    int i = 0;
    int j = 0;
    int k = 0;

    for (; buffer[k]!= '\0'; i++) {
        arr[i] = malloc(sizeof(char) * 30);
        for (j = 0; buffer[k] != '\n'; j++) {
            arr[i][j] = buffer[k];
            k++;
        }
        arr[i][j] = '\0';
        k++;
    }
    arr[i] = NULL;
    return arr;
}

char **read_file(int ac, char **av)
{
    int fd = 0;
    char buffer[30000];
    char **arr;

    if (ac < 2) {
        my_putstr("./my_radar: bad arguments: 0 given but 84 is required");
        my_putstr("\nretry with -h\n");
        return NULL;
    }
    for (int i = 1; i < ac; i++) {
        fd = open(av[i], O_RDONLY);
        if (errno != 1) {
            is_errno(errno , av[i]);
            return NULL;
        }
        read(fd, buffer, 30000);
        arr = load_to_arr(buffer);
        close(fd);
    }
    my_printf("\n");
    return arr;
}
