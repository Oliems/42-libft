#include "libft.h"

/* The isalnum() function tests for any character for which isalpha(3)
** or isdigit(3) is true. */
int ft_isalnum(int c)
{
  return (c >= '0' && c <= '9' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}
