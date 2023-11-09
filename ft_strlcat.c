/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:35:25 by abouramt          #+#    #+#             */
/*   Updated: 2023/11/09 22:51:29 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
// 	size_t	i;
// 	size_t	j;

// 	j = 0;
// 	i = ft_strlen(dst);
// 	if (dstsize < i || dstsize == 0)
// 		return (ft_strlen(src) + dstsize);

// 	while (src[j] && i + j + 1 < dstsize)
// 	{
// 		dst[i + j] = src[j];
// 		j++;
// 	}
// 	if (i < dstsize)
// 		dst[i + j] = '\0';
// 	return (ft_strlen(dst) + ft_strlen(src));
// }

	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dst == NULL && dstsize == 0)
		return (0);
	if (len_dst > dstsize)
		return (len_src + dstsize);
	i = 0;
	while (src[i] && len_dst + i < dstsize - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}