/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 15:48:23 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/08 16:13:54 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *memccpy(void *dest, const void *source, int ch, size_t count){
    size_t  i;
    unsigned char c;

    i = 0;
    while (i < count){
        c = ((unsigned char*)source)[i];
        ((unsigned char*)dest)[i++] = c;
        if (c == (unsigned char)ch)
            return &(((unsigned char*)dest)[i]);
    }
    return NULL;
}