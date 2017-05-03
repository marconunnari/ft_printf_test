#include <stdio.h>

int		main(int argc, char **argv)
{
	printf("%#08x\n", 42);
	printf("@moulitest: %#.x %#.0x\n", 0, 0);
	printf("@moulitest: %.x %.0x\n", 0, 0);
	printf("@moulitest: %5.x %5.0x\n", 0, 0);
	printf("%c\n", 0);
}
