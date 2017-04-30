#include <stdio.h>
#include <locale.h>

int		main(int argc, char **argv)
{
	setlocale(LC_ALL, "");
	printf("wchar: %lc\n", L'A');
	printf("wchar: %lc\n", L'ߦ');
	printf("wchar: %lc\n", L'𐀀');
}
