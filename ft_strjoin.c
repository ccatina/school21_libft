/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 16:45:51 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/16 14:46:39 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;

    if (!s1 || !s2)
        return (NULL);
    if (!(str = (char *)malloc(ft_strlen(s1)+ft_strlen(s2)+1)))
        return (NULL);
    ft_strlcpy(str, s1, ft_strlen(s1) + 1);
    ft_strlcat(str, s2, ft_strlen(s2) + ft_strlen(s1) +1);
    return (str);
}