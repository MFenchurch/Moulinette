#include <string.h>

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t i2;

	i = 0;
	i2 = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[i2] != '\0' && n-- > 0)
	{
		s1[i++] = s2[i2++];
	}
	s1[i] = '\0';
	return (s1);
}
