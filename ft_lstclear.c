

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst && *lst && del)
	{
		t_list	*c;
		t_list	*n;
		c = *lst;
		while (c)
		{
			n = c->next;
			del(c->content);
			free(c);
			c = n;
		}
		*lst = NULL;
	}
}