/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclerac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 10:10:03 by aclerac           #+#    #+#             */
/*   Updated: 2021/01/21 12:13:51 by aclerac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *d, const char *s, size_t size)
{
	unsigned int	size_s;
	int				i;

	if (!d || !s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	size_s = i;
	i = 0;
	if (size_s + 1 < size)
		ft_strncpy(d, s, size_s + 1);
	else if (size != 0)
	{
		ft_strncpy(d, s, size - 1);
		d[size - 1] = '\0';
	}
	return (size_s);
}
