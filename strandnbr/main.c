#include "libftprintf.h"

int		main(int argc, char **argv)
{
	int res;
	res = ft_printf("%s%d%%%s%u\n", "hello", 42, "world", 24);
	ft_printf("%d\n", res);
}
