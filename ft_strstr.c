/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 20:27:15 by agreau            #+#    #+#             */
/*   Updated: 2013/11/24 12:27:17 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	const char *tmp1;
	const char *tmp2;

	if (*s2 == 0)
		return ((char *)s1);
	while (*s1 != 0)
	{
		tmp1 = s1;
		tmp2 = s2;
		while (*tmp1 == *tmp2 && *tmp1 != 0 && *tmp2 != 0)
		{
			tmp1++;
			tmp2++;
		}
		if (*tmp2 == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
