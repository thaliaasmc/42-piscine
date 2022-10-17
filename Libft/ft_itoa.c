/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:18:39 by tsampaio          #+#    #+#             */
/*   Updated: 2022/10/12 17:29:23 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*str_complete(char *str, int ten, long int cpy_n, int i)
{
	while (ten >= 1)
	{
	str[i] = '0' + (cpy_n / ten);
	cpy_n = cpy_n - (cpy_n / ten) * ten;
	ten = ten / 10;
	i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int			signal_loc;
	int			ten;
	char		*str;
	int			i;
	long int	cpy_n;

	signal_loc = 0;
	ten = 1;
	i = 1;
	cpy_n = n;
	if (cpy_n < 0)
	{
		signal_loc = 1;
		cpy_n = cpy_n * -1;
	}
	while (ten <= cpy_n / 10)
	{
		ten = ten * 10;
		i++;
	}
	str = (char *) malloc(sizeof(char) * (i + signal_loc + 1));
	if (signal_loc == 1)
		str[0] = '-';
	str_complete(str, ten, cpy_n, signal_loc);
	return (str);
}
