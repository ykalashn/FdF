/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 18:47:10 by ykalashn          #+#    #+#             */
/*   Updated: 2020/03/22 18:47:10 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	i = (size_t)start;
	j = 0;
	if (!(sub = ft_strnew(len)))
		return (NULL);
	while (len-- > 0)
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	return (sub);
}
