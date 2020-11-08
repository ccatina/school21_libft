/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:19:59 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/03 17:27:29 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    ft_bzero(void * s, size_t  n ){
    size_t  i;

    i = 0;
    while (i < n){
        ((unsigned char*)s)[i] = 0;
        i++;
    }
}