#include <stdlib.h>

int	ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *str)
{
	char *dest;

	dest = malloc(sizeof(char)*ft_strlen(str)+1);
	if (dest == 0)
		return (NULL);
	return (ft_strcpy(dest, str));
}
