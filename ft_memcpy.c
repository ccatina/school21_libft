/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:22:24 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/17 18:07:01 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t count)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = -1;
	if (!dest && !source)
		return (NULL);
	d = (unsigned char*)dest;
	s = (unsigned char*)source;
	while (++i < count)
		d[i] = s[i];
	return (d);
}
