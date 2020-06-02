/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 10:22:10 by ykalashn          #+#    #+#             */
/*   Updated: 2020/06/02 10:22:13 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *src, size_t newsize)
{
	void	*new;

	if (!src)
		return (NULL);
	if (!(new = ft_memalloc(newsize)))
		return (NULL);
	new = ft_memcpy(new, src, newsize / 2);
	free(src);
	return (new);
}
