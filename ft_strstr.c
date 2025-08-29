/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 10:18:31 by ljudd             #+#    #+#             */
/*   Updated: 2025/08/29 11:34:51 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int		k;
	int		j;

	k = -1;
	if (!to_find || !to_find[0])
		return (str);
	while (str[++k])
	{
		j = -1;
		while (to_find[++j])
		{
			if (str[k + j] != to_find[j])
				break ;
		}
		if (!to_find[j])
			return (&str[k]);
	}
	return (NULL);
}
