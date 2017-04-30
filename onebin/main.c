#include "libftprintf.h"

int		main(int argc, char **argv)
{
/*	ft_printf("bin: %b\n", ft_atoi(argv[1]));
	ft_printf("bin with length hh: %hhb\n", ft_atoi(argv[1]));
	ft_printf("bin with length h: %hb\n", strtoull(argv[1], NULL, 10));
	ft_printf("bin with length l: %lb\n", strtoull(argv[1], NULL, 10));
	ft_printf("bin with length ll: %llb\n", strtoull(argv[1], NULL, 10));
	ft_printf("bin with length z: %zb\n", strtoull(argv[1], NULL, 10));
*/
	ft_printf("bin with length j: %jb\n", strtoull(argv[1], NULL, 10));
}
