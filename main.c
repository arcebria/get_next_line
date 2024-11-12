/*#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int	main(int ac, char **av)
{
	int		fd;
	int		fd2;
	int		fd3;
	int		count;
	char	*line;

	count = 1;
	if (ac == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_RDONLY);
	fd3 = open(av[3], O_RDONLY);
	if (fd == -1 || fd2 == -1 || fd3 == -1)
		write(1, "Cannot read file.\n", 18);
	while (fd && fd2 && fd3)
	{
		line = get_next_line(fd);
		line = get_next_line(fd2);
		line = get_next_line(fd3);
		if (line)
		{
			free(line);
			printf("line [%d]: %s", count, line);
			printf("------------\n");
			if (line == NULL)
			break ;
			
			printf("line [%d]: %s", count, line);
			printf("------------\n");
			if (line == NULL)
			break ;
			
			printf("line [%d]: %s", count, line);
			printf("------------\n");
			count++;
			line = NULL;
		}
	}
	count = 1;
	close(fd);
	close(fd2);
	close(fd3);
	return (0);
}*/

#include"get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

#define END "\033[m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"

#define ligth "\033[1m"
#define dark  "\033[2m"
#define italic "\033[3m"

int	main(void)
{
	int	fd = open("text.txt", O_RDONLY);
	int fd1 = open("text2.txt", O_RDONLY);
	char	*line;
	int i = 1;

	line = NULL;
	if (fd < 0)
	{
		printf(RED"Error!!"YELLOW"-->memory allocation\n"END);
		return (0);
	}
	printf(BLUE"FD [giant_line.txt]\n"END);
	while (i < BUFFER_SIZE)
	{
		line = get_next_line(fd1);
		printf("line ["YELLOW"%d"END"]"GREEN" content :"END"%s", i++, line);
		printf(YELLOW"\n-->"END"numbers bytes ["GREEN ligth"%lu"END"]\n",ft_strlen(line));
		if (line == NULL)
			break ;
	}
	i = 1;
	printf(BLUE"\nFD [multiple_nl.txt]\n"END);
	while (i < BUFFER_SIZE)
	{
		line = get_next_line(fd);
		printf("line ["YELLOW"%d"END"]"GREEN" content :"END"%s", i++, line);
		printf(YELLOW"\n-->"END"numbers bytes ["GREEN ligth"%lu"END"]\n",ft_strlen(line));
		if (line == NULL)
			break ;
	}
	free(line);
	return (0);
}