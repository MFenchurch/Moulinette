/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelefebv <jelefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 15:27:59 by jelefebv          #+#    #+#             */
/*   Updated: 2014/11/14 18:19:21 by jelefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_count_len(int n)
{
	int		count;

	count = 1;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*d;
	int		index;

	index = 0;
	d = (char *)malloc(sizeof(char) * ft_count_len(n) + 1);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	while (n >= 0)
	{
		n = n / 10;
		d[index] = ('0' + n % 10);
		index++;
	}
	if (n < 0)
	{
		d[index] = '-';
		index++;
		n = -n;
		while (n >= 0)
		{
			n = n / 10;
			d[index] = ('0' + n % 10);
			index++;
		}
	}
	d[index] = '\0';
	return (d);
}
