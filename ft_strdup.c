/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:09 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/08 14:13:40 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strdup() function allocates sufficient memory for a copy of
** the string str, does the copy, and returns a pointer to it. The
** pointer may subsequently be used as an argument to the function
** free(3).
*/
char	*ft_strdup(const char *str)
{
  char *p;

  p = malloc(ft_strlen(str) + 1);
  if (!p)
  	return (NULL);
    ft_strlcpy(p, str, sizeof(p));
  return (p);
}
