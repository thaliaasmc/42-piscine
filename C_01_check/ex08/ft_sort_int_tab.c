/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:17:56 by tsampaio          #+#    #+#             */
/*   Updated: 2022/07/22 02:52:50 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	n;
	int	alloc;

	n = 0;
	while (n < size)
	{	
		if (tab[n] > tab[n + 1])
		{
			alloc = tab[n];
			tab[n] = tab[n + 1];
			tab[n + 1] = alloc;
			n = 0;
		}
		else
		{
		n++;
		}
	}
}

int main()
{
	int number[] = {1, 1, 1, -9, 2, 9, 20, -5, 1};
	int size;

	size = 0;
	ft_sort_int_tab(number, 9);
	while (number[size] <= 9)
	{
		printf("%d\n", number[size]);
		size++;
	}


	}	
