/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclerac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 10:48:06 by aclerac           #+#    #+#             */
/*   Updated: 2021/01/21 14:40:18 by aclerac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*to_find)
		return ((char *)str);
	while (i < len && str[i])
	{
		j = 0;
		while (i + j < len && str[i + j] && (str[i + j] == to_find[j]))
		{
			if (to_find[j + 1] == '\0')
				return ((char *)(str + i));
			++j;
		}
		++i;
	}
	return (NULL);
}
