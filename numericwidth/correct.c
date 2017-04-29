#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	printf("%2d\n", (int)strtoul(argv[1], NULL, 10));
	printf("%10d\n", (int)strtoul(argv[1], NULL, 10));
	printf("%50d\n", (int)strtoul(argv[1], NULL, 10));

	printf("%2u\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%10u\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%50u\n", (unsigned int)strtoul(argv[1], NULL, 10));

	printf("%2X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%10X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%50X\n", (unsigned int)strtoul(argv[1], NULL, 10));

	printf("%#2X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%#10X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("%#50X\n", (unsigned int)strtoul(argv[1], NULL, 10));

	printf("%2p\n", (void *)strtoul(argv[1], NULL, 10));
	printf("%10p\n", (void *)strtoul(argv[1], NULL, 10));
	printf("%50p\n", (void *)strtoul(argv[1], NULL, 10));

	printf("%02d\n", (int)strtoul(argv[1], NULL, 10));
	printf("%010d\n", (int)strtoul(argv[1], NULL, 10));
	printf("%050d\n", (int)strtoul(argv[1], NULL, 10));
}
