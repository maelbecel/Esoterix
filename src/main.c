/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "esoterix.h"

const filetype_t Files[] = {
    {PYTHON, "py", __python__},
    {C, "c", NULL},
    {CPP, "cpp", NULL},
    {LUA, "lua", NULL},
    {JAVA, "java", NULL},
    {GO, "go", NULL},
    {JAVASCRIPT, "js", NULL},
    {WHITESPACE, "ws", NULL},
    {UNLAMBDA, "ul", NULL},
    {MALBOLGE, "mbg", NULL},
    {LOLCODE, "llcd", NULL},
    {JSFUCK, "jsf", NULL},
    {INTERCAL, "ic", NULL},
    {GOLFSCRIPT, "gscript", NULL},
    {FRACTAN, "frctn", NULL},
    {BLC, "blc", NULL},
    {BEFUNGE, "bfng", NULL},
    {SHEAKSPEAR, "shspr", NULL},
    {BRAINFUCK, "bf", NULL},
    {CHEF, "chef", NULL}
};

int main (UNUSED int ac, char **argv)
{
    char **file = my_str_to_word_array(argv[1], ".");
    char *ext = file[my_strarraylen(file) - 1];
    UNUSED char *res;

    for (size_t i = 0; i < sizeof(Files) / sizeof(filetype_t); i++)
        if (my_strcmp(Files[i].filename, ext) == 0){
            res = Files[i].func(argv[1]);
        }
    my_printf("%s\n", res);
    return 0;
}
