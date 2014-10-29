#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ret;

	i = 0;
	ret = malloc(sizeof(s) * (ft_strlen((char *)s)));
	if (!ret)
	{
		return (0);
	}
	while (s[i] != '\0')
	{
		ret[i] = s[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
