/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:53:58 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/28 13:06:55 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_fd_rec(unsigned int n, int fd)
{
	if (n > 9)
		ft_putnbr_fd_rec(n / 10, fd);
	ft_putchar_fd((n % 10) + 48, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		write(fd, "-", 1);
		nb = -((unsigned int) n);
	}
	else
		nb = n;
	ft_putnbr_fd_rec(nb, fd);
}
