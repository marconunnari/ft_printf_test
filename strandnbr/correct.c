#include <stdio.h>

int		main(int argc, char **argv)
{
	int res;
	res = printf("%s%d%%%s%u\n", "hello", 42, "world", 24);
	printf("%d\n", res);
}
