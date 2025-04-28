/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:41:03 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/25 15:48:55 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size_s1;
	size_t	size_s2;
	size_t	k;
	char	*res;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	res = (char *) malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (!res)
		return (NULL);
	k = 0;
	while (k < size_s1 + size_s2)
	{
		if (k < size_s1)
			res[k] = s1[k];
		else
			res[k] = s2[k - size_s1];
		k++;
	}
	res[k] = '\0';
	return (res);
}
