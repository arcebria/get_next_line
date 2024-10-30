#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

void	print_newline_helper(char *buff)
{
	while (*buff)
	{
		if (*buff == '\n')
			*buff = '\\';
		printf("%c", *buff);
		buff++;
	}
}
char	*get_next_line(int fd)
{
	int	bytes_read;
	char	*buff;
	static int	count = 0;

	printf("ft_calloc#[%d]---", count++);
	buff = calloc (BUFFER_SIZE + 1, sizeof(char));
	if (buff == NULL)
		return (NULL);
	bytes_read = read(fd, buff, BUFFER_SIZE);
	print_newline_helper(buff);
	if (bytes_read <= 0)
	{
		free(buff);
		return (NULL);
	}
	buff[bytes_read] = '\0';
	return (buff);
}



int     main()
{
        int     fd;
        int     count;
        char    *next_line;

        count = 0;
        fd = open("text.txt", O_RDONLY);
        if (fd == -1)
        {
                printf("Error en el archivo");
                return (1);
        }
        while (1)
        {
                next_line = get_next_line(fd);
                if (next_line == NULL)
                        break;
                count++;
                printf("|%d|: %s\n", count, next_line);
		free(next_line);
                next_line = NULL;
        }
	close(fd);
        return 0;
}
