/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:31:56 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/28 13:34:51 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		res;
	t_list	*cur_node;

	res = 0;
	cur_node = lst;
	while (cur_node)
	{
		res++;
		cur_node = cur_node->next;
	}
	return (res);
}
