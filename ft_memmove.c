/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:08:27 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/25 14:00:15 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	k;

	if (!dest && !src)
		return (NULL);
	if (src < dest)
	{
		k = n + 1;
		while (--k > 0)
			((char *)dest)[k - 1] = ((char *)src)[k - 1];
	}
	else
	{
		k = -1;
		while (++k < n)
			((char *)dest)[k] = ((char *)src)[k];
	}
	return (dest);
}
