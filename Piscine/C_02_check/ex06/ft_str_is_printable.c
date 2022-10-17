/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:16:12 by tsampaio          #+#    #+#             */
/*   Updated: 2022/07/19 21:54:04 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{	
		if ((str[size] < 32) || (str[size] == 127))
			return (0);
		size++;
	}	
	return (1);
}
