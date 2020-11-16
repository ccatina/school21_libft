/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 22:11:51 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/16 18:46:52 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *s, const char *find, size_t slen)
{
    size_t  i;
    size_t  j;
    char    *a;

    i = 0;
    j = 0;
    if (find[j] == '\0')
        return ((char *)s);
    while ((i++ < slen) && (find[j] != '\0'))
    {
        if (s[i-1] != find[j])
            continue;
        a = (char *)&(s[i-1]);
        while (find[j++] != '\0')
        {
            if (s[i-1] != find[j-1])
                return NULL;
            i++;
        }
        return a;
    }
    return NULL;
}
