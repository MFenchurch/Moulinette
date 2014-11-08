/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelefebv <jelefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:09:09 by jelefebv          #+#    #+#             */
/*   Updated: 2014/11/08 11:21:42 by jelefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		index;

	index = 0;
	if (dest != NULL && src != NULL)
	{
		while (src)
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
		return (dest);
	}
	return (NULL);
}
