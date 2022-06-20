/*
** EPITECH PROJECT, 2022
** python_parser.c
** File description:
** Parser python
*/

#include "esoterix.h"

char *pywords[] = {
    "and", "as", "assert", "break", "class", "continue", "def", "del", "elif",
    "else", "except", "False", "finally", "for", "from", "global", "if",
    "import", "in", "is", "lambda", "None", "nonlocal", "not", "or", "pass",
    "print", "raise", "return", "True", "try", "while", "with", "yield"
};

char *var_from_array(char **array)
{
    char *res = "";

    for (int i = 0; array[i]; i++) {
        res = format("%s\x5%c%s", res, i + 1, array[i]);
    }
    return res;
}

char *getvar(char *buffer, char **functions)
{
    char **arr = my_str_to_word_array(buffer, " \t\n()+=-/%!<>*\"\':");

    for (size_t i = 0; i < sizeof(pywords) / sizeof(char *); i++)
        arr = remove(arr, my_strdup(pywords[i]));
    for (size_t i = 0; functions[i]; i++)
        arr = remove(arr, functions[i]);
    arr = no_double(arr);
    my_printf("Variables:\n");
    SHOW_ARRAY(arr);
    my_printf("Fonctions:\n");
    SHOW_ARRAY(functions);
    return var_from_array(arr);
}

char *__python__(char *file)
{
    char *buffer = buff_from_file(file);
    char **functions = my_str_to_word_array(buffer, " \t\n+=-/%!<>*\"\':");
    char *res;
    char *var;

    if (!buffer)
        return my_strdup("Error: File not found");
    functions = get_func(functions);
    var = getvar(buffer, functions);
    functions = remove(functions, my_strdup("print"));
    res = format("%s\n%s\n", var, fcnt_display(functions));
    return res;
}