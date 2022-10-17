/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:45:24 by tsampaio          #+#    #+#             */
/*   Updated: 2022/10/12 17:33:05 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	find_size;

	i = 0;
	find_size = ft_strlen(little);
	if (!find_size)
		return ((char *) big);
	if (!len)
		return (0);
	while (big[i] && i + find_size <= len)
	{
		if (!ft_strncmp(&big[i], little, find_size))
			return ((char *) &big[i]);
		i++;
	}
	return (0);
}
