/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 04:03:39 by tsampaio          #+#    #+#             */
/*   Updated: 2022/07/25 14:50:14 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * #include <unisdt.h>
 * #include <stdio.h>
 * #include <string.h>
 * void ft_putstr(char *str);
 * */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size;
	unsigned int	size2;

	size = 0;
	size2 = 0;
	while (dest[size] != '\0')
	{
		size++;
	}
	while (src[size2] != '\0' && size2 < nb)
	{
		dest[size] = src[size2];
		size++;
		size2++;
	}
	dest[size] = '\0';
	return (dest);
}
/*
int main()
{
	char stringsrc[] = "Hello World!";
	char stringdest[20] = "\nOlá Mundo!\n";

	strncat(stringdest, stringsrc, 3);
	ft_putstr(stringdest);

	write(1, "\nMy code:\n", 9);

	char stringsrc2[] = "Hello World!";
	char stringdest2[20] = "\nOlá Mundo!\n";

	ft_strncat(stringdest2, stringsrc2, 5);
	ft_putstr(stringdest2);
}

void ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}

}*/
