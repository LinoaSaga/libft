/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:04:27 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/25 12:39:14 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	k;

	if (!dest && !src)
		return (NULL);
	k = -1;
	while (++k < n)
		((char *)dest)[k] = ((char *)src)[k];
	return (dest);
}
