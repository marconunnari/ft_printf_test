NAME=onestring
CORRECT=$(NAME)_correct

all: $(CORRECT) $(NAME)

$(CORRECT):
	gcc -o $(CORRECT) correct.c

$(NAME):
	make -C ../ft_printf
	gcc -o $(NAME) main.c -I../ft_printf/includes -L../ft_printf -lftprintf

clean:

fclean: clean
	rm -f $(NAME) $(CORRECT)

re: fclean all

