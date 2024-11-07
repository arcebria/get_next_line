#include "get_next_line.h"

size_t  ft_strlen(char *s)
{
    size_t  i;

    while (s[i])
        i++;
    return (i);
}

char    *ft_strchr(char *s, int c)
{
    size_t  i;
    char    ch;

    ch = c;
    i = 0;
    if ((ch == '\0'))
        return (*s + ft_strlen(s));
    while (s[i])
    {
        if (s[i] == ch)
            return (*s + i);
        i++;
    }
    return (NULL);
}

char    *ft_calloc(int x, int y)
{
    char    *buff;
    int i;

    buff = malloc(x * y);
    if (!buff)
        return(NULL);
    while (i < (x * y))
    {
        buff[i] = '\0';
        i++;
    }
    return (buff);
}

char    *ft_strjoin(char *s1, char *s2)
{
    
}
