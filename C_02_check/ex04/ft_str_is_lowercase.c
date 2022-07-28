/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:12:55 by tsampaio          #+#    #+#             */
/*   Updated: 2022/07/20 11:52:25 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		if (str[size] >= 'a' && str[size] <= 'z')
			size++;
		else
			return (0);
	}
	return (1);
}
