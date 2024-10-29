/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hialpagu <hialpagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:45:11 by hialpagu          #+#    #+#             */
/*   Updated: 2024/10/29 12:23:45 by hialpagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*arr;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	arr = malloc(sizeof(char) * len);
	if (arr == NULL)
		return (NULL);
	while (s1[i])
	{
		arr[i] = s1[i];
		i++;
	}
	j = i;
	i = 0;
	while (s2[i])
	{
		arr[j] = s2[i];
		j++;
		i++;
	}
	arr[j] = '\0';
	return (arr);
}
