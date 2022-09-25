#include "libft.h"

/* The strlen() function computes the length of the string s. */
size_t strlen(const char *s)
{
  char *p;

  p = s;
  while (*p)
    p++;
  return ((size_t)(p - s));
}
