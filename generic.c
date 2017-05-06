#include "libftprintf.h"

int		main(int argc, char **argv)
{
	int res = ft_printf(__FORMAT__, __ARGS__); ft_printf(" %d\n", res);
}
