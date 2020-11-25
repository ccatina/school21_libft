# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccatina <ccatina@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/25 13:55:38 by ccatina           #+#    #+#              #
#    Updated: 2020/11/25 13:55:44 by ccatina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	=gcc
CFLAGS	=-Wall -Wextra -Werror -I. -MD
SOURCES	=ft_a*.c ft_b*.c ft_c*.c ft_m*.c ft_p*.c ft_s*.c ft_t*.c
SOURCESB	=ft_lst*.c
OBJECTS	=*.o
NAME	=libft.a

$(NAME): $(SOURCES) libft.h
	@$(CC) -c $(CFLAGS) $(SOURCES)
	@ar -rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

all: $(NAME)

bonus:
	@$(CC) -c $(CFLAGS) -c $(SOURCES) $(SOURCESB)
	@ar -rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

so:
	$(CC) -c $(CFLAGS) $(SOURCES)
	$(CC) -shared -o libft.so $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY:	all clean fclean re
