/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:32 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/16 12:56:13 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strncmp() function lexicographically compare the nul-terminated strings
** s1 and s2.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (len-- && (*p1++ == *p2++) && *p1 && *p2)
		;
	if (*(p1 - 1) - *(p2 - 1) > 0)
		return (1);
	else if (*(p1 - 1) - *(p2 - 1)  < 0)
		return (-1);
	else
		return (0);
}
