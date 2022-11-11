/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:59:57 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/11 14:26:44 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_putendl_fd() function writes the string `s' to the corresponding file
** descriptor, followed by a newline.
*/
void	ft_putendl_fd(char *s, int fd)
{
	char	*p;

	p = s;
	while (*p)
		ft_putchar_fd(*p++, fd);
	ft_putchar_fd('\n', fd);
}
