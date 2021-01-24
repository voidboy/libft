/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclerac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 07:27:27 by aclerac           #+#    #+#             */
/*   Updated: 2021/01/20 11:50:08 by aclerac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	rec_ft_putnbr(unsigned int nb, int fd)
{
	char c;

	if (nb)
	{
		c = '0' + (nb % 10);
		rec_ft_putnbr(nb / 10, fd);
		write(fd, &c, 1);
	}
}

void		ft_putnbr_fd(int nb, int fd)
{
	unsigned int wrapper;

	wrapper = nb;
	if (nb < 0)
	{
		write(fd, "-", 1);
		wrapper = -nb;
	}
	if (nb == 0)
		write(fd, "0", 1);
	else
		rec_ft_putnbr(wrapper, fd);
}
