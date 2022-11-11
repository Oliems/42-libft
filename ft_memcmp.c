/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:57:10 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/11 15:20:34 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The memcmp() function compares byte string b1 against byte string b2.
** Both strings are assumed to be len bytes long.
*/
int		ft_memcmp(const void *b1, const void *b2, size_t len)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)b1;
	p2 = (const unsigned char *)b2;

	while (len--)
		if (*p1++ != *p2++)
		{
			if ((*(p1 - 1) - *(p2 - 1)) > 0)
				return (1);
			else
				return (-1);
		}
	return (0);
}
