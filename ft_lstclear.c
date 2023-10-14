#include "libft.h"

//burada lst yi null yaparak napmis olduk en son

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list 	*tmp;
	t_list	*tmptmp;

	tmp = *lst;
	while (tmp)
	{
		tmptmp = tmp->next;
		(*del)(tmp->content);
		free(tmp);
		tmp = tmptmp;
	}
	*lst = NULL;
}