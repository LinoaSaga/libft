/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_convp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:00:50 by ljudd             #+#    #+#             */
/*   Updated: 2025/06/16 14:07:39 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_printf_sizep(unsigned long long p)
{
	int	res;

	if (p == 0)
		return (5);
	res = 2;
	while (p != 0)
	{
		res++;
		p /= 16;
	}
	return (res);
}

static void	ft_printf_putp(int fd,
	unsigned long long p, int *n_print, char *digits)
{
	if (p > 15)
		ft_printf_putp(fd, p / 16, n_print, digits);
	ft_printf_putchar(fd, digits[p % 16], n_print);
}

void	ft_printf_writep(va_list *args, int *n_print, t_printf to_print)
{
	unsigned long long	p;
	int					n_space;

	p = va_arg(*args, unsigned long long);
	n_space = to_print.field_width - ft_printf_sizep(p);
	if (!(to_print.flag_minus) && n_space > 0)
		ft_printf_putcharn(to_print.fd, ' ', n_print, n_space);
	if (p == 0)
		ft_printf_putstrc(to_print.fd, "(nil)", n_print);
	else
	{
		ft_printf_putstrc(to_print.fd, "0x", n_print);
		ft_printf_putp(to_print.fd, p, n_print, "0123456789abcdef");
	}
	if (to_print.flag_minus && n_space > 0)
		ft_printf_putcharn(to_print.fd, ' ', n_print, n_space);
}
