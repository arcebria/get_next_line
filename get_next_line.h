#ifndef GET_NEXT_LINE.H
# define GET_NEXT_LINE.H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

char    *get_next_line(int fd);
size_t  ft_strlen(char *s);
char    *ft_strchr(char *s, int c);
char    *ft_strjoin(char *s1, char *s2);
char    *ft_calloc(int x, int y);

#endif
