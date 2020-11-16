CC=gcc
CFLAGS=-Wall -Wextra -Werror -I.
SOURCES=ft*.c
OBJECTS=*.o
NAME=libft.a

$(NAME): $(SOURCES) libft.h
	$(CC) -c $(CFLAGS) $(SOURCES) && ar rc $(NAME) $(OBJECTS)

all: $(NAME)

so:
	$(CC) -c $(CFLAGS) $(SOURCES)
	$(CC) -shared -o libft.so $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean:
	rm -rf $(NAME)

re: fclean all
