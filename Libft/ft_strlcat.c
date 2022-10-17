/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:44:37 by tsampaio          #+#    #+#             */
/*   Updated: 2022/10/12 17:32:11 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_length;
	size_t	src_length;
	size_t	expected_dest_size;

	i = 0;
	dest_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (dstsize > dest_length)
	{
		expected_dest_size = dest_length + src_length;
		while (src[i] && dest_length < dstsize - 1)
			dst[dest_length++] = src[i++];
		dst[dest_length] = 0;
		return (expected_dest_size);
	}
	else
		return (src_length + dstsize);
}
