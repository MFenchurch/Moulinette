#include <stdlib.h>
#include "libft.h"

char        **ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = i;
	str = malloc(sizeof(s) * (ft_strlen(s) + 1));
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] != c || s[i] != '\0')
			{
				str[k][j] = s[i];
				i++;
				j++;
			}
			k++;
		}
		else
			i++;
	}
	return (str);
}
