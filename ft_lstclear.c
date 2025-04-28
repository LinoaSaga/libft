/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:50:50 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/28 13:53:48 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur_node;
	t_list	*next_node;

	cur_node = *lst;
	while (cur_node)
	{
		next_node = cur_node->next;
		(*del)(cur_node->content);
		free(cur_node);
		cur_node = next_node;
	}
	*lst = NULL;
}
