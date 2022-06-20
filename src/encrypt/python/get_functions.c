/*
** EPITECH PROJECT, 2022
** get_functions.c
** File description:
** get all functions called
*/

#include "esoterix.h"

int chr_in_array(char c, char *array)
{
    for (int i = 0; array[i]; i++)
        if (array[i] == c)
            return i;
    return -1;
}

char **get_func(char **functions)
{
    char **res = INIT_ARRAY(res);
    int x = 0;

    for (int i = 0; functions[i] != NULL; i++) {
        if ((x = chr_in_array('(', functions[i])) != -1 && my_strlen(functions[i]) > 1) {
            res = append(res, my_strdup(functions[i]));
            LAST_ARRAY(res)[x] = '\0';
        }
    }
    return no_double(res);
}

char *fcnt_display(char **array)
{
    char *res = "";

    for (int i = 0; array[i]; i++) {
        res = format("%s\x6%c%s", res, i + 127, array[i]);
    }
    return res;
}
