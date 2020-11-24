/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:21:32 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/16 16:18:43 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t      i;
    char        *str;

    if (!s)
        return (NULL);
    if (ft_strlen(s) < start)
    {
        if (!(str = (char *)malloc(1)))
            return (NULL);
        str[0] = '\0';
        return (str);
    }
    if (ft_strlen(s) <= (start + len))
        len = ft_strlen(s) - start;
    if (!(str = (char *)malloc(len + 1)))
        return (NULL);
    i = 0;
    while (s[start] && i < len)
        str[i++] = s[start++];
    str[i] = '\0';
    return (str);
}
