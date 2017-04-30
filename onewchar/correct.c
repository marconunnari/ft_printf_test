#include <stdio.h>
#include <locale.h>

int		main(int argc, char **argv)
{
	setlocale(LC_ALL, "");
	int res;

	res = printf("wchar: %lc\n", L'A');
	printf("res: %d\n", res);
	res = printf("wchar: %lc\n", L'ߦ');
	printf("res: %d\n", res);
	res = printf("wchar: %lc\n", L'ሴ');
	printf("res: %d\n", res);
	res = printf("wchar: %lc\n", L'𐀀');
	printf("res: %d\n", res);

	res = printf("wchar: %C\n", L'A');
	printf("res: %d\n", res);
	res = printf("wchar: %C\n", L'ߦ');
	printf("res: %d\n", res);
	res = printf("wchar: %C\n", L'ሴ');
	printf("res: %d\n", res);
	res = printf("wchar: %C\n", L'𐀀');
	printf("res: %d\n", res);
}
