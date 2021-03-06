/*
** EPITECH PROJECT, 2022
** star.c
** File description:
** star.c
*/

#ifndef FORMATSTRING_H_
    #define FORMATSTRING_H_
    #include <stdarg.h>
    #include <unistd.h>

    ////////////////////////////////////////////////////////////
    /// \brief Struct for a flag,
    ///
    /// Contains a pointer on function for the flag and the flag
    ///
    ////////////////////////////////////////////////////////////
    struct fflags {
        char *(*func)(va_list);
        char flag;
    };

    ////////////////////////////////////////////////////////////
    /// \brief Format binary representation
    ///
    /// \param va_list
    ///
    /// \return String of the binary
    ///
    ////////////////////////////////////////////////////////////
    char *fdisplaybinary(va_list argv);

    ////////////////////////////////////////////////////////////
    /// \brief Format char representation
    ///
    /// \param va_list
    ///
    /// \return String of the char
    ///
    ////////////////////////////////////////////////////////////
    char *fdisplaychar(va_list argv);

    ////////////////////////////////////////////////////////////
    /// \brief Format decimal representation
    ///
    /// \param va_list
    ///
    /// \return String of the decimal
    ///
    ////////////////////////////////////////////////////////////
    char *fdisplaynbr_dec(va_list argv);

    ////////////////////////////////////////////////////////////
    /// \brief Format hexadecimal capital representation
    ///
    /// \param va_list
    ///
    /// \return String of the hexadecimal
    ///
    ////////////////////////////////////////////////////////////
    char *fdisplaynbr_hexa_capital(va_list argv);

    ////////////////////////////////////////////////////////////
    /// \brief Format hexadecimal capital representation
    ///
    /// \param va_list
    ///
    /// \return String of the hexadecimal
    ///
    ////////////////////////////////////////////////////////////
    char *fdisplaynbr_hexa_capital_hashtag(va_list argv);

    ////////////////////////////////////////////////////////////
    /// \brief Format hexadecimal representation
    ///
    /// \param va_list
    ///
    /// \return String of the hexadecimal
    ///
    ////////////////////////////////////////////////////////////
    char *fdisplaynbr_hexa(va_list argv);

    ////////////////////////////////////////////////////////////
    /// \brief Format hexadecimal representation
    ///
    /// \param va_list
    ///
    /// \return String of the hexadecimal
    ///
    ////////////////////////////////////////////////////////////
    char *fdisplaynbr_hexa_hashtag(va_list argv);

    ////////////////////////////////////////////////////////////
    /// \brief Format octal representation
    ///
    /// \param va_list
    ///
    /// \return String of the octal
    ///
    ////////////////////////////////////////////////////////////
    char *fdisplaynbr_octal(va_list argv);

    ////////////////////////////////////////////////////////////
    /// \brief Format octal representation
    ///
    /// \param va_list
    ///
    /// \return String of the octal
    ///
    ////////////////////////////////////////////////////////////
    char *fdisplaynbr_octal_hashtag(va_list argv);

    ////////////////////////////////////////////////////////////
    /// \brief Format nb representation
    ///
    /// \param va_list
    ///
    /// \return String of the nb
    ///
    ////////////////////////////////////////////////////////////
    char *fdisplaynbr_long(va_list argv);

    ////////////////////////////////////////////////////////////
    /// \brief Format percent representation
    ///
    /// \param va_list
    ///
    /// \return String of the percent
    ///
    ////////////////////////////////////////////////////////////
    char *fdisplaypercent(__attribute__((unused))va_list argv);

    ////////////////////////////////////////////////////////////
    /// \brief Format pointer representation
    ///
    /// \param va_list
    ///
    /// \return String of the pointer
    ///
    ////////////////////////////////////////////////////////////
    char *fdisplaypointer(va_list argv);

    ////////////////////////////////////////////////////////////
    /// \brief Format unprintable representation
    ///
    /// \param va_list
    ///
    /// \return String of the unprintable
    ///
    ////////////////////////////////////////////////////////////
    char *fdisplaystr_unprintable(va_list argv);

    ////////////////////////////////////////////////////////////
    /// \brief Format octal representation
    ///
    /// \param va_list
    ///
    /// \return String of the octal
    ///
    ////////////////////////////////////////////////////////////
    char *fdisplayoctal(int nb);

    ////////////////////////////////////////////////////////////
    /// \brief Fusion of two strings
    ///
    /// \param a first string
    /// \param b second string
    ///
    /// \return String of the fusion
    ///
    ////////////////////////////////////////////////////////////
    char *fus(char *a, char *b);

    ////////////////////////////////////////////////////////////
    /// \brief Format string representation
    ///
    /// \param va_list
    ///
    /// \return String of the string
    ///
    ////////////////////////////////////////////////////////////
    char *fdisplaystr(va_list argv);

    ////////////////////////////////////////////////////////////
    /// \brief Format nbr representation
    ///
    /// \param va_list
    ///
    /// \return String of the nbr
    ///
    ////////////////////////////////////////////////////////////
    char *fdisplaynbr(va_list argv);

    ////////////////////////////////////////////////////////////
    /// \brief Format string representation
    ///
    /// \param str   string to format
    /// \param ...   list of arguments
    ///
    /// \return String of the string
    ///
    ////////////////////////////////////////////////////////////
    char *format(char const *str, ...);

#endif
