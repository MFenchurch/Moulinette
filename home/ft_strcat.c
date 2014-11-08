/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelefebv <jelefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:05:43 by jelefebv          #+#    #+#             */
/*   Updated: 2014/11/08 11:10:34 by jelefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;
	char	*tampon;

	i = 0;
	j = 0;
	tampon = ft_strdup(dest);
	free(dest);
	dest = malloc(sizeof(char) * (ft_strlen(src) + ft_strlen(dest)) + 1);
	while (tampon[i] != '\0')
	{
		dest[i] = tampon[i];
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	free(tampon);
	return (dest);
}
