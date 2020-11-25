/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:57:47 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/17 00:35:04 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkl(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	chr;

	i = 0;
	while (s1[i])
	{
		j = -1;
		chr = 0;
		while (set[++j])
			if (s1[i] == set[j])
				chr = 1;
		if (!chr)
			return (i);
		i++;
	}
	return (i);
}

static int	checkr(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	chr;

	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		j = -1;
		chr = 0;
		while (set[++j])
			if (s1[i] == set[j])
				chr = 1;
		if (!chr)
			return (i);
		i--;
	}
	return (i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	int			start;
	int			end;

	if (!s1)
		return (NULL);
	start = checkl(s1, set);
	end = checkr(s1, set);
	if (start > end)
		return (ft_strdup(""));
	if (!(str = (char *)malloc(end - start + 2)))
		return (NULL);
	if (!(ft_strlcpy(str, s1 + start, end - start + 2)))
		return (ft_strdup(""));
	return (str);
}
