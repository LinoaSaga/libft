/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:04:15 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/24 15:19:58 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	k;
	size_t	n;
	char	*src;

	n = ft_strlen(s);
	src = (char *)s;
	if (c == 0)
		return (&src[n - 1]);
	k = n;
	while (--k > 0)
	{
		if (src[k] == c)
			return (&src[k]);
	}
	return (NULL);
}
