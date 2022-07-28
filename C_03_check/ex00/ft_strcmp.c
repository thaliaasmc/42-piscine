/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:50:13 by tsampaio          #+#    #+#             */
/*   Updated: 2022/07/25 14:35:10 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 != '\0' || *s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
int main()
{
	char string[] = "cat12";
	char string2[] = "cat";
	int ret_strcmp;

	ret_strcmp = ft_strcmp(string, string2);
	if (ret_strcmp < 0)
		write (1, "String is less than String 2\n", 28);
	if (ret_strcmp > 0)
		write (1, "String2 is less than String\n", 28);
	if (ret_strcmp == 0)
		write(1, "String is equal String2", 23);
} */
