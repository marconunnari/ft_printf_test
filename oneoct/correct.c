#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	printf("octal: %o\n", (unsigned int)strtoul(argv[1], NULL, 10));
}
