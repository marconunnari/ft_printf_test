#define _GNU_SOURCE
#include <stdio.h>
#include "libftprintf.h"

int		main(int argc, char **argv)
{
	char *s = "ciao";
	char *r1;
	char *r2;
	ft_asprintf(&r1, "pointer: %p\n", (void*)s);
	asprintf(&r2, "pointer: %p\n", (void*)s);
	ft_printf("%d\n", ft_strequ(r1, r2));
	ft_strdel(&r1);
	ft_strdel(&r2);
}
