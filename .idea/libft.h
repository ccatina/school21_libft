/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:41:47 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/11 10:02:20 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memset(void *buf, int ch, size_t count);
void    *ft_memmove(void *dest, const void *source, size_t count);
void    *ft_memcpy(void *dest, const void *source, size_t count);
void    *ft_memccpy(void *dest, const void *source, int ch, size_t count);
void    ft_bzero(void *s, size_t  n );
void    *ft_memchr (const void *arr, int c, size_t n);
int ft_memcmp(const void *buf1, const void *buf2, size_t count);
char    *ft_strchr(const char *str, int ch);

size_t  ft_strlcpy (char *dst, const char *src, size_t size);
size_t  ft_strlen(const char *str);






