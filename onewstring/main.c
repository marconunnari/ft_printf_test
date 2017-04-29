#include "libftprintf.h"
#include <locale.h>


int		main(int argc, char **argv)
{
	setlocale(LC_ALL, "");
	ft_printf("%hhx\n", "𐀀"[0]);
	ft_printf("%hhx\n", "𐀀"[1]);
	ft_printf("%hhx\n", "𐀀"[2]);
	ft_printf("%hhx\n", "𐀀"[3]);
	ft_printf("%d\n", ft_strlen("𐀀"));
	ft_printf("%s\n", "𐀀");
}
