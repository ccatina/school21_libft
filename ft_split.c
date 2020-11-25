/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:18:18 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/17 17:48:38 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char const *s, char c)
{
	int	count;
	int	i;

	if (!s[0])
		return (0);
	count = 1;
	i = -1;
	while (s[++i])
	{
		if (s[i] == c && s[i] && s[i + 1] != c)
			count++;
	}
	if (s[0] == c || s[i - 1] == c)
		count--;
	return (count);
}

static char	**freestr(char **s)
{
	size_t	i;

	i = -1;
	while (s[++i])
		free(s[i]);
	free(*s);
	return (NULL);
}

static int	len(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

char		**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		flag;

	i = -1;
	j = -1;
	flag = 1;
	if (!s || !(str = (char **)malloc(sizeof(char*)
			* (check(s, c) + 1))))
		return (NULL);
	while (s[++i])
	{
		if (!flag && s[i] == c && s[i + 1] != c && s[i + 1])
			flag = 1;
		if (s[i] != c && flag)
		{
			if (!(str[++j] = ft_substr(s + i, 0, len(s + i, c))))
				return (freestr(str));
			flag = 0;
		}
	}
	str[++j] = NULL;
	return (str);
}
