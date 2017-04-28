#include "libftprintf.h"

int		main(int argc, char **argv)
{
	char *str = ft_strcmp(argv[1],"NULL")==0?NULL:argv[1];
	ft_printf("string: %s\n", str);
}
