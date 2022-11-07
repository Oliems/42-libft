/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:00:46 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/07 17:00:31 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_putstr_fd() function writes a string (not including the NULL
** character) to the destination corresponding to the file descriptor.
** If it succeeds, the return value is the number of characters
** written, if not it returns EOF.
*/
void	ft_putstr_fd(char *s, int fd)
{
  char *p;

  p = str;
  while (*p && ft_putchar_fd(fd, *p))
    p++;
  if (!*p)
    return (p - str);
  else
    return (EOF);
}
