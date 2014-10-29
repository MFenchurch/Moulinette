/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agreau <agreau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 11:08:17 by agreau            #+#    #+#             */
/*   Updated: 2013/11/28 11:08:19 by agreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char *str;

	i = 0;
	str = ft_strdup(s);
	while (str[i] != '\0')
	{
		str[i] = f(str[i]);
		i++;
	}
	return (str);
}
