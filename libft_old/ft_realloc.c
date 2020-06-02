/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 18:43:30 by ykalashn          #+#    #+#             */
/*   Updated: 2020/03/22 18:43:31 by ykalashn         ###   ########.fr       */
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
