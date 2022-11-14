/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:19 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/14 13:41:45 by mbarberi         ###   ########.fr       */
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
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
		j++;
	if (dstsize < i)
		j += dstsize;
	else
		j += i;
	while (*src && i < (dstsize - 1) && dstsize != 0)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (j);
}
