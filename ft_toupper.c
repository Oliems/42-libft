/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:56 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/07 14:01:57 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The toupper() function converts a lower-case letter to the
** corresponding upper-case letter.
*/
int ft_toupper(int c)
{
  if (ft_islower(c))
    return (c - 32);
  else
    return (c);
}
