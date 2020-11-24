/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 23:10:30 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/17 18:10:46 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    char *str;

    if (!s || !(str = (char *)malloc(ft_strlen(s) + 1)))
        return (NULL);
    i = -1;
    while (s[++i])
        str[i] = f(i, s[i]);
    str[i] = '\0';
    return (str);
}