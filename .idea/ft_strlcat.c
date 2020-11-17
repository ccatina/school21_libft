/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:13:25 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/17 00:23:46 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat (char *dst, const char *src, size_t size){
    size_t  res;
    size_t  dstl;

	dstl = ft_strlen(dst);
	if (size < dstl)
		res = size + ft_strlen(src);
	else
		res = dstl + ft_strlen(src);
    if (size > dstl)
	{
		dst += dstl;
		size -= dstl;
		while (*src && size-- > 1)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (res);
}
