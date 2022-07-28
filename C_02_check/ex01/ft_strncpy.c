/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:01:31 by tsampaio          #+#    #+#             */
/*   Updated: 2022/07/20 10:24:36 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{	
	unsigned int	size;

	size = 0;
	while (src[size] && size < n)
	{
		dest[size] = src[size];
		size++;
	}
	while (size < n)
	{
		dest[size] = '\0';
		size++;
	}
	return (dest);
}
