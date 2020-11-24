/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 22:07:26 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/17 18:20:16 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t count)
{
	size_t  i;

	i = -1;
	while ((++i < count) && (str1[i] || str2[i]))
	{
	    if ((int)str1[i] < 0 || (int)str2 < 0)
	        return (1);
		if (str1[i] != str2[i])
		    return (str1[i] - str2[i]);
   }
	return (0);
}
