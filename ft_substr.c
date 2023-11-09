/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:54:10 by abouramt          #+#    #+#             */
/*   Updated: 2023/11/09 14:38:22 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;
	if (start > ft_strlen(s))
		return (ft_calloc(1,1));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	if (!s)
		return (NULL);
	ptr = (char *)malloc(len + 1);
	if (ptr == 0)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && i < ft_strlen(s))
	{
		
			ptr[j] = s[i];
			j++;
			i++;
	}
	ptr[j] = '\0';
	return (ptr);
}

// hello world , 1 , 4
// return (ello)

// hello , 2 , 50
// llo ===> 3 

