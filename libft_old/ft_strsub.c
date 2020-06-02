/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 10:31:42 by ykalashn          #+#    #+#             */
/*   Updated: 2020/06/02 10:31:45 by ykalashn         ###   ########.fr       */
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
