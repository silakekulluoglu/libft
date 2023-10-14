#include "libft.h"

// burada 10.satırdan emin dğilim

int ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
 
/*
#include <stdio.h>
int main()
{
	t_list lst[5];
	const char hey[6] = "selam";

	for (int i = 0; i < 5; i++)
	{
		if (i == 4)
		{
			lst[i] = *ft_lstnew(hey);
			lst[i].next = (NULL);
		}
		else
		{
		lst[i] = *ft_lstnew(hey);
		lst[i].next = &lst[i + 1];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", (const char *)lst[i].content);
	}
	printf("%d\n", ft_lstsize(lst));
	printf("%d\n", ft_lstsize1(lst));
}
*/