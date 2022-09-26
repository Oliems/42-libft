#include "libft.h"

/*
** The ft_putstr_fd() function writes a string (not including the NULL
** character) to the destination corresponding to the file descriptor.
** If it succeeds, the return value is the number of characters
** written, if not it returns EOF.
*/

int ft_putstr_fd(int fd, const char *str)
{
  char *p;
  
  p = str;
  while (*p && ft_putchar_fd(fd, *p))
    p++;
  if (!*p)
    return (p - str);
  else
    return (EOF);
}
