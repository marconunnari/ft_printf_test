#include "libftprintf.h"

int		main(int argc, char **argv)
{
	ft_printf("char: %c\n", argv[1][0]);
	ft_printf("%10c\n", argv[1][0]);
}
