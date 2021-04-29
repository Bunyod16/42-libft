NAME = libft.a
SRC = *.c libft.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra *.c
	ar -rc libft.a *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
