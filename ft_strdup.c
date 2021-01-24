/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclerac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 11:39:39 by aclerac           #+#    #+#             */
/*   Updated: 2021/01/21 11:48:37 by aclerac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	int		len;
	char	*p;

	len = ft_strlen(src);
	if ((p = malloc(len + 1)) == NULL)
		return (NULL);
	else
		return (ft_strcpy(p, src));
}
