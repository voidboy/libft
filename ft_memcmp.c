/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclerac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 07:09:13 by aclerac           #+#    #+#             */
/*   Updated: 2021/01/22 07:33:19 by aclerac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *foo;
	unsigned char *bar;

	foo = (unsigned char *)s1;
	bar = (unsigned char *)s2;
	if (!n)
		return (0);
	while (--n && (*bar == *foo))
	{
		bar++;
		foo++;
	}
	return (*foo - *bar);
}
