#include <stdlib.h>
#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s2[j] && j < n)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	if (ft_strlen(s2) <= n)
	{
		while (i < n)
		{
			s1[i] = '\0';
			i++;
		}
	}
	return (s1);
}
