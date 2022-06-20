/*
** EPITECH PROJECT, 2022
** esoterix.c
** File description:
** esoterix
*/

#ifndef ESOTERIX
    #define ESOTERIX

    ////////////////////////////////////////////////////////////
    /// \brief Includes
    ////////////////////////////////////////////////////////////
    #include "my.h"
    #include "printf.h"
    #include "formatstring.h"
    #include <stdbool.h>
    #include <stddef.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <sys/stat.h>

    ////////////////////////////////////////////////////////////
    /// \brief Typedefs
    ////////////////////////////////////////////////////////////
    typedef struct filetype_s filetype_t;
    typedef enum fileref_e fileref_t;

    ////////////////////////////////////////////////////////////
    /// \brief Initialize an empty array
    ////////////////////////////////////////////////////////////
    #define INIT_ARRAY(arr) malloc(sizeof(char *)); *arr = NULL;

    ////////////////////////////////////////////////////////////
    /// \brief Get the last element of an array
    ////////////////////////////////////////////////////////////
    #define LAST_ARRAY(a) a[my_strarraylen(a) - 1]

    ////////////////////////////////////////////////////////////
    /// \brief Get the last element of a string
    ////////////////////////////////////////////////////////////
    #define LAST_STR(a) a[my_strlen(a) - 1]

    ////////////////////////////////////////////////////////////
    /// \brief Free an array
    ////////////////////////////////////////////////////////////
    #define FREE_ARRAY(a) for (int i = 0; a[i] != NULL; i++) free(a[i]); free(a)

    ////////////////////////////////////////////////////////////
    /// \brief Show an array
    ////////////////////////////////////////////////////////////
    #define SHOW_ARRAY(arr) for (size_t i = 0; arr[i]; i++) my_printf("\t- %s\n", arr[i]);

    ////////////////////////////////////////////////////////////
    /// \brief Enum of filetypes
    ////////////////////////////////////////////////////////////
    enum fileref_e {
        PYTHON,
        C,
        CPP,
        LUA,
        JAVA,
        GO,
        JAVASCRIPT,
        WHITESPACE,
        UNLAMBDA,
        MALBOLGE,
        LOLCODE,
        JSFUCK,
        INTERCAL,
        GOLFSCRIPT,
        FRACTAN,
        BLC,            // Binary lambda calculus
        BEFUNGE,
        SHEAKSPEAR,
        BRAINFUCK,
        CHEF
    };

    ////////////////////////////////////////////////////////////
    /// \brief Get content of a file
    ///
    /// \param file name of the file to read
    ///
    /// \return Content of the file
    ///
    ////////////////////////////////////////////////////////////
    char *buff_from_file(char *file);

    ////////////////////////////////////////////////////////////
    /// \brief Translate python script in language X
    ///
    /// \param file name of the file to read
    ///
    /// \return Content traduce
    ///
    ////////////////////////////////////////////////////////////
    char *__python__(char *file);

    ////////////////////////////////////////////////////////////
    /// \brief Delete all time str in array
    ///
    /// \param array array to clean
    /// \param str string to delete
    ///
    /// \return array without the string
    ///
    ////////////////////////////////////////////////////////////
    char **remove_all(char **array, char *str);

    ////////////////////////////////////////////////////////////
    /// \brief Check if a string is in an array
    ///
    /// \param array array to check
    /// \param str string to check
    ///
    /// \return true if str is in array, false otherwise
    ///
    ////////////////////////////////////////////////////////////
    bool is_in(char **array, char *str);

    ////////////////////////////////////////////////////////////
    /// \brief Remove first occurence of a string in an array
    ///
    /// \param array array to check
    /// \param str string to check
    ///
    /// \return array without the string
    ///
    ////////////////////////////////////////////////////////////
    char **remove(char **array, char *str);

    ////////////////////////////////////////////////////////////
    /// \brief Add a string in an Array
    ///
    /// \param array array to check
    /// \param str string to check
    ///
    /// \return array with the string
    ///
    ////////////////////////////////////////////////////////////
    char **append(char **array, char *str);

    ////////////////////////////////////////////////////////////
    /// \brief Delete double in an array
    ///
    /// \param array array to check
    ///
    /// \return array without double
    ///
    ////////////////////////////////////////////////////////////
    char **no_double(char **array);

    ////////////////////////////////////////////////////////////
    /// \brief Get function name
    ///
    /// \param functions all name to check
    ///
    /// \return array of function name
    ///
    ////////////////////////////////////////////////////////////
    char **get_func(char **functions);

    ////////////////////////////////////////////////////////////
    /// \brief Get function printing string
    ///
    /// \param array all name to check
    ///
    /// \return array of function printing string
    ///
    ////////////////////////////////////////////////////////////
    char *fcnt_display(char **array);

    ////////////////////////////////////////////////////////////
    /// \brief Struct for a type
    ///
    /// Contain the reference to the type to compile, his abbreviations, and a
    /// pointer to the function
    ///
    ////////////////////////////////////////////////////////////
    struct filetype_s {
        fileref_t reference;
        char *filename;
        char *( *func)(char *);
    };

#endif
