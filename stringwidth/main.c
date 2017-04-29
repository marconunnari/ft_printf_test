#include "libftprintf.h"

int		main(int argc, char **argv)
{
	ft_printf("res: %2s\n", argv[1]);
	ft_printf("res: %10s\n", argv[1]);
	ft_printf("res: %50s\n", argv[1]);

	ft_printf("res: %-2s end\n", argv[1]);
	ft_printf("res: %-10s end\n", argv[1]);
	ft_printf("res: %-50s end\n", argv[1]);
}
