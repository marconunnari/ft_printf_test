#include "libftprintf.h"
#include <locale.h>

int		main(int argc, char **argv)
{
	setlocale(LC_ALL, "");
	int res;

	res = ft_printf("wchar: %lc\n", L'A');
	ft_printf("res: %d\n", res);
	res = ft_printf("wchar: %lc\n", L'ߦ');
	ft_printf("res: %d\n", res);
	res = ft_printf("wchar: %lc\n", L'ሴ');
	ft_printf("res: %d\n", res);
	res = ft_printf("wchar: %lc\n", L'𐀀');
	ft_printf("res: %d\n", res);

	res = ft_printf("wchar: %C\n", L'A');
	ft_printf("res: %d\n", res);
	res = ft_printf("wchar: %C\n", L'ߦ');
	ft_printf("res: %d\n", res);
	res = ft_printf("wchar: %C\n", L'ሴ');
	ft_printf("res: %d\n", res);
	res = ft_printf("wchar: %C\n", L'𐀀');
	ft_printf("res: %d\n", res);

}
