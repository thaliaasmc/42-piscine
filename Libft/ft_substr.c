/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:01:51 by tsampaio          #+#    #+#             */
/*   Updated: 2022/10/12 17:33:33 by tsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	substr_length;
	char	*substr;

	if (!s)
		return (NULL);
	substr_length = ft_strlen(s) - start;
	if (ft_strlen(s) > start)
	{
		if (substr_length > len)
			substr = (char *) ft_calloc(len + 1, sizeof(char));
		else
			substr = (char *) ft_calloc(substr_length + 1, sizeof(char));
		if (!substr)
			return (NULL);
		ft_strlcpy(substr, &s[start], len + 1);
	}
	else
		substr = (char *) ft_calloc(1, sizeof(char));
	return (substr);
}
