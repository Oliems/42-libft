/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:57:20 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/10 13:07:12 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The memset() function writes len bytes of value c (converted to an
** unsigned char) to the string b.
*/
void	*ft_memset(void *b, int c, size_t len)
{
	void	*p;

	p = b;
	if (len == 0)
		return (b);
	while (len--)
		*(unsigned char *)p++ = (unsigned char)c;
	return (b);
}
