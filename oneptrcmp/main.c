#define _GNU_SOURCE
#include <stdio.h>
#include "libftprintf.h"

int		main(int argc, char **argv)
{
	char *s = "ciao";
	char *r1;
	char *r2;
	int res1;
	int res2;
	res1 = ft_asprintf(&r1, "pointer: %p\n", (void*)s);
	res2 = asprintf(&r2, "pointer: %p\n", (void*)s);
	ft_printf("%d\n", ft_strequ(r1, r2));
	ft_printf("%d\n", res1 == res2);
	ft_strdel(&r1);
	ft_strdel(&r2);
}
