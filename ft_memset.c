#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned int 	i;

	p = s;
	i = 0;
	while (i < n)
	{
		*p++ = c;
		i++;
	}
	return (s);
}
