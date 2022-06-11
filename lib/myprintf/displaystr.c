/*
** EPITECH PROJECT, 2021
** displaychar.c
** File description:
** display char
*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "printf.h"

static int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}

int displaystr(va_list argv)
{
    char *str = va_arg(argv, char *);
    write(1, str, my_strlen(str));
    return 0;
}
