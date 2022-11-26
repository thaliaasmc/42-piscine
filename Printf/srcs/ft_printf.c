/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <tsampaio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:36:44 by tsampaio          #+#    #+#             */
/*   Updated: 2022/11/25 22:36:59 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		str_size;
	int		i;

	if (!str)
		return (-1);
	str_size = 0;
	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			str_size += ft_check_format(str[i], args);
		}
		else
		{
			str_size++;
			ft_putchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (str_size);
}
