#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/* IO */
int ft_putchar_fd(int fd, int c);
int ft_putstr_fd(int fd, const char *str);
int ft_putnbr_fd(int fd, int i);

/* CTYPE */
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_isspace(int c);
int ft_toupper(int c);
int ft_tolower(int c);

/* STRING */
size_t ft_strlen(const char *s);
/* TODO */
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
/* TODO */
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
/* TODO */
char *ft_strdup(const char *s1);
void ft_reverse(char *s);

/* MATH */
unsigned int ft_abs(int i);
#endif

