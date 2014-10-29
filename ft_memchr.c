/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 16:46:52 by agreau            #+#    #+#             */
/*   Updated: 2013/11/24 16:46:55 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*tmp;
	unsigned int i;

	i = 0;
	tmp = (unsigned char *)s;
	while (i < n)
	{
		if (tmp[i] == (unsigned char)c)
			return ((void *)&tmp[i]);
		else
			i++;
	}
	return (NULL);
}
