#include <string.h>

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	char		*tmp;
	const char 	*tmp2;
	size_t		i;

	tmp = dest;
	tmp2 = src;
	i = 0;
	while (i < n)
	{
		tmp[i] = tmp2[i];
		i++;
	}
	return (dest);
}
