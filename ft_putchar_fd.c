#include "libft.h"

/*
** The ft_putchar_fd() function writes a character to the destination
** corresponding file descriptor. For example, 0 is the stdin, 1 is
** the stdout and 2 is stderr.
*/

int ft_putchar_fd(int fd, int c);
{
  if (write(fd, &c, 1))
    return (c);
  else
    return (EOF);
}
