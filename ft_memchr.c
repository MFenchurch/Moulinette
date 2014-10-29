#include <stdlib.h>

void		*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*tmp;
	unsigned int i;

	i = 0;
	tmp = (unsigned char *)s;
	while (i < n)
	{
		if (tmp[i] == (unsigned char)c)
			return ((void *)&tmp[i]);
		else
			i++;
	}
	return (NULL);
}
