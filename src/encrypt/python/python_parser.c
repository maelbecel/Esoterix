/*
** EPITECH PROJECT, 2022
** python_parser.c
** File description:
** Parser python
*/

#include "esoterix.h"

char *__python__(char *file)
{
    char *buffer = buff_from_file(file);

    if (!buffer)
        return my_strdup("Error: File not found");
    return buffer;
}