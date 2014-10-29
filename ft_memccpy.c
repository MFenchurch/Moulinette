#include <string.h>

void	*ft_memccpy(void	*dest, const void	*src, int	c, size_t	n)
{
	char 		*tmp;
	const char 	*tmp2;
	size_t 		i;

	tmp = dest;
	tmp2 = src;
	i = n;
	while (i-- > 0)
	{
		if ((*tmp++ = *tmp2++) == c)
			return (tmp);
	}
	return (NULL);
}
