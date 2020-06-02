/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 18:41:07 by ykalashn          #+#    #+#             */
/*   Updated: 2020/03/22 18:41:08 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*temp;

	if (!(temp = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		temp->content = NULL;
		temp->content_size = 0;
	}
	else
	{
		if (!(temp->content = malloc(sizeof(content_size))))
			return (NULL);
		ft_memcpy(temp->content, content, content_size);
		temp->content_size = content_size;
	}
	temp->next = NULL;
	return (temp);
}
