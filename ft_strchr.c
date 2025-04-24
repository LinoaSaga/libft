/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:11:50 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/24 15:20:50 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	k;
	char	*src;

	k = -1;
	src = (char *)s;
	while (src[++k])
	{
		if (src[k] == c)
			return (&src[k]);
	}
	if (c == 0)
		return (&src[k]);
	return (NULL);
}
