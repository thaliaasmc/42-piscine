/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <tsampaio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:37:30 by tsampaio          #+#    #+#             */
/*   Updated: 2022/11/25 22:39:19 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putnbr(int n)
{
	int	num;

	num = 0;
	if (n < 0)
	{
		num += ft_putchar('-');
		n *= -1;
		if (n == -2147483648)
		{
			num += ft_putchar('2');
			n = 147483648;
		}
	}
	if (n < 10)
		num += ft_putchar(n + '0');
	else
	{
		num += ft_putnbr(n / 10);
		num += ft_putnbr(n % 10);
	}
	return (num);
}
