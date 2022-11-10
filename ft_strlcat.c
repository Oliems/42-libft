/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:19 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/10 11:54:35 by mbarberi         ###   ########.fr       */
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
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	dstsize = dstsize - ft_strlen(dst) - 1;
	while (*d)
		d++;
	while (dstsize > 0 && *s && *d)
	{
		*d++ = *s++;
		dstsize--;
	}
	*d = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
