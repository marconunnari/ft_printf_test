#include <stdio.h>

int		main(int argc, char **argv)
{
	int res = printf(__FORMAT__, __ARGS__); printf(" %d\n", res);
}
