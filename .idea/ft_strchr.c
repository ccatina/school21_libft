/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 00:19:15 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/11 10:05:24 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int ch){
    char    *ptr;

    ptr = (char *)str;
    while (*ptr){
        if (*ptr == (char)ch)
            return (ptr);
        ptr++;
    }
    if (*ptr == (char)ch)
        return ptr;
    return NULL;
}
