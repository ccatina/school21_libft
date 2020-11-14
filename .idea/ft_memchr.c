/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:52:46 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/10 23:27:17 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr (const void *arr, int c, size_t n){
    size_t  i;

    i = 0;
    while (i < n){
        if ( ((unsigned char*)arr)[i] == (unsigned char)c)
            return &(((unsigned char*)arr)[i]);
        i++;
    };
    return NULL;
}

