/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:52:46 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/17 18:09:18 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i++ < n)
		if (((unsigned char*)arr)[i - 1] == (unsigned char)c)
			return (&(((unsigned char*)arr)[i - 1]));
	return (NULL);
}
