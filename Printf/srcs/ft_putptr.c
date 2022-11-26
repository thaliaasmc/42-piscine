/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <tsampaio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:38:02 by tsampaio          #+#    #+#             */
/*   Updated: 2022/11/25 22:38:06 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putptr(unsigned long ptr)
{
	char	*base_hexa;
	int		i;

	i = 0;
	base_hexa = "0123456789abcdef";
	if (!ptr)
		return (write(1, "(nil)", 5));
	if (ptr < 16)
	{
		i += ft_putstr("0x");
		i += ft_putchar(base_hexa[ptr]);
		return (i);
	}
	i += ft_putptr(ptr / 16);
	i += ft_putchar(base_hexa[ptr % 16]);
	return (i);
}
