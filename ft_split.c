/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:00:58 by mbarberi          #+#    #+#             */
/*   Updated: 2022/12/07 20:35:09 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/*
** Alloue (avec malloc(3)) et retourne un tableau de chaînes de caractères
** obtenu en séparant 's' à l'aide du caractère 'c', utilisé comme délimiteur.
** Le tableau doit être terminé par NULL.
*/
size_t	ft_strlen(const char *s)
{
	const char	*p;

	p = s;
	while (*p)
		p++;
	return ((size_t)(p - s));
}

void	ft_bzero(void *b, size_t len)
{
	void	*p;

	p = b;
	if (!len)
		return ;
	while (len--)
		*(char *)p++ = '\0';
}

void	*ft_calloc(size_t number, size_t size)
{
	void	*p;

	p = malloc(number * size);
	if (!p)
		return (NULL);
	ft_bzero(p, number * size);
	return (p);
}

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char		*d;
	char		*s;

	if (!dst && !src)
		return (NULL);
	d = (char *)dst;
	s = (char *)src;
	while (len--)
		*d++ = *s++;
	return (dst);
}

char	*ft_strdup(const char *str)
{
	size_t	l;
	char	*p;

	l = ft_strlen(str);
	p = malloc(l + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, str, l);
	p[l] = '\0';
	return (p);
}

static int count_words(char const *s, char c)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (s[i])
		if (s[i++] == c)
			n++;
	return (n + 1);
}
char **ft_split(char const *s, char c)
{
	char **p;
	char *buf;
	int i;
	int j;
	int k;
	int wc;

	if (!s)
		return (NULL);
	if (!*s)
		return (NULL); /* should return a char** with only a \0 */
	wc = count_words(s, c);
	p = malloc(wc + 1);
	buf = ft_calloc(1, (ft_strlen(s) + 1));
	i = 0;
	j = 0;
	k = 0;
	while (i < wc)
	{
		while (s[j] && (s[j] != c))
			buf[k++] = s[j++];
		buf[k] = '\0';
		p[i] = ft_strdup(buf);
		if (!p[i])
			return (NULL); // free everything and return
		ft_bzero(buf, k);
		k = 0;
		i++;
		j++;
	}
	p[wc] = ft_strdup("\0");
	free(buf);
	return (p);
}


int main(void)
{
	char **p;
	// n = 5, ns = 6, c = 30
	p = ft_split("This is a very important test!", ' ');
	while (*p)
		printf("%s\n", *p++);
/* 	// n = 0, ns = 1
	ft_split("This", ' ');
	// n = 1, ns = 2
	ft_split("This is", ' ');
	// n = 2, ns = 3 -> This, is, \0, \0
	ft_split("This is ", ' '); */
}
