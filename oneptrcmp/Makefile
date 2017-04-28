NAME=oneptrcmp

all: $(NAME)

$(NAME):
	make -C ../ft_printf
	gcc -o $(NAME) main.c -I../ft_printf/includes -L../ft_printf -lftprintf

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

