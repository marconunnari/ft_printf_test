#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int res;

	res = printf("%2d\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%10d\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%50d\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);

	res = printf("%2u\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%10u\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%50u\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);

	res = printf("%2X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%10X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%50X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);

	res = printf("%#2X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%#10X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%#50X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);

	res = printf("%2p\n", (void *)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%10p\n", (void *)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%50p\n", (void *)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);

	res = printf("%02d\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%010d\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%050d\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);

	res = printf("%0-10dend\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
	res = printf("%-010dend\n", (int)strtoul(argv[1], NULL, 10));
	printf("%d\n", res);
}
