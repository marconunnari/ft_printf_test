#include "libftprintf.h"

int		main(int argc, char **argv)
{
	int res;

	res = ft_printf("%.2d\n", (int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);
	res = ft_printf("%.10d\n", (int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);
	res = ft_printf("%.50d\n", (int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);

	res = ft_printf("%.2i\n", (int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);
	res = ft_printf("%.10i\n", (int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);
	res = ft_printf("%.50i\n", (int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);

	res = ft_printf("%.2u\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);
	res = ft_printf("%.10u\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);
	res = ft_printf("%.50u\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);

	res = ft_printf("%.2X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);
	res = ft_printf("%.10X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);
	res = ft_printf("%.50X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);

	res = ft_printf("%#.2X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);
	res = ft_printf("%#.10X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);
	res = ft_printf("%#.50X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);

	res = ft_printf("%.2o\n", (void *)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);
	res = ft_printf("%.10o\n", (void *)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);
	res = ft_printf("%.50o\n", (void *)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);

	res = ft_printf("%.0d\n", (int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);
	res = ft_printf("%.0i\n", (int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);
	res = ft_printf("%.0u\n", (int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);
	res = ft_printf("%.0x\n", (int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);
	res = ft_printf("%.0X\n", (int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);
	res = ft_printf("%.0o\n", (int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n", res);
}
