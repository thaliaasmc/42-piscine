/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:09:27 by tsampaio          #+#    #+#             */
/*   Updated: 2022/07/15 14:59:16 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_comb(void);

void	ft_put(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb(void)
{
	int	numb1;
	int	numb2;
	int	numb3;

	numb1 = '0';
	while (numb1 <= '7')
	{	
		numb2 = numb1 + 1;
		while (numb2 <= '8')
		{
			numb3 = numb2 + 1;
			while (numb3 <= '9')
			{					
				ft_put(numb1);
				ft_put(numb2);
				ft_put(numb3);
				if (numb1 == '7' && numb2 == '8' && numb3 == '9')
					return ;
				write(1, ", ", 2);
				numb3++;
			}
			numb2++;
		}
		numb1++;
	}
}
