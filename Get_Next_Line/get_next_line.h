/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 00:53:24 by coder             #+#    #+#             */
/*   Updated: 2022/10/17 00:53:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char		*get_next_line(int fd);
char		*gnl_strchr(const char *str, int argument);
size_t		gnl_strlcpy(char *dest, const char *src, size_t destsize);
char		*gnl_substr(char const *s, unsigned int start, size_t len);
char		*gnl_strjoin(const char *s1, const char *s2);
char		*gnl_strdup(char *src);

#endif
