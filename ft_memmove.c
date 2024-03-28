/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apapalex <apapalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:07:05 by apapalex          #+#    #+#             */
/*   Updated: 2024/03/14 15:22:27 by apapalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dst;
	const char	*sr;

	dst = (char *)dest;
	sr = (const char *)src;
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			dst[i - 1] = sr[i - 1];
			i--;
		}
	}
	else
	{
		return (ft_memcpy(dest, src, n));
	}
	return (dest);
}
