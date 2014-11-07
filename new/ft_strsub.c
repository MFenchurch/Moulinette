#include "libft.h"
#include <stdlib.h>

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
	int	index;
	char	*dest;

	index = 0;
	dest = malloc(sizeof(char) * len + 1);
	if (len && s && dest)
	{
		while (index != start)
			index++;
		start = 0;
		while (start <= len // + 1 ????????)
		{
			dest[start] = s[index];
			index++;
			start++;
		}
		dest[index] = '\0';
		return (dest);
	}
	return(NULL);
}
