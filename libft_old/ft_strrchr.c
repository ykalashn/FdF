/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 10:30:48 by ykalashn          #+#    #+#             */
/*   Updated: 2020/06/02 10:30:50 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = (char*)0;
	while (*s)
	{
		if (*s == (char)c)
			p = (char*)s;
		s++;
	}
	if (*s == '\0' && (char)c == '\0')
		return (p = (char*)s);
	return (p);
}
