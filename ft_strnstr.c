/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:36 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/11 11:37:39 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strnstr() function locates the first occurrence of the
** NUL-terminated string little in the string big, where not more than len
** characters are searched.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*b;
	const char	*l;
	const char	*head;

	if (!*little)
		return ((char *)big);
	if (!*big || !len)
		return (NULL);
	head = big;
	while (*head && len--)
	{
		b = head;
		l = little;
		while (*b && *l && (*b == *l) && len)
		{
			b++;
			l++;
			len--;
		}
		if (*l == '\0')
			return ((char *)(head));
		head++;
	}
	return (NULL);
}
