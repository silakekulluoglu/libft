#include "libft.h"

/*
t_list	*ft_lstlast(t_list *lst)
{
	int	i;

	i = ft_lstsize(lst);
	return (&lst[i - 1]);
}
*/

//ama zaten nullsa 17 ve 18 i yazmadan da null döndürmeyecek mi

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}