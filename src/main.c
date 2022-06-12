/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "esoterix.h"

static const filetype_t Files[] = {
    {PYTHON, "py", NULL},
    {C, "c", NULL},
    {CPP, "cpp", NULL},
    {LUA, "lua", NULL},
    {JAVA, "java", NULL},
    {GO, "go", NULL},
    {JAVASCRIPT, "js", NULL}
};

int main (UNUSED int ac, UNUSED char **argv)
{
    char **file = my_str_to_word_array(argv[1], '.');
    char *ext = file[my_strarraylen(file) - 1];
    UNUSED char *res;

    for (size_t i = 0; i < sizeof(Files) / sizeof(filetype_t); i++)
        if (my_strcmp(Files[i].filename, ext) == 0){
            // res = Files[i].func(argv[1]);
            my_printf("ext = %s\n", Files[i].filename);
        }
    return 0;
}
