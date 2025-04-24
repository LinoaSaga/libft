/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:37:16 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/24 17:00:14 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	k;
	char	*src1;
	char	*src2;

	if (n == 0)
		return (0);
	k = -1;
	src1 = (char *)s1;
	src2 = (char *)s2;
	while (++k < n)
	{
		if ((unsigned char)src1[k] != (unsigned char)src2[k])
			return ((unsigned char)src1[k] - (unsigned char)src2[k]);
	}
	return ((unsigned char)src1[k] - (unsigned char)src2[k]);
}
