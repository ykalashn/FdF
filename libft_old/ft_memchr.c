/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 18:41:36 by ykalashn          #+#    #+#             */
/*   Updated: 2020/03/22 18:41:37 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char*)s;
	if (n != 0)
	{
		while (n-- > 0)
		{
			if (*p == (unsigned char)c)
				return (p);
			p++;
		}
	}
	return (NULL);
}
