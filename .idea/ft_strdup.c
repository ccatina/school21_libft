/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 23:43:45 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/14 23:49:09 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *strdup(const char *str){
    char    *ptr;
    size_t  i;

    ptr = (char *)malloc((ft_strlen(str)+1)*sizeof(str));
    if (!ptr)
        return NULL;
    i = 0;
    while (str[i++])
        ptr[i-1] = str[i-1]; 
    ptr[i-1] = '\0';
    return ptr;
}