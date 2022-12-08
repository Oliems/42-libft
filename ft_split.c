/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:00:58 by mbarberi          #+#    #+#             */
/*   Updated: 2022/12/08 19:16:57 by mbarberi         ###   ########.fr       */
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

static char *create_tab(char **s, int c)
{
	char *buf;
	char *pb;
	char *ps;

	if (**s == c)
		*s += 1;
	ps = *s;
	while (*ps && (*ps != c))
		ps++;
	buf = malloc((sizeof(char) * (ps - *s)) + 1);
	if (!buf)
		return (NULL);
	pb = buf;
	while (**s && (**s != c))
	{
		*pb++ = **s;
		*s += 1;
	}
	*pb = '\0';
	return (buf);
}

char **ft_split(char const *s, char c)
{
	int		wc;
	char	*ps;
	char	**t;
	char	**pt;

	if (!s)
		return (NULL);
	if (!*s)
		return (NULL); /* should return a char** with only a \0 */
	wc = count_words(s, c);
	t = malloc(wc + 1);
	if (!t)
		return (NULL);
	pt = t;
	ps = (char *)s;
	while (wc)
	{
		*pt = create_tab(&ps, c);
		if (!*pt++)
			return (NULL); // free everything and return
		wc--;
	}
	*pt = ft_strdup("\0");
	return (t);
}

// break if c is in first place in the string
int main(void)
{
	int i = 0;
	char **p;
	// n = 5, ns = 6, c = 30
	p = ft_split("This is a very important test!", ' ');
	while (p[i])
	{
		printf("%s\n", p[i]);
		i++;
	}
	return (0);
}
