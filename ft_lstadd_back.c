/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:41:08 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/28 13:46:17 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cur_node;

	cur_node = *lst;
	while (cur_node && cur_node->next)
		cur_node = cur_node->next;
	if (!cur_node)
		*lst = new;
	else
		cur_node->next = new;
}
