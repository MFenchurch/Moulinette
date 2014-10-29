/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 20:00:00 by agreau            #+#    #+#             */
/*   Updated: 2013/11/27 20:02:00 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	char			*str;
	unsigned int 	i;

	i = 0;
	str = malloc(size);
	if (!str)
	{
		return (NULL);
	}
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
