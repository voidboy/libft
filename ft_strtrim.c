/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclerac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:09:52 by aclerac           #+#    #+#             */
/*   Updated: 2021/01/21 13:01:03 by aclerac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_in_set(char c, char const *set)
{
	unsigned int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char			*p;
	unsigned char	i;
	unsigned char	j;

	if (!s1)
		return (NULL);
	i = 0;
	while (ft_in_set(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	while (ft_in_set(s1[j], set))
		j--;
	if (!(p = malloc(sizeof(char) * (j - i + 2))))
		return (NULL);
	ft_strncpy(p, s1 + i, j - i + 1);
	p[j - i + 1] = '\0';
	return (p);
}
