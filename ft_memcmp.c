/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 19:01:07 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/17 18:24:15 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	size_t	i;

	i = 0;
	if (!count || (buf1 != NULL && buf2 == buf1))
		return (0);
	while ((((unsigned char *)buf1)[i] == ((unsigned char *)buf2)[i])
	&& (i < count - 1))
		i++;
	return (((unsigned char *)buf1)[i] - ((unsigned char *)buf2)[i]);
}
