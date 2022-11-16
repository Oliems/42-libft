/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:56:32 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/16 14:01:47 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Using malloc(3), allocate enough memory to store a string representing `n'
** and return a pointer to the string.
*/

/* The abs() function computes the absolute value of the integer n. */
static size_t	ft_abs(int n)
{
	if (n < 0)
		return (-((size_t)(n)));
	else
		return (+((size_t)(n)));
}

/* computes the number of digits in a number */
static int	ft_nlen(int n)
{
	int	l;

	l = 0;
	if (n <= 0)
		l += 1;
	while (n)
	{
		l++;
		n /= 10;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	int		l;
	size_t	nb;
	char	*s;

	l = ft_nlen(n);
	s = malloc(l + 1);
	if (!s)
		return (NULL);
	s[l] = '\0';
	if (n < 0)
		s[0] = '-';
	else if (n == 0)
		s[0] = '0';
	nb = ft_abs(n);
	while (nb)
	{
		s[--l] = nb % 10 + '0';
		nb /= 10;
	}
	return (s);
}
