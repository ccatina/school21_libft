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

char    *ft_strjoin(char const *s1, char const *s2){
    char    *str;
    size_t  i;
    size_t  j;

    i = 0;
    str = (char *)malloc(sizeof(s1)*(ft_strlen(s1)+ft_strlen(s2)+1));
    if (!str)
        return NULL;
    while (i < ft_strlen(s1)){
        str[j++] = s1[i];
        i++;
    }
    i = 0;
    while (i < ft_strlen(s2)){
        str[j++] = s1[i-1];
        i++;
    }
    str[j] = '\0';
    return str;
}