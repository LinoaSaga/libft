/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:12:09 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/25 15:40:03 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	k;
	size_t	start_st;
	size_t	size_s;

	start_st = (size_t)start;
	size_s = ft_strlen(s);
	k = 0;
	while (start_st + k < size_s && k < len)
		k++;
	res = (char *) malloc((k + 1) * sizeof(char));
	if (!res)
		return (NULL);
	k = 0;
	while (start_st + k < size_s && k < len)
	{
		res[k] = s[start_st + k];
		k++;
	}
	res[k] = '\0';
	return (res);
}
