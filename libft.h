#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/* STDLIB */
int atoi(const char *nptr);
void *ft_calloc(size_t number, size_t size);

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
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *b, size_t len);
void *ft_memcpy(void *dst, const void *src, size_t len);
void *ft_memmove(void *dst, const void *src, size_t len);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strdup(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t len);
void *ft_memchr(const void *b, int c, size_t len);
int ft_memcmp(const void *b1, const void *b2, size_t len);
char *ft_strnstr(const char *big, const char *little, size_t len);
#endif
