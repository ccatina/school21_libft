/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 23:15:48 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/17 17:46:22 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	int	i;

	i = ((n <= 0) ? 1 : 0);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int				size;
	int				sign;
	char			*str;
	unsigned int	nb;

	size = count(n);
	sign = (n < 0) ? 1 : 0;
	nb = (n < 0) ? -n : n;
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	str[size] = '\0';
	while (size)
	{
		str[--size] = nb % 10 + '0';
		nb /= 10;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}
