/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 18:46:54 by ykalashn          #+#    #+#             */
/*   Updated: 2020/03/22 18:46:55 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cw(char const *s, char c)
{
	int	words;

	words = 0;
	if (*s != c && *s)
	{
		words++;
		s++;
	}
	while (*s)
	{
		while (*s == c)
		{
			s++;
			if (*s != c && *s)
				words++;
		}
		s++;
	}
	return (words);
}

static int	ft_cl(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s && *s != c)
	{
		count++;
		s++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	i = 0;
	if (!s || !(arr = (char**)malloc(sizeof(char*) * (ft_cw(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			j = 0;
			if (!(arr[i] = (char*)malloc(sizeof(char) * (ft_cl(s, c) + 1))))
				return (NULL);
			while (*s != c && *s)
				arr[i][j++] = (char)*s++;
			arr[i][j] = '\0';
			i++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
