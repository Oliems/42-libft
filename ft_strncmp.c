/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:32 by mbarberi          #+#    #+#             */
/*   Updated: 2022/12/07 17:06:40 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strncmp() function lexicographically compare the nul-terminated strings
** s1 and s2.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	char	*p1;
	char	*p2;

	if (!len)
		return (0);
	p1 = (char *)s1;
	p2 = (char *)s2;
	while (1)
	{
		if (*p1 != *p2++)
			return (*(unsigned char *)p1 - *(unsigned char *)--p2);
		if (!*p1++)
			break ;
		if (!--len)
			break ;
	}
	return (0);
}
