/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelefebv <jelefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 15:36:55 by jelefebv          #+#    #+#             */
/*   Updated: 2014/11/12 17:24:47 by jelefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	if (s != NULL)
	{
		while (*s)
		{
			if (*s == (char)c)
				tmp = (char *)s;
			s++;
		}
		if ((char)c == '\0')
			return ((char *)s);
	}
	return (tmp);
}
