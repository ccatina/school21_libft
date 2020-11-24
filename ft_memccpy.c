/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 15:48:23 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/10 23:31:03 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int ch, size_t count)
{
	size_t		i;
	unsigned char	c;

	i = 0;
	while (i < count)
	{
		c = ((unsigned char*)source)[i];
		((unsigned char*)dest)[i] = c;
		if (c == (unsigned char)ch)
			return (&(((unsigned char*)dest)[i + 1]));
		i++;
	}
	return (NULL);
}
