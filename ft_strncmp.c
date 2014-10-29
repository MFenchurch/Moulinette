#include <string.h>
#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int     i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && i <= (int)n)
            i++;
    if (s1[i] == s2[i] && s1[i] == '\0' && s2[i] == '\0')
        return (0);
    else
        return (s1[i] - s2[i]);
}

