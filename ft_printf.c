/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:33:20 by ljudd             #+#    #+#             */
/*   Updated: 2025/06/16 13:58:45 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* function to handle the % */
void	ft_printf_core(int fd, const char **s, va_list *args, int *n_print)
{
	t_printf	to_print;

	to_print.fd = fd;
	ft_printf_init(&to_print);
	while (ft_printf_isflag(s))
		ft_printf_getflag(&to_print, s);
	if (**s >= '1' && **s <= '9')
		ft_printf_getfield(&to_print, s);
	if (**s == '.')
		ft_printf_getprecision(&to_print, s);
	if (ft_printf_isconv(s))
		(*ft_printf_getconv(s))(args, n_print, to_print);
}

int	ft_dprintf(int fd, const char *s, ...)
{
	int		res;
	va_list	args;

	res = 0;
	if (!s)
		return (-1);
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			ft_printf_core(fd, &s, &args, &res);
		}
		else
			ft_printf_putchar(fd, *(s++), &res);
	}
	va_end(args);
	return (res);
}

int	ft_printf(const char *s, ...)
{
	int		res;
	va_list	args;

	res = 0;
	if (!s)
		return (-1);
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			ft_printf_core(0, &s, &args, &res);
		}
		else
			ft_printf_putchar(0, *(s++), &res);
	}
	va_end(args);
	return (res);
}
