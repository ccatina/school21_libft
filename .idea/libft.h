/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:41:47 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/15 16:10:57 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memset(void *buf, int ch, size_t count);
void    *ft_memmove(void *dest, const void *source, size_t count);
void    *ft_memcpy(void *dest, const void *source, size_t count);
void    *ft_memccpy(void *dest, const void *source, int ch, size_t count);
void    ft_bzero(void *s, size_t  n );
void    *ft_memchr (const void *arr, int c, size_t n);
void    *ft_calloc(size_t num, size_t size);

int ft_memcmp(const void *buf1, const void *buf2, size_t count);
int ft_strncmp(const char *str1, const char *str2, size_t count);

int ft_isalpha(int ch);
int ft_isdigit(int ch);
int ft_isascii(int ch);
int ft_isprint(int ch);
int ft_isalnum(int ch);
int ft_toupper(int ch);
int ft_tolower(int ch);

char    *ft_strchr(const char *str, int ch);
char    *ft_strrchr(const char *str, int ch);
char    *strdup(const char *str);


size_t  ft_strlcpy (char *dst, const char *src, size_t size);
size_t  ft_strlen(const char *str);







