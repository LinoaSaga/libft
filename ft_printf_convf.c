/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_convf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 14:11:33 by ljudd             #+#    #+#             */
/*   Updated: 2025/06/06 14:02:34 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_printf_putf_int :
	Print the integer part of d
*/
static void	ft_printf_putf_int(double d, int *n_print, char *digits)
{
	int	int_part;

	int_part = (int) d % 10;
	if (int_part < 0)
		int_part += 10;
	if (d > 9)
		ft_printf_putf_int(d / 10, n_print, digits);
	ft_printf_putchar(digits[int_part], n_print);
}

/* ft_printf_putf_int :
	Print the decimal part of d
*/
static void	ft_printf_putf_dec(double d, int *n_print, char *digits)
{
	int	int_part;
	int	n;

	n = 0;
	int_part = (int) d;
	d = d - int_part;
	d *= 10;
	while (d != 0 && n < 6)
	{
		int_part = (int) d % 10;
		if (int_part < 0)
			int_part += 10;
		ft_printf_putchar(digits[int_part], n_print);
		d = d - int_part;
		d *= 10;
		n++;
	}
}

/* ft_printf_writef :
	Not handling flag ATM, made a simple version for fractol
*/
void	ft_printf_writef(va_list *args, int *n_print, t_printf to_print)
{
	double	d;

	(void) to_print;
	d = va_arg(*args, double);
	if (d < -1000000000 || d > 1000000000)
	{
		ft_printf_putstrc("Nan", n_print);
		return ;
	}
	if (d < 0)
	{
		ft_printf_putchar('-', n_print);
		d = -d;
	}
	ft_printf_putf_int(d, n_print, "0123456789");
	ft_printf_putchar('.', n_print);
	ft_printf_putf_dec(d, n_print, "0123456789");
}
