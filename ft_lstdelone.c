


#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst && des)
    {
        del(lst->content);
        free(lst);
    }
}