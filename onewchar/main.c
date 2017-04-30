#include "libftprintf.h"
#include <locale.h>

int		main(int argc, char **argv)
{
	setlocale(LC_ALL, "");
	ft_printf("wchar: %lc\n", L'A');
	ft_printf("wchar: %lc\n", L'ߦ');
	ft_printf("wchar: %lc\n", L'𐀀');
}
