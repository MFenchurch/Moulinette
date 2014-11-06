#include <unistd.h>
#include "libft.h"

void	ft_strclr(char *s)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
	{
		s[index] = '\0';
		index++;
	}
	s[index] = '\0';
}

int	main(void)
{
	char s[] = "Bonjour les gens";
	ft_putstr(s);
	ft_strclr(s);
	ft_putstr(s);
	return (0);
}
