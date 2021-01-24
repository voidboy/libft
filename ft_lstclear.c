/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclerac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 09:25:09 by aclerac           #+#    #+#             */
/*   Updated: 2021/01/20 16:33:23 by aclerac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *p;
	t_list *tmp;

	p = *lst;
	while (p)
	{
		del(p->content);
		tmp = p->next;
		free(p);
		p = tmp;
	}
	*lst = NULL;
}
