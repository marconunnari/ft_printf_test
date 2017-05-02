#include <stdio.h>

int		main(int argc, char **argv)
{
	int res;
	res = printf("string1: %s, string2: %s\n", argv[1], argv[2]);
	res = printf("%s%s\n", argv[1], argv[2]);
	printf("%d\n", res);
}
