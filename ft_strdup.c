/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:09 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/08 14:09:46 by mbarberi         ###   ########.fr       */
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
  char *s2;

  s2 = (char *) ft_strlen(str) + 1;
  if (s2 != NULL)
    ft_strlcpy(s2, str, sizeof(s2));
  return (s2);
}
