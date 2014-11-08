/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelefebv <jelefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:56:01 by jelefebv          #+#    #+#             */
/*   Updated: 2014/11/08 11:22:36 by jelefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (dest == 0)
		return (NULL);
	return (ft_strcpy(dest, str));
}
