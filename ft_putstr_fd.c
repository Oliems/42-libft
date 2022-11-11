/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:00:46 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/11 14:24:07 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_putstr_fd() function writes the string `s' to the corresponding file
** descriptor.
*/
void	ft_putstr_fd(char *s, int fd)
{
	char	*p;

	p = s;
	while (*p)
		ft_putchar_fd(*p++, fd);
}
