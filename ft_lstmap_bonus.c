/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:02:33 by abouramt          #+#    #+#             */
/*   Updated: 2023/11/16 00:14:19 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current;
	t_list	*new_node;
	t_list	*result;

	new_list = NULL;
	current = NULL;
	while (lst)
	{
		result = f(lst->content);
		new_node = malloc(sizeof(t_list));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
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
	return (new_list);
}
