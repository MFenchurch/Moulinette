#include <stdlib.h>

char	*ft_strdup(char *str);
int	ft_strlen(char *str);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	char	*tampon;

	i = 0;
	j = 0;
	tampon = ft_strdup(dest);
	dest = malloc(sizeof(char)*(ft_strlen(src)+ft_strlen(dest))+1);
	while (tampon[i] != '\0')
	{
		dest[i] = tampon[i];
		i++;
	}
	while	(src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
