/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclerac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 10:30:20 by aclerac           #+#    #+#             */
/*   Updated: 2021/01/22 07:37:01 by aclerac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	siz_src;

	i = 0;
	while (dest[i] != '\0')
		i++;
	siz_src = 0;
	while (src[siz_src] != '\0')
		++siz_src;
	if (size <= i)
		siz_src += size;
	else
		siz_src += i;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (siz_src);
}
