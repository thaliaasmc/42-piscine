/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:40:15 by tsampaio          #+#    #+#             */
/*   Updated: 2022/07/28 11:51:21 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int main()
{
	printf("%d\n", ft_find_next_prime(2147483648));
	printf("%d\n", ft_find_next_prime(112));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(5));
	printf("%d\n", ft_is_prime(112));
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(112));
	printf("%d\n", ft_is_prime(332));
	printf("%d\n", ft_is_prime(16));
	printf("%d\n", ft_is_prime(82));
}*/
