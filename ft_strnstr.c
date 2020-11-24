/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 22:11:51 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/16 23:49:31 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *s, const char *find, size_t slen)
{
    size_t  i;
    size_t  j;
    char    *a;

    i = -1;
    j = 0;
    if (!find[j])
        return ((char *)s);
    while ((++i < slen) && (find[j]))
    {
        if (s[i] != find[j])
            continue;
        a = (char *)&(s[i]);
        while (find[j++])
        {
            if ((s[i] != find[j-1]) || (i >= slen))
                return (NULL);
            i++;
        }
        return (a);
    }
    return (NULL);
}
