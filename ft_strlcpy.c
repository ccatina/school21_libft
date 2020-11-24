/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 23:20:38 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/17 18:22:34 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy (char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dst)
		return (0);
	if (!size)
		return (ft_strlen(src));
	while ((i + 1 < size) && (src[i]))
	{
        dst[i] = src[i];
        i++;
    }
	dst[i] = '\0';
	return (ft_strlen(src));
}
