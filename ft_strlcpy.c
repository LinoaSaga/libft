/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:35:59 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/24 13:50:06 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	k;
	size_t	size_src;

	size_src = ft_strlen(src);
	if (size_src == 0)
		return (0);
	k = 0;
	while (src[k] && k < siz - 1)
	{
		dst[k] =src[k];
		k++;
	}
	dst[k] = '\0';
	return (size_src);
}
