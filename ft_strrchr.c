/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:40 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/14 13:51:57 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strrchr() function locates the last occurrence of c (converted to a
** char) in the string s.  If c is `\0', strrchr() locates the terminating
** `\0'.
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = (char *)s + ft_strlen(s) + 1;
	while (*p != (char)c)
	{
		if (p-- <= s)
			return (NULL);
	}
	return (p);
}
