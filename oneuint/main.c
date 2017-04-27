#include "libftprintf.h"
#include <stdlib.h>

int		main(int argc, char **argv)
{
	ft_printf("unsigned int: %u\n", (unsigned int)strtoul(argv[1], NULL, 10));
}
