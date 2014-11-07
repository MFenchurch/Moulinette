#include <unistd.h>

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
