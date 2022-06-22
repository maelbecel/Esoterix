/*
** @maelbecel\Esoterix
** python_parser.c
** File description:
** Parser python
*/

#include "esoterix.h"


static int getsizefile(char *file)
{
    struct stat st;
    stat(file, &st);
    return st.st_size;
}

char *buff_from_file(char *file)
{
    char *buffer = NULL;
    int fd = open(file, O_RDONLY);
    int size = getsizefile(file);

    if (fd == -1)
        return (NULL);
    buffer = malloc(sizeof(char) * (size + 1));
    read(fd, buffer, size);
    buffer[size] = '\0';
    close(fd);
    return (buffer);
}
