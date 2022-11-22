/* char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*b;
	const char	*l;
	const char	*head;

	if (!*little)
		return ((char *)big);
	if (!big && !len)
		return (NULL);
	head = big;
	while (*head && len)
	{
		b = head;
		l = little;
		while (*b && *l && (*b == *l) && len)
		{
			b++;
			l++;
			// len--;
		}
		if (*l == '\0')
			return ((char *)(head));
		head++;
		len--;
	}
	return (NULL);
} */
