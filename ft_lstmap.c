#include "libft.h"
/*
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		len;
	t_list	*new;
	t_list	*tmp;

	len = ft_lstsize(lst);
	new = (t_list *)malloc(sizeof(t_list) * len);
	if (!new)
		return (NULL);
	tmp = lst;
	while (tmp)
	{
		new->content = (*f)(tmp->content);
		new->next = tmp->next;
		(*del)(tmp->content);
		free(tmp);
		tmp = new->next;
		new = new->next;
	}
	return (lst);
}
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *head;
	t_list *tmp;

	head = NULL;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (!tmp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, tmp);
		lst = lst->next;
	}
	return (head);
}