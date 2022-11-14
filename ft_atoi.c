/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:53:46 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/14 14:54:49 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The atoi(3) function converts the initial portion of the nptring pointed to
** by nptr to integer representation.
*/
static int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r');
}

int	ft_atoi(const char *nptr)
{
	int			x;
	int			sign;
	const char	*p;

	x = 0;
	sign = 1;
	p = nptr;
	while (ft_isspace(*p))
		p++;
	if (*p == '-')
		sign *= -1;
	if (*p == '-' || *p == '+')
		p++;
	while (ft_isdigit(*p))
	{
		x *= 10;
		x += *p - '0';
		p++;
	}
	return (x * sign);
}
