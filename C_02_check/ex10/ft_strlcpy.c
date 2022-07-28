/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 03:23:09 by tsampaio          #+#    #+#             */
/*   Updated: 2022/07/20 05:18:46 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	size1;
	unsigned int	lenght;

	lenght = ft_strlen (src);
	size1 = 0;
	if (size != 0)
	{
		while (src[size1] != '\0' && size1 < size -1)
		{
			dest[size1] = src[size1];
			size1++;
		}
		dest[size1] = '\0';
	}
	return (lenght);
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}
