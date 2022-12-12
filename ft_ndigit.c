/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ndigit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:08:51 by mbarberi          #+#    #+#             */
/*   Updated: 2022/12/12 17:23:27 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* compute the number of digits in a number, including the minus sign if n < 0 */
int	ft_ndigit(int n)
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
