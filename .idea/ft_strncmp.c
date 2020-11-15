/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 22:07:26 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/14 23:15:01 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t count){
    size_t  i;

    i = 0;
    while (i++ < count){
        if ((str1[i-1] > str2[i-1]) || (str2[i-1] == '\0'))
            return 1;
        else if ((str1[i-1] < str2[i-1]) || (str1[i-1] == '\0'))
            return -1;
    }
    return 0;
}
