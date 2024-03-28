/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apapalex <apapalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:45:13 by apapalex          #+#    #+#             */
/*   Updated: 2024/03/23 16:48:03 by apapalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// // loop over the list 
// // set the tmp to point to the next element of the list 
// // use ft_lstdelone on the current element of the list 
// // set the list pointer equal to temp,so that 
// we have a pointer to the next element
// // free the list pointer and set it NULL

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*prev;

	if (lst && del)
	{
		tmp = *lst;
		prev = *lst;
		while (tmp)
		{
			del(tmp->content);
			tmp = tmp->next;
			free(prev);
			prev = tmp;
		}
		*lst = NULL;
	}
}
