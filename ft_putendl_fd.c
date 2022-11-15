/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:59:57 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/15 16:37:23 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_putendl_fd() function writes the string `s' to the corresponding file
** descriptor, followed by a newline.
*/
void	ft_putendl_fd(char *s, int fd)
{
	if (s && fd)
		write(fd, s, ft_strlen(s));
	ft_putchar_fd('\n', fd);
}
