/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 22:38:21 by coder             #+#    #+#             */
/*   Updated: 2022/10/16 22:38:23 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*aux;

	lst_new = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		aux = ft_lstnew(f(lst->content));
		if (!aux)
			ft_lstclear(&aux, del);
		lst = lst->next;
		ft_lstadd_back(&lst_new, aux);
	}
	return (lst_new);
}
