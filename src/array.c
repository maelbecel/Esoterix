/*
** EPITECH PROJECT, 2022
** array.c
** File description:
** Array manipulation
*/

#include "esoterix.h"

bool is_in(char **array, char *str)
{
    if (!array)
        return false;
    for (int i = 0; array[i]; i++) {
        if (my_strcmp(array[i], str) == 0)
            return true;
    }
    return false;
}

char **append(char **array, char *str)
{
    int size = my_strarraylen(array);
    char **tmp = malloc(sizeof(char *) * (size + 2));

    for (int i = 0; array[i]; i++)
        tmp[i] = array[i];
    tmp[size] = str;
    tmp[size + 1] = NULL;
    return tmp;
}

char **remove(char **array, char *str)
{
    int size = my_strarraylen(array);
    char **tmp = malloc(sizeof(char *) * (size + 2));
    int i = 0;

    for (int j = 0; array[j]; j++) {
        if (my_strcmp(array[j], str) == 0)
            continue;
        tmp[i++] = array[j];
    }
    tmp[i] = NULL;
    return tmp;
}

char **remove_all(char **array, char *str)
{
    char **tmp = remove(array, str);

    while (is_in(tmp, str))
        tmp = remove(tmp, str);
    return tmp;
}

char **no_double(char **array)
{
    int size = my_strarraylen(array);
    char **tmp = malloc(sizeof(char *) * (size + 1));

    for (int i = 0; array[i]; i++) {
        if (!is_in(tmp, array[i]))
            tmp = append(tmp, array[i]);
    }
    return tmp;
}
