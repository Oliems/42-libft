#include "libft.h"

/*
** The ft_putnbr_fd() function writes the number i to the destination
** corresponding file descriptor. If it succeeds it returns a positive
** integer, if not it returns EOF.
*/

int ft_putnbr_fd(int fd, int i)
{
  char *s;
  unsigned int n;
  
  n = ft_abs(i);
  s = ft_itoa(n);
  if (i < 0)
    ft_putchar_fd(fd, '-');
  if (ft_putstr_fd(fd, s))
    {
      free(s);
      return (1);
    }
  else
    {
      free(s);
      return (EOF);
    }
}
