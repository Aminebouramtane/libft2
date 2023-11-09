/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:47:32 by abouramt          #+#    #+#             */
/*   Updated: 2023/11/09 21:56:57 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set) {
    if (s1 == NULL || set == NULL) {
        return NULL;
    }

    size_t start = 0;
    size_t end = ft_strlen(s1);

    
    if (end == 0) {
        char *empty_str = (char *)malloc(1);
        if (!empty_str) {
            return NULL;
        }
        empty_str[0] = '\0';
        return empty_str;
    }

    while (s1[start] && ft_strchr(set, (int)s1[start])) {
        start++;
    }

    while (end > start && ft_strchr(set, (int)s1[end - 1])) {
        end--;
    }

    size_t len = end - start;
    char *trimmed_str = (char *)malloc(len + 1);

    if (!trimmed_str) {
        return NULL;
    }

    size_t i = 0;
    while (i < len) {
        trimmed_str[i] = s1[start + i];
        i++;
    }

    trimmed_str[len] = '\0';
    return trimmed_str;
}