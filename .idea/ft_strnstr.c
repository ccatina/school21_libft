/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 22:11:51 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/15 16:00:30 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *s, const char *find, size_t slen){
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (*find)
        return ((char *)s);
    if (slen > ft_strlen(s))
        return NULL;

    while ((i++ < slen) && (*find != '\0')){
        if (s[i-1] != find[j])
            continue;
        while (i++ < slen){
            if (*find)
                return (char *)(&(s[i-1]));
            if (s[i] != find[j])
                break;
            j++;
        }
    }
    return NULL;
}