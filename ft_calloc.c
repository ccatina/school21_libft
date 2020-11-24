/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:53:14 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/17 17:55:06 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

    if (!num || !size)
    {
        num = 1;
        size = 1;
    }
	if (!(ptr = malloc(num * size)))
		return (0);
	ft_bzero(ptr, num * size);
	return (ptr);
}
