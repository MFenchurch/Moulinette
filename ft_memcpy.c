/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:44:26 by agreau            #+#    #+#             */
/*   Updated: 2013/11/20 17:28:36 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	char		*tmp;
	const char 	*tmp2;
	size_t		i;

	tmp = dest;
	tmp2 = src;
	i = 0;
	while (i < n)
	{
		tmp[i] = tmp2[i];
		i++;
	}
	return (dest);
}
