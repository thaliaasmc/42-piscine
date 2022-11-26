/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format_.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <tsampaio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:36:04 by tsampaio          #+#    #+#             */
/*   Updated: 2022/11/25 22:36:06 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_check_format(int c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_putptr(va_arg(args, unsigned long)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, unsigned int)));
	else if (c == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_puthexa(va_arg(args, unsigned int), 'x'));
	else if (c == 'X')
		return (ft_puthexa(va_arg(args, unsigned int), 'X'));
	else if (c == '%')
		return (ft_putchar('%'));
	return (c);
}
