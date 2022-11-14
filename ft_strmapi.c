/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:29 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/14 11:22:11 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applique la fonction ’f’ à chaque caractère de la
** chaîne de caractères passée en argument pour créer
** une nouvelle chaîne de caractères (avec malloc(3))
** résultant des applications successives de ’f’.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*p;

	i = 0;
	p = ft_strdup(s);
	if (!s || !p)
		return (NULL);
	while (p[i])
	{
		p[i] = (f)(i, p[i]);
		i++;
	}
	return (p);
}
