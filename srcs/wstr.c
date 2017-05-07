#include "libftprintf.h"

int		main()
{
	int res;
	res = ft_printf("%S", L"Heelllooo wooorld 㑄㑅㑆𐀀"); ft_printf(" %d\n", res);
	res = ft_printf("%S", L"Aሴ𐀀"); ft_printf(" %d\n", res);
}
