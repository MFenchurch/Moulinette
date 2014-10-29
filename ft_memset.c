/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:05:54 by agreau            #+#    #+#             */
/*   Updated: 2013/11/20 14:56:45 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned int 	i;

	p = s;
	i = 0;
	while (i < n)
	{
		*p++ = c;
		i++;
	}
	return (s);
}
