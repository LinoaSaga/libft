/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 10:07:35 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/25 10:11:11 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	k;
	size_t	n;
	char	*res;

	n = ft_strlen(s);
	res = (char *) malloc((n + 1) * sizeof(char));
	if (!res)
		return (NULL);
	k = -1;
	while (++k < n)
		res[k] = s[k];
	res[k] = '\0';
	return (res);
}
