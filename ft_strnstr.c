/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:00:33 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/24 17:10:37 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == 0)
		return ((char *)big);
	i = 0;
	while (big[i])
	{
		j = 0;
		while (j < len && big[i + j] == little[j] && big[i + j] && little[j])
			j++;
		if (j == len)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
