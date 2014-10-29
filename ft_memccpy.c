/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 20:39:26 by agreau            #+#    #+#             */
/*   Updated: 2013/11/21 21:58:12 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void	*dest, const void	*src, int	c, size_t	n)
{
	char 		*tmp;
	const char 	*tmp2;
	size_t 		i;

	tmp = dest;
	tmp2 = src;
	i = n;
	while (i-- > 0)
	{
		if ((*tmp++ = *tmp2++) == c)
			return (tmp);
	}
	return (NULL);
}
