/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:36:44 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/28 10:43:20 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	char	*res;
	size_t	k;

	size = ft_strlen(s);
	res = (char *) malloc((size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	k = -1;
	while (++k < size)
		res[k] = (*f)(k, s[k]);
	res[k] = '\0';
	return (res);
}
