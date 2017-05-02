#include <stdio.h>
#include <string.h>

int		main(int argc, char **argv)
{
	int res;
	char *str = strcmp(argv[1],"NULL")==0?NULL:argv[1];

	res = printf("string: %s\n", str);
	printf("%d\n", res);
	res = printf("res: %2s\n", str);
	printf("%d\n", res);
	res = printf("res: %10s\n", str);
	printf("%d\n", res);
	res = printf("res: %50s\n", str);
	printf("%d\n", res);
	res = printf("res: %-2s end\n", str);
	printf("%d\n", res);
	res = printf("res: %-10s end\n", str);
	printf("%d\n", res);
	res = printf("res: %-50s end\n", str);
	printf("%d\n", res);
	res = printf("string: %.0s\n", str);
	printf("%d\n", res);
	res = printf("string: %.1s\n", str);
	printf("%d\n", res);
	res = printf("string: %.2s\n", str);
	printf("%d\n", res);
	res = printf("string: %.5s\n", str);
	printf("%d\n", res);
	res = printf("string: %.10s\n", str);
	printf("%d\n", res);
	res = printf("string: %.100s\n", str);
	printf("%d\n", res);
}
