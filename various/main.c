#include "libftprintf.h"

int		main(int argc, char **argv)
{
	ft_printf("%#08x\n", 42);
	ft_printf("@moulitest: %#.x %#.0x\n", 0, 0);
	ft_printf("@moulitest: %.x %.0x\n", 0, 0);
	ft_printf("@moulitest: %5.x %5.0x\n", 0, 0);
	ft_printf("%c\n", 0);
}
