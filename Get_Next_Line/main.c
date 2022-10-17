/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:52:21 by coder             #+#    #+#             */
/*   Updated: 2022/10/17 00:35:52 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
#endif

char		*get_next_line(int fd);
char		*gnl_strchr(const char *str, int argument);
size_t		gnl_strlcpy(char *dest, const char *src, size_t destsize);
char		*gnl_substr(char const *s, unsigned int start, size_t len);
char		*gnl_strjoin(const char *s1, const char *s2);
char		*gnl_strdup(char *src);

int	main(int argc, char **argv)
{
	int fd;
	int fd2;
	char *line;
	char *line2;

	fd = open("beggin.txt", O_RDONLY);
	line = "";
	(void)argc;
	fd2 = open(argv[1], O_RDONLY);
	line2 = "";
	if (fd < 0)
		printf("Erro no arquivo txt\n");
	if (fd2 < 0)
		printf("Erro no arquivo do input"); 
	if (fd > 1)
	{
		printf("Teste de arquivo iniciado\n\n");
		while (line != 0)
		{
			line = get_next_line(fd);
			printf("%s", line);
		}
		printf ("#####TESTE DO ARQUIVO FINALIZADO##### \n\n\n");
	}
	if (fd2 > 0)
	{	
		printf("#####TESTE DO INPUT INICIADO#####\n\n");
		while (line2 != 0)
		{
			line2 = get_next_line(fd2);
			printf("%s", line2);
		}
		printf("\n#####TESTE DO INPUT FINALIZADO#####");
	}		
}

static void	free_ptr(char **ptr)
{
	free(*ptr);
	*ptr = NULL;
}

static char	*get_line(char **backup, char **line)
{
	char	*next_backup;
	int	i;

	i = 0;
	next_backup = NULL;
	while (*(*backup + i) != '\n' && *(*backup + i) != '\0')
		i++;
	if (*(*backup + i) == '\n')
	{
		i++;
		*line = gnl_substr(*backup, 0, i);
		next_backup = gnl_strdup(*backup + i);
	}
	else
		*line = gnl_strdup(*backup);
	free_ptr(backup);
	return (next_backup);
}

static int	read_line(int fd, char **buffer, char **backup, char **line)
{
	int	bytes_read;
	char	*temporary;

	bytes_read = 1;
	while (!gnl_strchr(*backup, '\n') && bytes_read)
	{
		bytes_read = read(fd, *buffer, BUFFER_SIZE);
		(*buffer)[bytes_read] = '\0';
		temporary = *backup;
		*backup = gnl_strjoin(temporary, *buffer);
		free(temporary);
	}
	free_ptr(buffer);
	*backup = get_line(backup, line);
	if (!(**line))
		free_ptr(line);
	return (bytes_read);
}

char	*get_next_line(int fd)
{
	static char	*buffer_backup = NULL;
	char		*buffer;
	char		*line;

	if (fd < 0 || fd >= 1024 || BUFFER_SIZE <= 0 )
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	if (read(fd, buffer, 0) < 0)
	{
		free(buffer);
		return (NULL);
	}
	if (!buffer_backup)
		buffer_backup = gnl_strdup("");
	if (!read_line(fd, &buffer, &buffer_backup, &line) && !line)
		return (NULL);
	return (line);
}

char	*gnl_strchr(const char *str, int argument)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char) str[i] == (unsigned char)argument)
			return ((char *) &str[i]);
		i++;
	}
	if (argument == '\0')
		return ((char *) &str[i]);
	return ((void *) 0);
}

size_t	gnl_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	src_length;

	i = 0;
	src_length = 0;
	while (src[src_length])
		src_length++;
	if (destsize <= 0)
		return (src_length);
	while (src[i] && i < destsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_length);
}

char	*gnl_strdup(char *src)
{
	size_t	i;
	size_t	len;
	char	*dup;

	i = 0;
	len = 0;
	if (!src)
		return (NULL);
	while (src[len])
		len++;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		++i;
	}
	dup[i] = '\0';
	return (dup);
}

char	*gnl_substr(char const *s, unsigned int start, size_t len)
{
	size_t	substr_length;
	size_t	s_length;
	char	*substr;

	if (!s)
		return (NULL);
	s_length = 0;
	while (s[s_length])
		s_length++;
	substr_length = s_length - start;
	if (s_length > start)
	{
		if (substr_length > len)
			substr = (char *) malloc(sizeof(char) * (len + 1));
		else
			substr = (char *) malloc(sizeof(char) * (substr_length + 1));
		if (!substr)
			return (NULL);
		gnl_strlcpy(substr, &s[start], len + 1);
	}
	else
		substr = gnl_strdup("");
	return (substr);
}

char	*gnl_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = 0;
	s2_len = 0;
	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;
	str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!str)
		return (NULL);
	gnl_strlcpy(str, s1, s1_len + 1);
	gnl_strlcpy(&str[s1_len], s2, s1_len + s2_len + 1);
	return (str);
}
