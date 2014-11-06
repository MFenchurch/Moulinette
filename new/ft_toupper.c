int	ft_toupper(int c)
{
	if (ft_isalpha(c))
		c = c - 'a' + 'A';
	return (c);
}
