/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 23:28:52 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/15 16:05:41 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int ch){
    if (ch >= 32 && ch <= 126)
        return 1;
    return 0;
}