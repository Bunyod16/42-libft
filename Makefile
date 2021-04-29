NAME = runme.a
SRC = *.c libft.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra *.c
	gcc -o *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
