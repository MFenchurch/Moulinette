/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelefebv <jelefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:15:23 by jelefebv          #+#    #+#             */
/*   Updated: 2014/11/08 11:47:24 by jelefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		index;

	index = 0;
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[index] == s2[index] && s1[index] != '\0' && index <= (int)n)
			index++;
		if (s1[index] == s2[index] && s1[index] == '\0' && s2[index] == '\0')
			return (0);
		else
			return (s1[index] - s2[index]);
	}
	return (0);
}
