/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** wdfvb
*/

#pragma once
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>

void my_putchar(char c);
int my_strlen(char *str);
int my_put_nbr(long long int nb);
int my_put_nbr_rec(long long int nb, int a);
int my_putstr(char const *str);
char *my_strcpy(char *dest, char *src);
bool my_strcmp(char *s1, char *s2);
char *my_strdup(char *src);
char *my_strncat(char *dest, char *src, int nb);
char *my_strcat(char *dst, char *src);
char *my_int_to_str(long long int nb);
int compare_function(void *data, void *ref);
char **my_str_to_word_array(char *buffer, char delimiter);
int my_bin_to_dec(int bin);
char *my_memset(char *str, int num);
char *formatting(char *str);
int how_many(char *str, char character);
char *get_line(char **arr, int line);
char **my_arrcpy(char **arr);
void my_free_arr(char **arr);
char **read_file_noarg(char *filepath);
char **read_file(int ac, char **av);
