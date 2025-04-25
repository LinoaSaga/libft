/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:11:50 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/25 13:00:19 by ljudd            ###   ########.fr       */
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
		if (src[k] == (char)c)
			return (&src[k]);
	}
	if ((char)c == 0)
		return (&src[k]);
	return (NULL);
}
