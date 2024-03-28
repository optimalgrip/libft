/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apapalex <apapalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:09:16 by apapalex          #+#    #+#             */
/*   Updated: 2024/03/19 13:37:44 by apapalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *c)
{
	size_t	len;

	len = 0;
	while (c[len] != '\0')
		len++;
	return (len);
}
