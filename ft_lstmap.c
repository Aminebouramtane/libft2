


#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list = NULL;
    t_list *current = NULL;
    t_list *new_node;

    while (lst)
    {
        void *result = f(lst->content);
        new_node = malloc(sizeof(t_list));
        if (!new_node)
        {
            ft_lstclear(&new_list, del);
            return NULL;
        }
        new_node->content = result;
        new_node->next = NULL;
        if (!new_list)
        {
            new_list = new_node;
            current = new_list;
        }
        else
        {
            current->next = new_node;
            current = current->next;
        }
        lst = lst->next;
    }
    return new_list;
}