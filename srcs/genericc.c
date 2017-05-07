#include <stdio.h>
#include <locale.h>
#include <limits.h>

int		main(int argc, char **argv)
{
	setlocale(LC_ALL, "");
	int res = printf(__FORMAT____ARGS__); printf(" r%d\n", res);
}
