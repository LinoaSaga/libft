/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:08:27 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/24 13:35:18 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	k;

	if (src < dest)
	{
		k = n;
		while (--k > 0)
			((char *)dest)[k] = ((char *)src)[k];
	}
	else
	{
		k = -1;
		while (++k < n)
			((char *)dest)[k] = ((char *)src)[k];
	}
	return (dest);
}
