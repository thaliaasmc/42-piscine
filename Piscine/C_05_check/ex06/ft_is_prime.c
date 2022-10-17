/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:47:09 by tsampaio          #+#    #+#             */
/*   Updated: 2022/07/28 11:44:40 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(113));
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(112));
	printf("%d\n", ft_is_prime(332));
	printf("%d\n", ft_is_prime(16));
	printf("%d\n", ft_is_prime(82));
}*/
