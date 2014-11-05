#include <string.h>
#include <stdio.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	const	char	*temp;
	int		index;
	int		j;

	index = 0;
	j = 0;
	while (s1[index] != '\0')
	{
		while ((s1[index + j] == s2[j]) && (s2))
		{
			
		}
		index++;
	}
	return (temp);
}

int	main(void)
{
	char s1[] = "J'aime les pommes et le chocolat";
	char s2[] = "pomme";
	printf("%s\n", strstr(s1,s2));
	return (0);
}
