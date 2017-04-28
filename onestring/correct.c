#include <stdio.h>
#include <string.h>

int		main(int argc, char **argv)
{
	char *str = strcmp(argv[1],"NULL")==0?NULL:argv[1];
	printf("string: %s\n", str);
}
