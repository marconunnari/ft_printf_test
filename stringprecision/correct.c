#include <stdio.h>
#include <string.h>

int		main(int argc, char **argv)
{
	char *str = strcmp(argv[1],"NULL")==0?NULL:argv[1];
	printf("string: %.0s\n", str);
	printf("string: %.1s\n", str);
	printf("string: %.2s\n", str);
	printf("string: %.5s\n", str);
	printf("string: %.10s\n", str);
	printf("string: %.100s\n", str);
}
