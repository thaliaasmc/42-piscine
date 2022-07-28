/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:03:43 by tsampaio          #+#    #+#             */
/*   Updated: 2022/07/28 03:47:39 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') ||	(*str >= 'A' && *str <= 'Z'))
			str++;
		else
			return (0);
	}
	return (1);
}

int main()
{
	char string[] = "Hello s";
	printf("%d", ft_str_is_alpha(string));
}
