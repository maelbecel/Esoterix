/*
** @maelbecel\Esoterix
** python.h
** File description:
** python header
*/

#ifndef PYTHON
    #define PYTHON

    ////////////////////////////////////////////////////////////
    /// \brief Typedefs
    ////////////////////////////////////////////////////////////
    typedef struct __py__symbol_keyword_s __py__symbol_keyword_t;

    ////////////////////////////////////////////////////////////
    /// \brief Struct to define key words and symbol
    ////////////////////////////////////////////////////////////
    struct __py__symbol_keyword_s {
        char symbol;
        char *keyword;
        bool name;
        int argv;
    };

    ////////////////////////////////////////////////////////////
    /// \brief Get function name
    ///
    /// \param functions all name to check
    ///
    /// \return array of function name
    ///
    ////////////////////////////////////////////////////////////
    char **__py__get_func(char **functions);

    ////////////////////////////////////////////////////////////
    /// \brief Get function printing string
    ///
    /// \param array all name to check
    ///
    /// \return array of function printing string
    ///
    ////////////////////////////////////////////////////////////
    char *__py__fcnt_display(char **array);

    char *__py__var_from_value(int nb, char *values);
    char *__py__values_from_var(int nb, char *values);

#endif
