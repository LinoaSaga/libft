/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:47:53 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/28 14:43:02 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	tot_size;
	void	*res;
	size_t	max_size;

	max_size = (size_t)(-1);
	if (nmemb && max_size / nmemb < size)
		return (NULL);
	tot_size = nmemb * size;
	res = malloc(tot_size);
	if (!res)
		return (NULL);
	ft_bzero(res, tot_size);
	return (res);
}
