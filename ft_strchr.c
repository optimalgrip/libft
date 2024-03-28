/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apapalex <apapalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 22:25:41 by apapalex          #+#    #+#             */
/*   Updated: 2024/03/14 21:08:50 by apapalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*buffer;
	char	uc;

	uc = (char)c;
	buffer = (char *)str;
	while (*buffer != '\0')
	{
		if (*buffer == uc)
			return (buffer);
		if (!*buffer)
			return (NULL);
		buffer++;
	}
	if (*buffer == uc)
		return (buffer);
	return (NULL);
}
