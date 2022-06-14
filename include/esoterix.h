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
