/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:46:49 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/16 21:24:09 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static  int ft_limits(long long i){
    if ((i == LONG_MAX) || (i == __LONG_LONG_MAX__))
        return -1;
    if ((i == LONG_MIN) || i == -__LONG_LONG_MAX__)
        return 0;
    return 2;
}

int ft_atoi(const char *str)
{
    long long int   count;
    size_t  i;
    int     flag;

    i = 0;
    if (str[i] == '\0')
        return 0;
    while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
            i++;
    flag = (str[i] == '-') ? -1 : 1;
    (flag == -1) ? i++ : i;
    count = 0;
    while ((str[i] >= '0') && (str[i] <= '9'))
        count = (count * 10) + (str[i++] - '0');
    if (ft_limits(count) == 2)
        return ((int)(flag * count));
    else return ft_limits(count);
}
