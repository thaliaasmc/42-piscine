/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:43:07 by tsampaio          #+#    #+#             */
/*   Updated: 2022/10/12 17:27:31 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (size > (~(1 << 31) / count))
		return (NULL);
	mem = malloc (size * count);
	if (mem != NULL)
		ft_bzero(mem, (count * size));
	return (mem);
}
