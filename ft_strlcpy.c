/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:22 by mbarberi          #+#    #+#             */
/*   Updated: 2022/12/07 17:04:15 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strlcpy() function copies up to size - 1 characters from the
** NUL-terminated string src to dst, NUL-terminating the result.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int			l;
	char		*d;
	char		*s;

	d = dst;
	s = (char *)src;
	l = ft_strlen(src);
	if (!dstsize)
		return (l);
	dstsize -= 1;
	while (dstsize-- && *s)
		*d++ = *s++;
	*d = '\0';
	return (l);
}
