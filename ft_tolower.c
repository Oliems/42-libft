#include "libft.h"

/*
** The tolower() function converts an upper-case letter to the
** corresponding lower-case letter.
*/
int ft_tolower(int c)
{
  if (ft_isupper(c))
    return (c + 32);
  else
    return (c);
}
