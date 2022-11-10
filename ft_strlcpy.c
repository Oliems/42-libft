/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:22 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/10 10:55:57 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strlcpy() function copies up to size - 1 characters from the
** NUL-terminated string src to dst, NUL-terminating the result.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*pdst;
	const char	*psrc;
	size_t		i;

	i = 0;
	pdst = dst;
	psrc = src;
	while (*psrc && (i++ <= dstsize - 1))
		*pdst++ = *psrc++;
	*pdst = '\0';
	return (ft_strlen(src));
}
