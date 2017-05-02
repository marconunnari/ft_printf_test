#include <stdio.h>

int		main(int argc, char **argv)
{
	int res;
	res = printf("char: %c\n", argv[1][0]);
	printf("%d\n", res);
	res = printf("%10c\n", argv[1][0]);
	printf("%d\n", res);
}
