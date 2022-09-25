#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/* ctype.h */
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_isspace(int c);
int ft_toupper(int c);
int ft_tolower(int c);

/* string.h */
size_t ft_strlen(const char *s);
/* TODO */
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
/* TODO */
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
/* TODO */
char *ft_strdup(const char *s1);

/* math.h */
int ft_abs(int i);
#endif

