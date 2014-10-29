#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char *str;

	i = 0;
	str = ft_strdup(s);
	while (str[i] != '\0')
	{
		str[i] = f(str[i]);
		i++;
	}
	return (str);
}
