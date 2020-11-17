/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 23:43:45 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/16 23:37:10 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *str)
{
    char    *ptr;
    size_t  i;

    ptr = (char *)malloc((ft_strlen(str) + 2) * sizeof(str));
    if (!ptr)
        return NULL;
    i = 0;
    while (i < ft_strlen(str))
    {
        ptr[i] = str[i];
        i++;
    }
    ptr[i] = '\0';
    return ptr;
}
