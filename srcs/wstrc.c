#include <stdio.h>
#include <locale.h>

int		main()
{
	setlocale(LC_ALL, "");

	int res;
	res = printf("%S", L"Heelllooo wooorld 㑄㑅㑆𐀀"); printf(" %d\n", res);
	res = printf("%S", L"Aሴ𐀀"); printf(" %d\n", res);
}
