#include "libft.h"

/*
** The isspace() function tests for the white-space characters. For
** any locale, this includes the following standard characters: '\t',
** '\n', '\v', '\f', '\r', ' '.
*/

int ft_isspace(int c)
{
  return (c == '\t' || c == '\n' || c == '\v'
	  || c == '\f' || c == '\r' || c == ' ') 
}
