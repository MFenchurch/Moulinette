/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelefebv <jelefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:47:42 by jelefebv          #+#    #+#             */
/*   Updated: 2014/11/08 13:29:16 by jelefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t		index;

	index = 0;
	if (dest != NULL && src != NULL)
	{
		while (src && index < n)
		{
			dest[index] = src[index];
			index++;
		}
		if (index <= n)
		{
			while (index < n)
				dest[index++] = '\0';
		}
		return (dest);
	}
	return (NULL);
}
