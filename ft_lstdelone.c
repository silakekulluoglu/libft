#include "libft.h"

// e simdi lst.next de free lenmiş olmadi mi

/*
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	(*del)(lst->content);
	free(lst);
}
*/

/*
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL)
		return ;
	tmp = lst;
	(*del)(tmp->content);
	free(tmp);
}
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst -> content);
	free(lst);
}