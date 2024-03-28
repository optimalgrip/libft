/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apapalex <apapalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:19:20 by apapalex          #+#    #+#             */
/*   Updated: 2024/03/24 15:34:08 by apapalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_listnew(void *content, void (*del)(void *))
{
	t_list	*node;

	node = ft_lstnew(content);
	if (!node)
	{
		del(content);
		return (NULL);
	}
	return (node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	new_list = ft_listnew(f(lst->content), del);
	if (!new_list)
		return (NULL);
	head = new_list;
	lst = lst->next;
	while (lst)
	{
		new_list->next = ft_listnew(f(lst->content), del);
		if (!(new_list)->next)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new_list = new_list->next;
		lst = lst->next;
	}
	return (head);
}
