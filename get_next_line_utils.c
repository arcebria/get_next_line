#include "get_next_line.h"

size_t  ft_strlen(char *s)
{
    size_t  i;

    i = 0;
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
        return ((char *)s + ft_strlen(s));
    while (s[i])
    {
        if (s[i] == ch)
            return ((char *)s + i);
        i++;
    }
    return (NULL);
}

char    *ft_calloc(size_t x, size_t y)
{
    void    *buff;
    size_t i;

    buff = malloc(x * y);
    if (!buff)
        return(NULL);
    i = 0;
    while (i < (x * y))
    {
        ((char *)buff)[i] = '\0';
        i++;
    }
    return (buff);
}

char    *ft_strjoin(char *s1, char *s2)
{
    size_t i;
    size_t j;
    char    *str;

    if (!s1)
        s1 = ft_calloc(1, sizeof(char));
    if (!s1 || !s2)
        return (NULL);
    str = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
    if (!str)
        return(NULL);
    i = 0;
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }    
    j = 0;
    while (s2[j])
        str[i++] = s2[j++];
    free(s1);
    return (str);
}
