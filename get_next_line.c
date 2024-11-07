#include "get_next_line.h"

char    *read_line(char *static_line)
{
    char    *buff;
    int bytes_read;


}

char    *get_next_line (int fd)
{
    static char *static_line;
    char    line_def;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);
    while(!static_line || !ft_strchr(static_line, '\n'))
        read_line(static_line);
}