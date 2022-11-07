/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:09 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/07 14:01:10 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strdup() function allocates sufficient memory for a copy of
** the string s1, does the copy, and returns a pointer to it. The
** pointer may subsequently be used as an argument to the function
** free(3).
*/
char *ft_strdup(const char *s1)
{
  char *s2;

  s2 = (char *) ft_strlen(s1) + 1;
  if (s2 != NULL)
    ft_strlcpy(s2, s1, sizeof(s2));
  return (s2);
}
