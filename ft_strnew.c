#include <string.h>
#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	char			*str;
	unsigned int 	i;

	i = 0;
	str = malloc(size);
	if (!str)
	{
		return (NULL);
	}
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
