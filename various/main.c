#include "libftprintf.h"

int		main(int argc, char **argv)
{
	ft_printf("%#08x\n", 42);
	ft_printf("@moulitest: %#.x %#.0x\n", 0, 0);
	ft_printf("@moulitest: %.x %.0x\n", 0, 0);
	ft_printf("@moulitest: %5.x %5.0x\n", 0, 0);
	ft_printf("%c\n", 0);
	ft_printf("%#08o\n", 42);
	ft_printf("%# 8x\n", 42);
	ft_printf("%#-08x\n", 42);
	ft_printf("@moulitest: %#.o %#.0o\n", 0, 0);
	ft_printf("%0+5d\n", 42);
	ft_printf("%05d\n", -42);
	ft_printf("%0+5d\n", -42);
	ft_printf("% 10.5d\n", 4242);
	ft_printf("%+10.5d\n", 4242);
	ft_printf("%-+10.5d\n", 4242);
	ft_printf("%03.2d\n", 0);
	ft_printf("%03.2d\n", 1);
	ft_printf("%03.2d\n", -1);
	ft_printf("@moulitest: %.10d\n", -42);
	ft_printf("%hU\n", 4294967296);
}
