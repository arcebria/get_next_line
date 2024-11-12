#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 1024
# endif

char    *get_next_line(int fd);
size_t  ft_strlen(char *s);
char    *ft_strchr(char *s, int c);
char    *ft_strjoin(char *s1, char *s2);
char    *ft_calloc(size_t x, size_t y);
char    *read_line(int fd, char *static_line);
char    *get_line(char *static_line);
char    *update_line(char *static_line);
char    *ft_free(char  **s1, char **s2);

#endif