/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apapalex <apapalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:45:00 by apapalex          #+#    #+#             */
/*   Updated: 2024/03/14 15:03:39 by apapalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_len;
	size_t	copy_len;
	size_t	i;

	dest_len = (size_t)ft_strlen(dest);
	src_len = (size_t)ft_strlen((char *)src);
	total_len = dest_len + src_len;
	if (size <= dest_len)
	{
		return (src_len + size);
	}
	copy_len = size - dest_len - 1;
	i = 0;
	while (i < copy_len && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (total_len);
}

// #include <stdlib.h>
// int main()
// {
// 	char dest[20] = "hello , ";
// 	char *src = "world";
// 	printf("%zu\n", ft_strlcat(dest, src, 14));
// 	printf("%s", dest);
// 	return 0;
// }