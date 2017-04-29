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

	ft_printf("%2p\n", (void *)strtoul(argv[1], NULL, 10));
	ft_printf("%10p\n", (void *)strtoul(argv[1], NULL, 10));
	ft_printf("%50p\n", (void *)strtoul(argv[1], NULL, 10));

	ft_printf("%02d\n", (int)strtoul(argv[1], NULL, 10));
	ft_printf("%010d\n", (int)strtoul(argv[1], NULL, 10));
	ft_printf("%050d\n", (int)strtoul(argv[1], NULL, 10));

	ft_printf("%0-10dend\n", (int)strtoul(argv[1], NULL, 10));
	ft_printf("%-010dend\n", (int)strtoul(argv[1], NULL, 10));
}
