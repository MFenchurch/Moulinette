#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*tmp;
	const char	*tmp2;

	tmp = dest;
	tmp2 = src;
	if (tmp2 <= tmp)
	{
		tmp = tmp + n - 1;
		tmp2 = tmp2 + n - 1;
		while (n--)
		{
			*tmp-- = *tmp2--;
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
