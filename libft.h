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

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

void	*ft_memset(void *buf, int ch, size_t count);
void	*ft_memmove(void *dest, const void *source, size_t count);
void	*ft_memcpy(void *dest, const void *source, size_t count);
void	*ft_memccpy(void *dest, const void *source, int ch, size_t count);
void	ft_bzero(void *s, size_t  n );
void	*ft_memchr (const void *arr, int c, size_t n);
void	*ft_calloc(size_t num, size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));

int	ft_memcmp(const void *buf1, const void *buf2, size_t count);
int	ft_strncmp(const char *str1, const char *str2, size_t count);
int	ft_isalpha(int ch);
int	ft_isdigit(int ch);
int	ft_isascii(int ch);
int	ft_isprint(int ch);
int	ft_isalnum(int ch);
int	ft_toupper(int ch);
int	ft_tolower(int ch);
int	ft_atoi(const char *str);
int	ft_lstsize(t_list *lst);

char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *s, const char *find, size_t slen);
char	**ft_split(char const *s, char c);


size_t	ft_strlcpy (char *dst, const char *src, size_t size);
size_t	ft_strlcat (char *dst, const char *src, size_t size);
size_t	ft_strlcat (char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
