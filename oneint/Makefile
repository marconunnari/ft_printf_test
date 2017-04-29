NAME=oneint
CORRECT=$(NAME)_correct

all: $(CORRECT) $(NAME)

$(CORRECT):
	gcc -Wno-format -o $(CORRECT) correct.c

$(NAME):
	make re -C ../ft_printf
	gcc -o $(NAME) main.c -I../ft_printf/includes -L../ft_printf -lftprintf

clean:

fclean: clean
	rm -f $(NAME) $(CORRECT)

re: fclean all

