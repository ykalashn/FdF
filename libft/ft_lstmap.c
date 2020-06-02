/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 10:15:24 by ykalashn          #+#    #+#             */
/*   Updated: 2020/06/02 10:15:28 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*temp;
	t_list	*next;

	if (!lst || !f)
		return (NULL);
	temp = f(lst);
	if (!(next = ft_lstnew(temp->content, temp->content_size)))
		return (NULL);
	new = next;
	while (lst->next)
	{
		lst = lst->next;
		temp = f(lst);
		if (!(next->next = ft_lstnew(temp->content, temp->content_size)))
			return (NULL);
		next = next->next;
	}
	return (new);
}
