/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrind.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:11:50 by ljudd             #+#    #+#             */
/*   Updated: 2025/06/02 19:14:46 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strchrind :
	similar to strchr, but instead of returning a pointer to the first reference
	return instead the index, return -1 if not found
*/
size_t	ft_strchrind(const char *s, int c)
{
	size_t	k;
	char	*src;

	k = -1;
	src = (char *)s;
	while (src[++k])
	{
		if (src[k] == (char)c)
			return (k);
	}
	if ((char)c == 0)
		return (0);
	return (-1);
}
