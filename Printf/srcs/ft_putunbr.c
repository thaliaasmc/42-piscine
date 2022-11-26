/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <tsampaio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:39:29 by tsampaio          #+#    #+#             */
/*   Updated: 2022/11/25 22:39:36 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int	num;

	num = 0;
	if (n >= 10)
		num += ft_putunbr(n / 10);
	num += ft_putchar(n % 10 + '0');
	return (num);
}
