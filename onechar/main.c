#include "libftprintf.h"

int		main(int argc, char **argv)
{
	int res;
	res = ft_printf("char: %c\n", argv[1][0]);
	ft_printf("%d\n", res);
	res = ft_printf("%10c\n", argv[1][0]);
	ft_printf("%d\n", res);
}
