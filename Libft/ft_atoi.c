/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:45:55 by tsampaio          #+#    #+#             */
/*   Updated: 2022/10/12 17:27:25 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_error(int sign);

int	ft_atoi(const char *str)
{
	int	nbr;
	int	sign;
	int	nbr_len;

	nbr = 0;
	sign = 1;
	nbr_len = 0;
	while ((*str == ' ') || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		if (++nbr_len == 20)
			return (ft_error(sign));
		nbr = (*str - 48) + nbr * 10;
		str++;
	}
	return (nbr * sign);
}

static	int	ft_error(int sign)
{
	if (sign > 0)
		return (-1);
	else
		return (0);
}
