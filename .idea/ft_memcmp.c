/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 19:01:07 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/16 21:15:59 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *buf1, const void *buf2, size_t count){

    size_t  i;

    i = 0;
    while (i < count){
        if (((unsigned char*)buf1)[i] > ((unsigned char*)buf2)[i])
            return 1;
        else if (((unsigned char*)buf1)[i] < ((unsigned char*)buf2)[i])
            return -1;
        i++;
    }
    return 0;
}
