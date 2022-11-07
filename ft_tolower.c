/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:50 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/07 14:01:51 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The tolower() function converts an upper-case letter to the
** corresponding lower-case letter.
*/
int ft_tolower(int c)
{
  if (ft_isupper(c))
    return (c + 32);
  else
    return (c);
}
