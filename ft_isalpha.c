/* The isalpha() function tests for any character for which isupper(3) or islower(3) is true. */
int ft_isalpha(char c)
{
  return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
