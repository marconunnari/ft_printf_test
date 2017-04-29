#include <stdio.h>
#include <locale.h>

int		main(int argc, char **argv)
{
	setlocale(LC_ALL, "");
	printf("%ls\n",  L"Heelllooo wooorld 㑄㑅㑆");
}
