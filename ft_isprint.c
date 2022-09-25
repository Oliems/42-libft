/* The isprint() function tests for any printing character, including space. */
int ft_isprint(char c)
{
  return (c >= ' ' && c <= '~');
}
