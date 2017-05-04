#include "libftprintf.h"

int		main(int argc, char **argv)
{
	ft_printf("D: %D\n", strtoull(argv[1], NULL, 10));
	ft_printf("U: %U\n", strtoull(argv[1], NULL, 10));
	ft_printf("O: %O\n", strtoull(argv[1], NULL, 10));
	ft_printf("%hU\n", 4294967296);
}
