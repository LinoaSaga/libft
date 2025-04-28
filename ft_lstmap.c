/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:57:53 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/28 15:15:35 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*new_node;
	void	*new_item;

	res = NULL;
	while (lst)
	{
		new_item = (*f)(lst->content);
		if (!new_item)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		new_node = ft_lstnew(new_item);
		if (!new_node)
		{
			ft_lstclear(&res, del);
			free(new_item);
			return (NULL);
		}
		ft_lstadd_back(&res, new_node);
		lst = lst->next;
	}
	return (res);
}
