/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_convpct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:16:52 by ljudd             #+#    #+#             */
/*   Updated: 2025/06/16 14:03:45 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printf_writepct(va_list *args, int *n_print, t_printf to_print)
{
	ft_printf_putchar(to_print.fd, '%', n_print);
	(void) to_print;
	(void) args;
}
