/* The isascii() function tests for an ASCII character, which is any
** character between 0 and octal 0177 inclusive. */
int ft_isascii(char c)
{
  return (c >= 0 && c <= 127);
}
