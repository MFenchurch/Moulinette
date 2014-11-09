#include "libft.h"

int	ft_strlen_trim(char const *s)
{
	int	index;
	int	n;

	index = 0;
	n = 0;
	if (s)
	{
		while ((s[index] != '\0') && ((s[index] == ' ') || (s[index] == '\n') || (s[index] == '\t')))
			index++;
		n = ft_strlen((char *)s);
		if ((s[n-1] == ' ') || (s[n] == '\n') || (s[n] == '\t'))
			n--;
		while ((n >= 0) && ((s[n] == ' ') || (s[n] == '\n') || (s[n] == '\t')))
			n--;
		return (n - index);
	}
	return (0);
}
/*
char	*ft_strtrim(char const *s)
{
	malloc sur taille de ft_strlen_trim 
	puis avancer au bon index grace à while ((s[index] != '\0') && ((s[index] == ' ') || (s[index] == '\n') || (s[index] == '\t'))) {index++;}
	return (ft_strsub(s, index, ft_strlen_trim(s)));
}

*/

int	main(void)
{
	ft_putnbr(ft_strlen(""));
	ft_putchar('\n');
	ft_putnbr(ft_strlen_trim(""));
	ft_putchar('\n');
	ft_putnbr(ft_strlen("Bonjour"));
	ft_putchar('\n');
	ft_putnbr(ft_strlen_trim("Bonjour"));
	ft_putchar('\n');
	ft_putnbr(ft_strlen("       Hello    "));
	ft_putchar('\n');
	ft_putnbr(ft_strlen_trim("       Hello    "));
	ft_putchar('\n');
	ft_putnbr(ft_strlen("Hello    "));
	ft_putchar('\n');
	ft_putnbr(ft_strlen_trim("Hello    "));
	ft_putchar('\n');

	return (0);
}
