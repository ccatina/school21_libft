/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 22:11:51 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/16 23:49:31 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	size_t	i;
	size_t	j;
	char	*a;

	i = 0;
	a = (char *)s;
	if (!ft_strlen(find))
		return ((char *)s);
	while ((i < slen) && (s[i]))
	{
		j = 0;
		while ((find[j] == s[i + j]) && ((i + j) < slen))
		{
			if (!(find[j + 1]))
				return (a + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
