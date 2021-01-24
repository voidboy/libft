/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclerac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:33:14 by aclerac           #+#    #+#             */
/*   Updated: 2021/01/22 07:53:22 by aclerac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict d, const void *restrict s, int c, size_t n)
{
	unsigned char *dst;
	unsigned char *src;

	dst = (unsigned char *)d;
	src = (unsigned char *)s;
	while (n--)
	{
		if (*src == (unsigned char)c)
		{
			*dst++ = *src;
			return (dst);
		}
		*dst++ = *src++;
	}
	return (NULL);
}
