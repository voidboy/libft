/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclerac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 13:33:34 by aclerac           #+#    #+#             */
/*   Updated: 2021/01/21 12:41:20 by aclerac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (!(p = malloc(len + 1)))
		return (NULL);
	p[len] = '\0';
	i = 0;
	if (start < ft_strlen(s))
	{
		while (s[start + i] && len--)
		{
			p[i] = s[start + i];
			++i;
		}
	}
	return (p);
}
