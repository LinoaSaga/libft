/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_convc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:37:04 by ljudd             #+#    #+#             */
/*   Updated: 2025/06/16 14:03:59 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Functions to write the % for the given conversion specifier part 1*/

#include "libft.h"

void	ft_printf_writec(va_list *args, int *n_print, t_printf to_print)
{
	unsigned char	s;
	int				n_space;

	s = (unsigned char) va_arg(*args, int);
	n_space = to_print.field_width - 1;
	if (!(to_print.flag_minus) && n_space > 0)
		ft_printf_putcharn(to_print.fd, ' ', n_print, n_space);
	ft_printf_putchar(to_print.fd, s, n_print);
	if (to_print.flag_minus && n_space > 0)
		ft_printf_putcharn(to_print.fd, ' ', n_print, n_space);
}
