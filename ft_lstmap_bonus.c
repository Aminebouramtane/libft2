/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:02:33 by abouramt          #+#    #+#             */
/*   Updated: 2023/11/24 14:13:10 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;
	char	*p;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		p = f(lst->content);
		tmp = ft_lstnew(p);
		if (!tmp)
		{
			ft_lstclear(&head, del);
			del(p);
		}
		ft_lstadd_back(&head, tmp);
		lst = lst->next;
	}
	return (head);
}
