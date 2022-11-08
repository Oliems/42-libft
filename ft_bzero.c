/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:54:02 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/08 13:57:51 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The bzero() function writes len zero bytes to the string b.  If len is
** zero, bzero() does nothing.
*/
void	ft_bzero(void *b, size_t len)
{
	void *p;

	p = b;
	if (len == 0)
		return;
	while ((size_t)(p - b) != len)
	{
		*(char *)p = '\0';
		p++;
	}
}
