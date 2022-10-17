/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 18:57:02 by tsampaio          #+#    #+#             */
/*   Updated: 2022/07/27 23:18:07 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include <string.h>
// #include <stdio.h>
 #include <unistd.h> 

char	*ft_strstr(char *str, char *to_find)
{
	int	size;
	int	size2;

	size = 0;
	if (to_find[size] == '\0')
		return (str);
	while (str[size] != '\0')
	{
		size2 = 0;
		while (str[size + size2] == to_find[size2]
			&& str[size + size2] != '\0')
		{
			if (to_find[size2 + 1] == '\0')
				return (&str[size]);
			size2++;
		}
		size++;
	}
	return (0);
}
/*
int main ()
{
	char	src[] = "thaliasmc@gmail.com";
	char	to_find[] = "@";
	char	*ret;

	ret = strstr (src, to_find);
	printf("The substring is: %s", ret);

	char	src2[] = "thaliasmc@gmail.com";
	char	to_find2[] = "@";
	char *ret2;
	char *pointer1;
	char *pointer2;

	pointer1 = src2;
	pointer2 = to_find2;
	ret2 = ft_strstr(pointer1, pointer2);
	printf("\nThe substring is: %s", ret2);
}*/
