/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apapalex <apapalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:55:24 by apapalex          #+#    #+#             */
/*   Updated: 2024/03/24 15:08:33 by apapalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// instead of looping all overthe element
// we check if
// there is a next element in the list ,if not
// that means we
// reached the end we have to return the current pointer
// if we looped over the element directly like for
// ft_lstsize
// we would be returning NULL all the time

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
