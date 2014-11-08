/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelefebv <jelefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:06:29 by jelefebv          #+#    #+#             */
/*   Updated: 2014/11/08 11:44:27 by jelefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(char *str)
{
	int		index;

	index = 0;
	if (str == NULL)
	{
		while (str[index] != '\0')
		{
			index++;
		}
		return (index);
	}
	return (0);
}
