/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:53:30 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/07 13:53:36 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The abs() function computes the absolute value of the integer i. */
unsigned int ft_abs(int i)
{
  if (i < 0)
    return (-((unsigned int)(i)));
  else
    return (+((unsigned int)(i)));
}
