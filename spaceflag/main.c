#include "libftprintf.h"

int		main(int argc, char **argv)
{
	ft_printf("int d: % d\n", ft_atoi(argv[1]));
	ft_printf("int i: % i\n", ft_atoi(argv[1]));
}
