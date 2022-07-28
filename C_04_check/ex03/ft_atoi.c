/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:54:57 by tsampaio          #+#    #+#             */
/*   Updated: 2022/07/27 14:09:59 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	spaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	is_neg;
	int	result;
	int	i;

	result = 0;
	is_neg = spaces(str, &i);
	while (str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= is_neg;
	return (result);
}
 
int main(void)
{
	char *s = "- - -0123457";
	printf("%d", ft_atoi(s));

	printf("\n%d", atoi(s));

	char string[] = "01234589";
	char string2[] = "-15454345";
	char string3[] = "42546464787678687687";
	char string4[] = "    -+---++1234    4545";

	printf("My: %d\t Atoi: %d\n", ft_atoi(string), atoi(string));
	printf("My: %d\t Atoi: %d\n", ft_atoi(string2), atoi(string2));
	printf("My: %d\t Atoi: %d\n", ft_atoi(string3), atoi(string3));
	printf("My: %d\t Atoi: %d\n", ft_atoi(string4), atoi(string4));


}
