/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:41:47 by ccatina           #+#    #+#             */
/*   Updated: 2020/11/16 21:20:13 by ccatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef LIBFT_H
// # define LIBFT_H

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
int ft_atoi(const char *str);

char    *ft_strchr(const char *str, int ch);
char    *ft_strrchr(const char *str, int ch);
char    *strdup(const char *str);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);

size_t  ft_strlcpy (char *dst, const char *src, size_t size);
size_t  ft_strlen(const char *str);
//#endif






