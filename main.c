#include <stdio.h>
#include <stdlib.h>
char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s2 && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	if (i <= n)
		while (i < n)
			s1[i++] = '\0';
	return (s1);
}

int	main(void)
{
	char dest[] = "dest";
	char srcs[] = "srcs";

	printf("%s\n", ft_strncpy(dest, srcs, 2));
	return (0);
}
