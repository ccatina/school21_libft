/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:02:19 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/03 17:27:29 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *memset(void *buf, int ch, size_t count){
    size_t i;

    i = 0;
    while (i < count){
        ((unsigned char*)buf)[i] = (unsigned char)ch;
        i++;
    }
    return buf;
}