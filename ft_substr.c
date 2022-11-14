/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:46 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/14 15:20:35 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Alloue (avec malloc(3)) et retourne une chaîne de caractères issue de la
** chaîne ’s’. Cette nouvelle chaîne commence à l’index ’start’ et a pour taille
** maximale ’len’.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char	*p;

	i = start;
	if (start > ft_strlen(s))
		return (NULL);
	p = malloc(len - start);
	if (!p)
		return (NULL);
	while (i < len)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
