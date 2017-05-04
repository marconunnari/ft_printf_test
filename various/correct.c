#include <stdio.h>

int		main(int argc, char **argv)
{
	printf("%#08x\n", 42);
	printf("@moulitest: %#.x %#.0x\n", 0, 0);
	printf("@moulitest: %.x %.0x\n", 0, 0);
	printf("@moulitest: %5.x %5.0x\n", 0, 0);
	printf("%c\n", 0);
	printf("%#08o\n", 42);
	printf("%# 8x\n", 42);
	printf("%#-08x\n", 42);
	printf("@moulitest: %#.o %#.0o\n", 0, 0);
	printf("%0+5d\n", 42);
	printf("%05d\n", -42);
	printf("%0+5d\n", -42);
	printf("% 10.5d\n", 4242);
	printf("%+10.5d\n", 4242);
	printf("%-+10.5d\n", 4242);
	printf("%03.2d\n", 0);
	printf("%03.2d\n", 1);
	printf("%03.2d\n", -1);
	printf("@moulitest: %.10d\n", -42);
}
