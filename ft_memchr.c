/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:32:42 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/24 16:36:25 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	k;
	char	*src;

	k = -1;
	src = (char *)s;
	while (++k < n)
	{
		if ((unsigned char)src[k] == (unsigned char) c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
