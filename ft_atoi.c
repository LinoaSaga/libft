/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:15:21 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/25 09:47:16 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	res;
	int		signe;
	size_t	k;

	res = 0;
	signe = 1;
	k = 0;
	while ((nptr[k] >= 9 && nptr[k] <= 13) || nptr[k] == 32)
		k++;
	if (nptr[k] == '+' || nptr[k] == '-')
	{
		if (nptr[k] == '-')
			signe *= -1;
		k++;
	}
	while (nptr[k] >= '0' && nptr[k] <= '9')
	{
		res = res * 10 + (nptr[k] - 48);
		k++;
	}
	return (res * signe);
}
