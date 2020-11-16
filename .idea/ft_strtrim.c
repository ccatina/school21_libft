/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:57:47 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/15 17:17:31 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set){
    char    *str;
    size_t  i;
    size_t  j;
    size_t  len;

    i = 0;
    len = 0;
    while (s1[i++]){
        j = 0;
        while (set[j++])
            if (s1[i-1] != set[j-1])
                len++;
    }
    str = (char *)malloc(sizeof(s1)*(len+1));
    if (!str)
        return NULL;
    i = 0;
    len = 0;
    while (s1[i++]){
        j = 0;
        while (set[j++])
            if (s1[i-1] != set[j-1])
                str[len++] = s1[i-1];
    }
    str[len] = '\0';
    return str;
}