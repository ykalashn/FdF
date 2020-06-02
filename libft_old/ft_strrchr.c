/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 18:46:45 by ykalashn          #+#    #+#             */
/*   Updated: 2020/03/22 18:46:46 by ykalashn         ###   ########.fr       */
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
