/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apapalex <apapalex@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:42:37 by apapalex          #+#    #+#             */
/*   Updated: 2024/03/21 22:13:31 by apapalex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*ss;
	char			*ret;

	ss = s;
	ret = NULL;
	while (*ss != '\0')
	{
		if (*ss == (char)c)
			ret = (char *)ss;
		ss++;
	}
	if (*ss == (char)c)
		ret = (char *)ss;
	return (ret);
}
