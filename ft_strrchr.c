/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclerac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 09:44:05 by aclerac           #+#    #+#             */
/*   Updated: 2021/01/22 07:38:20 by aclerac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;

	p = (char *)s;
	i = 0;
	while (p[i])
		i++;
	if (!c)
		return (&p[i]);
	while (i && p[i] != c)
		i--;
	if (p[i] == c)
		return (&p[i]);
	else
		return (NULL);
}
