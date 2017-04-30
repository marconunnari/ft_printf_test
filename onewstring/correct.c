#include <stdio.h>
#include <locale.h>

int		main(int argc, char **argv)
{
	setlocale(LC_ALL, "");
	int res;

	res = printf("%ls ",  L"Heelllooo wooorld 㑄㑅㑆𐀀");
	printf("%d\n\n", res);
	res = printf("%S ",  L"Heelllooo wooorld 㑄㑅㑆𐀀");
	printf("%d\n\n", res);

	res = printf("%.1ls ", L"㑄㑅㑆𐀀");
	printf("%d\n\n", res);
	res = printf("%.2ls ", L"㑄㑅㑆𐀀");
	printf("%d\n\n", res);
	res = printf("%.3ls ", L"㑄㑅㑆𐀀");
	printf("%d\n\n", res);
	res = printf("%.4ls ", L"㑄㑅㑆𐀀");
	printf("%d\n\n", res);
	res = printf("%.5ls ", L"㑄㑅㑆𐀀");
	printf("%d\n\n", res);
	res = printf("%.6ls ", L"㑄㑅㑆𐀀");
	printf("%d\n\n", res);
	res = printf("%.7ls ", L"㑄㑅㑆𐀀");
	printf("%d\n\n", res);
	res = printf("%.10ls ", L"㑄㑅㑆𐀀");
	printf("%d\n\n", res);
	res = printf("%.14ls ", L"㑄㑅㑆𐀀");
	printf("%d\n\n", res);

	res = printf("%1ls ", L"㑄㑅㑆𐀀");
	printf("%d\n\n", res);
	res = printf("%15ls ", L"㑄㑅㑆𐀀");
	printf("%d\n\n", res);
	res = printf("%50ls ", L"㑄㑅㑆𐀀");
	printf("%d\n\n", res);
}
