/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclerac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:18:55 by aclerac           #+#    #+#             */
/*   Updated: 2021/01/22 07:33:33 by aclerac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *copy;

	if (n && (!dst && !src))
		return (NULL);
	copy = dst;
	while (n--)
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	return (copy);
}
