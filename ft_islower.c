/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:54:57 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/07 16:06:16 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  The islower(3) function tests for any lower-case letters. */
int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
