/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclerac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 19:16:07 by aclerac           #+#    #+#             */
/*   Updated: 2021/01/22 07:22:54 by aclerac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		num_len(int n)
{
	int len;

	len = 1;
	while (n /= 10)
		len++;
	return (len);
}

static void		rec_itoa(char *p, unsigned int n, int len)
{
	if (n / 10)
	{
		p[--len] = '0' + n % 10;
		n = n / 10;
		rec_itoa(p, n, len);
	}
	else
		p[0] = '0' + n;
}

char			*ft_itoa(int n)
{
	unsigned int	num;
	unsigned int	len;
	char			*p;

	len = num_len(n);
	if (n < 0)
		p = malloc(len + 2);
	else
		p = malloc(len + 1);
	if (!p)
		return (NULL);
	p[len] = '\0';
	num = n;
	if (n < 0)
	{
		p[len + 1] = '\0';
		p[0] = '-';
		num = -n;
		rec_itoa(p + 1, num, len);
	}
	else
		rec_itoa(p, num, len);
	return (p);
}
