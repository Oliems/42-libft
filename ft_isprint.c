#include "libft.h"

/* The isprint() function tests for any printing character, including
** space. */
int ft_isprint(int c)
{
  return (c >= ' ' && c <= '~');
}
