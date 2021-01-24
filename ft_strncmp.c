/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclerac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 09:55:53 by aclerac           #+#    #+#             */
/*   Updated: 2021/01/22 07:43:04 by aclerac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	if (n)
		while ((s1[i] == s2[i]) && s1[i] != '\0' && --n)
			i++;
	else
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
