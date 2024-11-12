#include "get_next_line.h"

char    *ft_free(char **s1, char **s2)
{
    if (s1 && *s1)
    {
        free(*s1);
        *s1 = NULL;
    }
    if (s2 && *s2)
    {
        free(*s2);
        *s2 = NULL;
    }
    return (NULL);
}

char    *update_line(char *static_line)
{
    int i;
    int j;
    char    *tmp;

    i = 0;
    while (static_line[i] && static_line[i] != '\n')
        i++;
    if (!static_line[i])
        return(ft_free(&static_line, NULL));
    tmp = ft_calloc(ft_strlen(static_line) - i + 1, sizeof(char));
    if (!tmp)
        return (NULL);
    j = 0;
    while (static_line[++i])
        tmp[j++] = static_line[i];
    free(static_line);
    return (tmp);
}
char    *get_line(char *static_line)
{
    int i;
    char    *line;

    i = 0;
    if (!static_line[i])
        return (NULL);
    while (static_line[i] && static_line[i] != '\n')
        i++;
    if (static_line[i] == '\n')
        i++;
    line = ft_calloc(i + 1, sizeof(char));
    if (!line)
        return (NULL);
    i = 0;
    while (static_line[i] && static_line[i] != '\n')
    {
        line[i] = static_line[i];
        i++;
    }
    if (static_line[i] == '\n')
        line[i] = '\n';
    return (line);
}

char    *read_line(int fd, char *static_line)
{
    char    *buff;
    int bytes_read;

    buff = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
    if (!buff)
        return (ft_free(&static_line, &buff));
    bytes_read = 1;
    while (bytes_read > 0 && !ft_strchr(buff, '\n'))
    {
        bytes_read = read(fd, buff, BUFFER_SIZE);
        if (bytes_read < 0)
            return (ft_free(&static_line, &buff));
        buff[bytes_read] = '\0';
        static_line = ft_strjoin(static_line, buff);
        if (!static_line)
            return (ft_free(&buff, NULL));
    }
    free(buff);
    return (static_line);
}

char    *get_next_line (int fd)
{
    static char *static_line[OPEN_MAX];
    char    *line_def;

    line_def = NULL;
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    while(!static_line[fd] || !ft_strchr(static_line[fd], '\n'))
        static_line[fd] = read_line(fd, static_line[fd]);
    if (!static_line[fd])
        return (NULL);
    line_def = get_line(static_line[fd]);
    static_line[fd] = update_line(static_line[fd]);
    return (line_def);
}