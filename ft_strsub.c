#include <string.h>
#include <stdlib.h>

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *ret;
	size_t i;

	i = 0;
	if (s)
	{
		ret = malloc(sizeof(char) * len + 1);
		if (!ret)
		{
			return (NULL);
		}
		while (i < len)
		{
			ret[i] = s[start + i];
			i++;
		}
		ret[start + i] = '\0';
		return (ret);
	}
	return (NULL);
}
