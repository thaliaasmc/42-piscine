/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:41:05 by tsampaio          #+#    #+#             */
/*   Updated: 2022/07/28 09:52:54 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str);

char *ft_strdup(char *str)
{
	int	size_of_str;
	char *string;
	int	i;
	
	i = 0;
	size_of_str = ft_strlen(str);
	string = (char*) malloc(size_of_str + 1);
	while (str[i] != '\0')
	{
		string[i] = str[i];
		i++;
	}
	return (string);
}

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main()
{
	printf("%s", ft_strdup("Hello World"));

}
