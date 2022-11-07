#include "libft.h"

/* The abs() function computes the absolute value of the integer i. */
unsigned int ft_abs(int i)
{
  if (i < 0)
    return (-((unsigned int)(i)));
  else
    return (+((unsigned int)(i)));
}
