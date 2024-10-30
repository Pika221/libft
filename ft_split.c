/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hialpagu <hialpagu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:44:28 by hialpagu          #+#    #+#             */
/*   Updated: 2024/10/30 20:01:48 by hialpagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	total(char const *s, char c)
{
	int	t;

	t = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			t++;
			while (*s != c && *s)
				s++;
		}
	}
	return (t);
}

static int	my_free(char **arr, int i)
{
	if (!*(arr + i))
	{
		while (i > 0 && *(arr + i - 1))
		{
			free(*(arr + i - 1));
			i--;
		}
		free (arr);
		return (0);
	}
	return (1);
}

static int	my_while(const char **s, char c, int *i, char **arr)
{
	int	j;

	while (*(*s) == c)
		(*s)++;
	j = 0;
	while (*((*s) + j) != c && *((*s) + j))
		j++;
	*(arr + *i) = ft_substr(*s, 0, j);
	if (my_free(arr, *i) == 0)
		return (0);
	*s += j;
	(*i)++;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		t;

	if (!s)
		return (NULL);
	t = total(s, c);
	arr = malloc(sizeof(char *) * (t + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < t)
	{
		if (my_while(&s, c, &i, arr) == 0)
			return (NULL);
	}
	*(arr + i) = 0;
	return (arr);
}
