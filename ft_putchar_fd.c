/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:00:26 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/07 14:00:27 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_putchar_fd() function writes a character to the destination
** corresponding file descriptor. For example, 0 is the stdin, 1 is
** the stdout and 2 is stderr.
*/
int ft_putchar_fd(int fd, int c)
{
  if (write(fd, &c, 1))
    return (c);
  else
    return (EOF);
}
