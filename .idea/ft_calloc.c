/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:53:14 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/16 23:27:00 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t num, size_t size){
    void    *ptr;

    ptr = malloc(num * size);
    if (!ptr)
        return NULL;
    ft_bzero(ptr, num);
    return ptr;
}
