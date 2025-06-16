/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:14:21 by ljudd             #+#    #+#             */
/*   Updated: 2025/06/16 14:01:21 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* function to write a char and increment the total written counter*/
void	ft_printf_putchar(int fd, char c, int	*res)
{
	ft_putchar_fd(c, fd);
	(*res)++;
}

/* function to write n times a char and increment the total written counter*/
void	ft_printf_putcharn(int fd, char c, int *res, int n)
{
	while (n-- > 0)
		ft_printf_putchar(fd, c, res);
}

/* putstr with the counter*/
void	ft_printf_putstrc(int fd, char *s, int *res)
{
	while (*s)
	{
		ft_printf_putchar(fd, *s, res);
		s++;
	}
}
