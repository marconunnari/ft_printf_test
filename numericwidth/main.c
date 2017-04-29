#include "libftprintf.h"

int		main(int argc, char **argv)
{
	ft_printf("%2d\n", (int)strtoul(argv[1], NULL, 10));
	ft_printf("%10d\n", (int)strtoul(argv[1], NULL, 10));
	ft_printf("%50d\n", (int)strtoul(argv[1], NULL, 10));

	ft_printf("%2u\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%10u\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%50u\n", (unsigned int)strtoul(argv[1], NULL, 10));

	ft_printf("%2X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%10X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%50X\n", (unsigned int)strtoul(argv[1], NULL, 10));

	ft_printf("%#2X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%#10X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%#50X\n", (unsigned int)strtoul(argv[1], NULL, 10));
}
