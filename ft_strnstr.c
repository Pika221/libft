/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hialpagu <hialpagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:51:44 by hialpagu          #+#    #+#             */
/*   Updated: 2024/10/31 21:33:01 by hialpagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	size_t	i;
	size_t	j;

	i = 0;
	n = ft_strlen(needle);
	if (*needle == 0)
		return ((char *)haystack);
	while (*haystack && n <= len && i <= (len - n))
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j])
			j++;
		if (j == n)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
