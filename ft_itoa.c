/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:07:35 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/28 10:35:37 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_size(int n)
{
	long	size;
	long	nb;

	size = 1;
	if (n < 0)
		size++;
	nb = n;
	while (nb > 9 || nb < -9)
	{
		size++;
		nb /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	size;
	long	nb;
	char	*res;

	size = ft_size(n);
	res = (char *) malloc((size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		nb = -((long)n);
	}
	else
		nb = n;
	res[size] = '\0';
	while (nb > 9)
	{
		res[--size] = (nb % 10) + 48;
		nb /= 10;
	}
	res[--size] = nb + 48;
	return (res);
}
