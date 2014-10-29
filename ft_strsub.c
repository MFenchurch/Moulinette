/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 18:04:04 by agreau            #+#    #+#             */
/*   Updated: 2013/11/22 20:02:05 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *ret;
	size_t i;

	i = 0;
	if (s)
	{
		ret = malloc(sizeof(char) * len + 1);
		if (!ret)
		{
			return (NULL);
		}
		while (i < len)
		{
			ret[i] = s[start + i];
			i++;
		}
		ret[start + i] = '\0';
		return (ret);
	}
	return (NULL);
}
