/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 23:43:45 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/17 18:15:12 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;
	size_t	i;

	if (!(ptr = (char *)malloc((int)ft_strlen(str) + 1)))
		return (NULL);
	i = -1;
	while (++i < ft_strlen(str))
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
