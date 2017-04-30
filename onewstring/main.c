#include "libftprintf.h"
#include <locale.h>


int		main(int argc, char **argv)
{
	setlocale(LC_ALL, "");
	int res;

	res = ft_printf("%ls ",  L"Heelllooo wooorld 㑄㑅㑆𐀀");
	ft_printf("%d\n\n", res);
	res = ft_printf("%S ",  L"Heelllooo wooorld 㑄㑅㑆𐀀");
	ft_printf("%d\n\n", res);

	res = ft_printf("%.1ls ", L"㑄㑅㑆𐀀");
	ft_printf("%d\n\n", res);
	res = ft_printf("%.2ls ", L"㑄㑅㑆𐀀");
	ft_printf("%d\n\n", res);
	res = ft_printf("%.3ls ", L"㑄㑅㑆𐀀");
	ft_printf("%d\n\n", res);
	res = ft_printf("%.4ls ", L"㑄㑅㑆𐀀");
	ft_printf("%d\n\n", res);
	res = ft_printf("%.5ls ", L"㑄㑅㑆𐀀");
	ft_printf("%d\n\n", res);
	res = ft_printf("%.6ls ", L"㑄㑅㑆𐀀");
	ft_printf("%d\n\n", res);
	res = ft_printf("%.7ls ", L"㑄㑅㑆𐀀");
	ft_printf("%d\n\n", res);
	res = ft_printf("%.10ls ", L"㑄㑅㑆𐀀");
	ft_printf("%d\n\n", res);
	res = ft_printf("%.14ls ", L"㑄㑅㑆𐀀");
	ft_printf("%d\n\n", res);

	res = ft_printf("%1ls ", L"㑄㑅㑆𐀀");
	ft_printf("%d\n\n", res);
	res = ft_printf("%15ls ", L"㑄㑅㑆𐀀");
	ft_printf("%d\n\n", res);
	res = ft_printf("%50ls ", L"㑄㑅㑆𐀀");
	ft_printf("%d\n\n", res);
}
