/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:45:36 by tsampaio          #+#    #+#             */
/*   Updated: 2022/07/28 11:44:22 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int main()
{
	printf("%d\n", ft_sqrt(17));
	printf("%d\n", ft_sqrt(-17));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(-9));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(81));
}*/
