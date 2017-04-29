#include "libftprintf.h"

int		main(int argc, char **argv)
{
	t_placeholder *res = init_placeholder();

	ft_putnbr(ft_strlen(res->flags));
	ft_putstr("\n");

	ft_putnbr(ft_strlen(res->width));
	ft_putstr("\n");

	ft_putnbr(ft_strlen(res->precision));
	ft_putstr("\n");

	ft_putnbr(ft_strlen(res->length));
	ft_putstr("\n");

	free_placeholder(res);
}
