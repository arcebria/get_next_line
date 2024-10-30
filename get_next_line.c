/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arcebria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:47:39 by arcebria          #+#    #+#             */
/*   Updated: 2024/10/30 20:39:19 by arcebria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>

char	*get_next_line(int fd)
{
	static char	*line;
	int		bytes_read;
	int		i;
	char	*buff;

	buff = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!buff)
		return (NULL);
	if (!line)
		line = ft_calloc(1,1);
	//bytes_read = read(fd, buff, BUFFER_SIZE);
	bytes_read = 1;
	i = 0;
	while (bytes_read > 0 && (!ft_strchr(line, '\n')))
	{
		bytes_read = read(fd, buff, BUFFER_SIZE);
		buff[bytes_read] = '\0';
		line = ft_strjoin(line, buff);
		//printf("esto es buffer %s\n", buff);
	}
	//printf("esto es buffer %s", buff);
	return (line);

	/*while (buff[i])
	{
		if (buff[i] == '\n')
		{
			buff[bytes_read] = '\0';
			//printf("Soy el buffer: |%s|\n", buff);
			return (buff);
		}
		i++;
	}
	line = ft_strjoin(line, buff);
	line[bytes_read] = '\0';
	//printf ("Soy la line: |%s|\n", line);
	return (line);*/
}
int main(void)
{
	char	*line;
	int fd = open("text.txt", O_RDONLY);
	if (fd == -1)
		return (-1);
//	printf("line = %s", get_next_line(fd));
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	free(line);
	close(fd);
	return (0);
}
/*
int	main()
{	
	int	fd;
	char	*next_line;

	fd = open("text.txt", O_RDONLY);
	if (!fd)
	{
		printf("Error en el archivo");
		return (1);
	}
	while (read(fd, next_line, ))
		printf("%s", get_next_line(fd));
	close (fd);
	return 0;
}*/
