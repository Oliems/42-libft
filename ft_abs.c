#include "libft.h"

/* The abs() function computes the absolute value of the integer i. */
int ft_abs(int i)
{
  if (i < 0)
    return (-i);
  else
    return (i);
}
