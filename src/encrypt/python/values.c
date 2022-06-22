/*
** @maelbecel\Esoterix
** values.c
** File description:
** values
*/

#include "esoterix.h"
#include "python.h"

char *__py__var_from_value(int nb, char *values)
{
    char **parsed = my_str_to_word_array(values, "=\x5");

    for (size_t i = 0; i < my_strarraylen(parsed); i += 2)
        if (my_getnbr(parsed[i]) == nb)
            return (parsed[i + 1]) ? parsed[i + 1] : NULL;
    return my_strdup("???");
}

char *__py__values_from_var(int nb, char *values)
{
    char **parsed = my_str_to_word_array(values, "=\x5");

    for (size_t i = 1; i < my_strarraylen(parsed); i += 2)
        if (my_getnbr(parsed[i]) == nb)
            return (parsed[i + 1]) ? parsed[i + 1] : NULL;
    return my_strdup("???");
}
