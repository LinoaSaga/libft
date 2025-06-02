/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:34:23 by ljudd             #+#    #+#             */
/*   Updated: 2025/06/02 15:35:02 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	k;

	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (-1);
	if (!s2)
		return (1);
	k = 0;
	while (s1[k] && s2[k])
	{
		if (s1[k] != s2[k])
			return ((unsigned char)s1[k] - (unsigned char)s2[k]);
		k++;
	}
	return ((unsigned char)s1[k] - (unsigned char)s2[k]);
}
