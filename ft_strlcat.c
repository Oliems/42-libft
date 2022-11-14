/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:19 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/14 10:29:26 by mbarberi         ###   ########.fr       */
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
	size_t		size;
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	size = dstsize - ft_strlen(dst) - 1;
	if (size > dstsize)
		return (ft_strlen(dst) + ft_strlen(src));
	while (*d)
		d++;
	while (size-- > 0 && *s)
		*d++ = *s++;
	*d = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
