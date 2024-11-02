/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <hialpagu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:44:16 by hialpagu          #+#    #+#             */
/*   Updated: 2024/11/02 09:27:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	total(long c)
{
	int	i;

	i = 0;
	if (c < 0)
	{
		i++;
		c *= -1;
	}
	if (c == 0)
		return (1);
	while (c != 0)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*arr;
	size_t	i;
	long	num;

	i = total(n);
	num = (long)n;
	arr = malloc(sizeof(char) * (total(num) + 1));
	if (arr == NULL)
		return (NULL);
	if (num == 0)
		arr[0] = '0';
	arr[i] = '\0';
	while (num != 0)
	{
		if (num < 0)
		{
			arr[0] = '-';
			num = -num;
		}
		arr[--i] = (num % 10) + 48;
		num = num / 10;
	}
	return (arr);
}
