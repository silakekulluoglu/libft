#include "libft.h"

//neden tmp oluşturduk ki, *lst i kaybetsek nolur?

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while ((tmp)->next)
		tmp = tmp->next;
	tmp->next = new;
}