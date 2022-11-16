/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:07:32 by jtoty             #+#    #+#             */
/*   Updated: 2022/11/16 17:53:11 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:53:46 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/16 16:41:07 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

/*
** The atoi(3) function converts the initial portion of the nptring pointed to
** by nptr to integer representation.
*/
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

static int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r');
}

int	ft_atoi(const char *nptr)
{
	long		x;
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
	return ((int)(x * sign));
}

int main(void)
{
	printf("atoi = %d\n", 		atoi("-11111111111111111111"));
	printf("ft_atoi = %d\n", ft_atoi("-11111111111111111111"));
}
