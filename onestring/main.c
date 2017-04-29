#include "libftprintf.h"

int		main(int argc, char **argv)
{
	char *str = ft_strcmp(argv[1],"NULL")==0?NULL:argv[1];

	ft_printf("string: %s\n", str);
	ft_printf("res: %2s\n", str);
	ft_printf("res: %10s\n", str);
	ft_printf("res: %50s\n", str);
	ft_printf("res: %-2s end\n", str);
	ft_printf("res: %-10s end\n", str);
	ft_printf("res: %-50s end\n", str);
	ft_printf("string: %.0s\n", str);
	ft_printf("string: %.1s\n", str);
	ft_printf("string: %.2s\n", str);
	ft_printf("string: %.5s\n", str);
	ft_printf("string: %.10s\n", str);
	ft_printf("string: %.100s\n", str);
}
