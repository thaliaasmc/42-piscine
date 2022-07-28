/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:15:18 by tsampaio          #+#    #+#             */
/*   Updated: 2022/07/17 22:17:09 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	alloc;

	n = 0;
	while (n < (size / 2))
	{
		alloc = tab[n];
		tab[n] = tab[size - 1 - n];
		tab [size - 1 - n] = alloc;
		n++;
	}
}
