/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:00:58 by mbarberi          #+#    #+#             */
/*   Updated: 2022/12/07 16:42:46 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Alloue (avec malloc(3)) et retourne un tableau de chaînes de caractères
** obtenu en séparant 's' à l'aide du caractère 'c', utilisé comme délimiteur.
** Le tableau doit être terminé par NULL.
*/

static void	*ft_free(char **list)
{
	int	i;

	i = 0;
	while (list[i])
		free(list[i++]);
	free(list);
	return (NULL);
}

/* counts the number of occurences of c in s */
static int	ft_count(const char *s, char c)
{
	int	i;
	int	last;

	i = 0;
	last = 1;
	while (*s)
	{
		if (*s != c && last)
			i++;
		last = (*s == c);
		s++;
	}
	return (i);
}

/* add a new string to the array of strings */
static int	add_array(const char *s, char c, char **arr)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	*arr = malloc(len + 1);
	if (!arr)
		return (0);
	ft_memcpy(*arr, s, len);
	(*arr)[len] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		last;
	char	**arr;

	if (!s)
		return (NULL);
	i = ft_count(s, c);
	arr = malloc(sizeof(char *) * (i + 1));
	if (!arr)
		return (NULL);
	arr[i] = 0;
	last = 1;
	i = 0;
	while (*s)
	{
		if (*s != c && last && !add_array(s, c, arr + i++))
			return (ft_free(arr));
		last = (*s == c);
		s++;
	}
	return (arr);
}
