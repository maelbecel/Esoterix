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

    ////////////////////////////////////////////////////////////
    /// \brief Typedefs
    ////////////////////////////////////////////////////////////
    typedef struct filetype_s filetype_t;
    typedef enum fileref_e fileref_t;

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
