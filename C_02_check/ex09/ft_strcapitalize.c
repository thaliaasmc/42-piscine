/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:47:39 by tsampaio          #+#    #+#             */
/*   Updated: 2022/07/24 17:50:21 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		if (str[size] >= 'A' && str[size] <= 'Z')
			str[size] += 32;
		size++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	s;
	int	s2;

	s = 0;
	s2 = 1;
	ft_strlowcase(str);
	while (str[s] != '\0')
	{
		if (str[s] >= 'a' && str[s] <= 'z')
		{
			if (s2 == 1)
					str[s] -= 32;
				s2 = 0;
		}
		else if (str[s] >= '0' && str[s] <= '9')
			s2 = 0;
		else
			s2 = 1;
		s++;
	}
	return (str);
}
