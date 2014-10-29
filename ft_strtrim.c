#include <stdlib.h>
#include "libft.h"
char *ft_strtrim(char const *s)
{
	int size_s;
	int i;
	int j;
	char *ret;

	i = 0;
	j = 0;
	size_s = ft_strlen(s);
	if (!s)
		return (NULL);
	ret = malloc(sizeof(char) * size_s + 1);
	if (!ret)
		return (NULL);
	while (i < size_s)
	{
		if (s[i] != '\b' || s[i] != '\n' || s[i] != '\t')
		{
			ret[j] = s[i];
			j++;
		}
		i++;
	}
	ret[j] = '\0';
	return (ret);
}
