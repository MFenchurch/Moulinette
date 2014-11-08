/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelefebv <jelefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 11:57:18 by jelefebv          #+#    #+#             */
/*   Updated: 2014/11/08 11:57:32 by jelefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
	int	index;
	char	*dest;

	index = 0;
	dest = malloc(sizeof(char) * len + 1);
	if (len && s && dest)
	{
		while (index != start)
			index++;
		start = 0;
		while (start <= len)
		{
			dest[start] = s[index];
			index++;
			start++;
		}
		dest[index] = '\0';
		return (dest);
	}
	return(NULL);
}
