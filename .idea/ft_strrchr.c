/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 10:11:55 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/11 10:26:32 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int ch){
    size_t  i;

    i = ft_strlen(str);
    while (i > = 0){
        if (str[i] == (char)ch)
            return (&(str[i]));
        --i;
    }
    return NULL;
}