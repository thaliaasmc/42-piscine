/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 03:00:18 by tsampaio          #+#    #+#             */
/*   Updated: 2022/07/25 14:48:18 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <string.h>
#include <unistd.h>
void ft_putstr(char *str);
*/
char	*ft_strcat(char *dest, char *src)
{
	int	destlenght;	
	int	srclenght;

	destlenght = 0;
	srclenght = 0;
	while (dest[destlenght] != '\0')
	{
		destlenght++;
	}
	while (src[srclenght] != '\0')
	{
		dest[destlenght] = src[srclenght];
		destlenght++;
		srclenght++;
	}
	dest[destlenght] = '\0';
	return (dest);
}

/*
int main ()
{

	char stringsrc [24] = " Mundo";
	char stringdest [24] = "Hello";

	strcat(stringdest, stringsrc);
	ft_putstr (stringdest);


	char stringsrc2 [24] = "Mundo";
	char stringdest2 [15] = "Hello ";

	write (1, "\n", 1);
	ft_strcat(stringdest2, stringsrc2);
	ft_putstr (stringdest2);

	return (0);
}

void ft_putstr(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		write (1, &str[size], 1);
		size++;
	}
}*/
