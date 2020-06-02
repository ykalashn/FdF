#include "libft.h"

void	ft_lstadd_end(t_list **alst, t_list *new)
{
	if (*alst && new)
	{
		while ((*alst)->next)
			*alst = (*alst)->next;
		(*alst)->next = new;
	}
	else if (new)
		*alst = new;
}
