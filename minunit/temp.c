/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:07:32 by jtoty             #+#    #+#             */
/*   Updated: 2022/11/16 15:06:04 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "../libft.h"

void ft_print_result(int n)
{
	if (n > 0)
		write(1, "1", 1);
	else if (n < 0)
		write(1, "-1", 2);
	else
		write(1, "0", 1);
}

/* int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	const char	*p1;
	const char	*p2;

	if (!len)
		return (0);
	p1 = s1;
	p2 = s2;
	while (len-- && (*p1 == *p2) && *p1++ && *p2++)
		;
	if (*(unsigned char *)(p1) - *(unsigned char *)(p2) > 0 && len)
		return (1);
	else if (*(unsigned char *)(p1) - *(unsigned char *)(p2) < 0 && len)
		return (-1);
	else
		return (*(unsigned char *)(p1 - 1) - *(unsigned char *)(p2 - 1));
} */
int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	const char	*p1;
	const char	*p2;

	if (!len)
		return (0);
	p1 = s1;
	p2 = s2;
	while (1)
	{
		if (*p1 != *p2++)
			return (*(unsigned char *)p1 - *(unsigned char *)--p2);
		if (!*p1++)
			break ;
		if (!--len)
			break ;
	}
	return (0);
}

int main(void)
{
	int arg = 0;

	while (arg <= 11)
	{
		if (arg == 8)
		{
			ft_print_result(ft_strncmp("abcdefgh", "abcdwxyz", 4));
			ft_print_result(strncmp("abcdefgh", "abcdwxyz", 4));
			write(1, "\n", 1);
		}

		arg++;
	}
	return (0);
}

/* 	 if (arg == 1)
		{
			ft_print_result(ft_strncmp("salut", "salut", 5));
			ft_print_result(strncmp("salut", "salut", 5));
			write(1, "\n", 1);
		}
		 */
/* 	 if (arg == 4)
		{
			ft_print_result(ft_strncmp("test", "tEst", 4));
			ft_print_result(strncmp("test", "tEst", 4));
			write(1, "\n", 1);
		}

	 if (arg == 5)
		{
			ft_print_result(ft_strncmp("", "test", 4));
			ft_print_result(strncmp("", "test", 4));
			write(1, "\n", 1);
		}

	 if (arg == 6)
		{
			ft_print_result(ft_strncmp("test", "", 4));
			ft_print_result(strncmp("test", "", 4));
			write(1, "\n", 1);
		}

	 if (arg == 7)
		{
			ft_print_result(ft_strncmp("abcdefghij", "abcdefgxyz", 3));
			ft_print_result(strncmp("abcdefghij", "abcdefgxyz", 3));
			write(1, "\n", 1);
		}



	 if (arg == 9)
		{
			ft_print_result(ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
			ft_print_result(strncmp("zyxbcdefgh", "abcdwxyz", 0));
			write(1, "\n", 1);
		}

	 if (arg == 10)
		{
			ft_print_result(ft_strncmp("abcdefgh", "", 0));
			ft_print_result(strncmp("abcdefgh", "", 0));
			write(1, "\n", 1);
		} */

/* 	 if (arg == 2)
		{
			ft_print_result(ft_strncmp("test", "testss", 7));
			ft_print_result(strncmp("test", "testss", 7));
			write(1, "\n", 1);
		}

	 if (arg == 3)
		{
			ft_print_result(ft_strncmp("testss", "test", 7));
			ft_print_result(strncmp("testss", "test", 7));
			write(1, "\n", 1);
		}

	 if (arg == 11)
		{
			ft_print_result(ft_strncmp("test\200", "test\0", 6));
			ft_print_result(strncmp("test\200", "test\0", 6));
			write(1, "\n", 1);
		} */
