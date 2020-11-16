/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 16:14:01 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/16 16:55:21 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *source, size_t count){

    if (!dest || !source)
        return NULL;
    if (((unsigned char*)dest + count) < (unsigned char*)source || (unsigned char*)source > (unsigned char*)dest)
        return ft_memcpy(dest,source, count);
    while (count-- > 0)
        ((unsigned char*)dest)[count] = ((unsigned char*)source)[count];
    return dest;
}
