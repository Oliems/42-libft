#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

/* int main(void)
{
	char dst[1] = "\0";
	char *src = "Hello World!";
	ft_strlcpy(dst, src, sizeof(dst));
	return 0;
}
 */
/* int main(void)
{
	char dst[20] = "String ";
	char *src = "Hello World!";
	ft_strlcat(dst, src, sizeof(dst));
	return 0;
} */

int main(void)
{
	char s[13] = "Hello World!";
	ft_memset((void *)s, 'a', 5);
	return 0;
}

int main(void)
{
	char d[20];
	char s[13] = "Hello World!";
	ft_memcpy((void *)d, (void *)s, 6);
	return 0;
}

int main(void)
{
	char d[20];
	char s[12] = "Hello World!";
	ft_memmove((void *)d, (void *)s, 6);
	return 0;
}

int main(void)
{
	char s[12] = "Hello World!";
	ft_memchr(s, 'o', 4);
	return 0;
}


int main(void)
{
	char *s = "Hello";
	ft_strchr(s, 'a');
	return 0;
}

int main(void)
{
	char *s = "Hello";
	ft_strrchr(s, 'H');
	return 0;
}

int main(void)
{
	char *d;
	char *s = "Hello World!";
	d = ft_strdup(s);
}

int main(void)
{
	char *h = "Hello World!";
	char *n = "llo";
	char *p;

	p = ft_strnstr(h, n, 4);
}
