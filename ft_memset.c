/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:02:19 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/17 18:06:06 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t count)
{
	size_t	i;

	i = 0;
	while (i++ < count)
		((unsigned char*)buf)[i - 1] = (unsigned char)ch;
	return (buf);
}
