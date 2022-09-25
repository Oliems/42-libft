#include "libft.h"

/*
** The toupper() function converts a lower-case letter to the
** corresponding upper-case letter.
*/
int ft_toupper(int c)
{
  if (ft_islower(c))
    return (c - 32);
  else
    return (c);
}
