/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclerac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 09:48:32 by aclerac           #+#    #+#             */
/*   Updated: 2021/01/20 16:36:30 by aclerac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *top_lst;
	t_list *current;

	top_lst = NULL;
	while (lst)
	{
		if ((current = ft_lstnew(f(lst->content))) == NULL)
		{
			if (top_lst)
				ft_lstclear(&top_lst, del);
			return (NULL);
		}
		if (!top_lst)
			top_lst = current;
		else
			ft_lstadd_back(&top_lst, current);
		lst = lst->next;
	}
	return (top_lst);
}
