/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclerac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 11:18:39 by aclerac           #+#    #+#             */
/*   Updated: 2021/01/22 07:18:01 by aclerac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		neg;
	int		num;

	num = 0;
	neg = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			neg = 1;
	while ((*str >= '0' && *str <= '9') && *str)
		num = num * 10 + (*str++ - '0');
	if (neg)
		return (-num);
	else
		return (num);
}
