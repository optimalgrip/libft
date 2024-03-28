/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apapalex <apapalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:06:32 by apapalex          #+#    #+#             */
/*   Updated: 2024/03/23 16:20:58 by apapalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// loop while temp is not NULL
// apply the function f to the content of the current element
// set temp to point to the next element

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
