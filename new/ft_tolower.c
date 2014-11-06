int	ft_tolower(int c)
{
	if (ft_isalpha(c))
		c = c - 'A' + 'a';
	return (c);
}
