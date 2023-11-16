/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:55:02 by abouramt          #+#    #+#             */
/*   Updated: 2023/11/15 16:58:13 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*c;
	t_list	*n;

	if (lst && *lst && del)
	{
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
