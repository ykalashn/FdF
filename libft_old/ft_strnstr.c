/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 18:46:38 by ykalashn          #+#    #+#             */
/*   Updated: 2020/03/22 18:46:39 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return (res = (char*)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] == needle[j] && needle[j] != '\0' &&
			(i + j) < len)
				j++;
			if (needle[j] == '\0')
				return (res = (char*)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
