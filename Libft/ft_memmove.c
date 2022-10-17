/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:43:30 by tsampaio          #+#    #+#             */
/*   Updated: 2022/10/12 17:30:07 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_ptr;
	const char	*src_ptr;

	dst_ptr = (char *) dst;
	src_ptr = (const char *) src;
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			dst_ptr[len] = src_ptr[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
