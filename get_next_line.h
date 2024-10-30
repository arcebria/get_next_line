/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arcebria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:51:26 by arcebria          #+#    #+#             */
/*   Updated: 2024/10/30 20:34:25 by arcebria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>

char    *get_next_line(int fd);
char    *ft_strjoin(char *s1, char *s2);
void    *ft_calloc(size_t nmemb, size_t size);
size_t  ft_strlen(const char *str);
void    *ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strchr(char *s, int c);
#endif
