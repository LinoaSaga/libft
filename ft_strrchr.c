/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:04:15 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/25 13:52:24 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	n;
	char	*src;

	n = ft_strlen(s);
	src = (char *)(s + n);
	if ((char)c == 0)
		return (src);
	while (--src > s - 1)
	{
		if (*src == (char)c)
			return (src);
	}
	return (NULL);
}
