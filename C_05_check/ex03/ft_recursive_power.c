/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:12:19 by tsampaio          #+#    #+#             */
/*   Updated: 2022/07/28 11:43:53 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power -1));
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(10, 5));
	printf("%d\n", ft_recursive_power(10, 3));
	printf("%d\n", ft_recursive_power(9, 5));
	printf("%d\n", ft_recursive_power(4, 9));
	printf("%d\n", ft_recursive_power(0, 1));
}*/
