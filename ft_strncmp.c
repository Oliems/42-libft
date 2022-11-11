/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:32 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/11 17:21:03 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strncmp() function lexicographically compare the nul-terminated strings
** s1 and s2.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	const char	*p1;
	const char	*p2;

	p1 = s1;
	p2 = s2;
	while (len--)
	{
		if (*p1++ != *p2++)
		{
			if ((*(unsigned char *)(p1 - 1) - *(unsigned char *)(p2 - 1)) > 0)
				return (1);
			else
				return (-1);
		}
	}
	return (0);
}
