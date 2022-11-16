/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:19 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/16 13:35:42 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strlcat() function appends the NUL-terminated string src to the end
** of dst.  It will append at most size - strlen(dst) - 1 bytes,
** NUL-terminating the result.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		n;
	size_t		dlen;
	const char	*od;
	const char	*os;

	n = dstsize;
	od = dst;
	os = src;
	while (n-- && *dst)
		dst++;
	dlen = dst - od;
	n = dstsize - dlen;
	if (!n--)
		return (dlen + ft_strlen(src));
	while (*src)
	{
		if (n)
		{
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = '\0';
	return (dlen + (src - os));
}
