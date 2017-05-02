#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int res;

	res = printf("%.2d\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%.10d\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%.50d\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);

	res = printf("%.2i\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%.10i\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%.50i\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);

	res = printf("%.2u\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%.10u\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%.50u\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);

	res = printf("%.2X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%.10X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%.50X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);

	res = printf("%#.2X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%#.10X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%#.50X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);

	res = printf("%.2o\n", (void *)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%.10o\n", (void *)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%.50o\n", (void *)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);

	res = printf("%.0d\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%.0i\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%.0u\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%.0x\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%.0X\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%.0o\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
}
