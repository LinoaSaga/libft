/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:46:47 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/25 10:55:22 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	k;
	size_t	l_src;
	size_t	l_dst;

	l_src = ft_strlen(src);
	l_dst = ft_strlen(dst);
	if (l_dst >= siz)
		return (l_src + siz);
	k = 0;
	while (src[k] && (l_dst + k) < (siz - 1))
	{
		dst[l_dst + k] = src[k];
		k++;
	}
	dst[l_dst + k] = '\0';
	return (l_dst + l_src);
}
