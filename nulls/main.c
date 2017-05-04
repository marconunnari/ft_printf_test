#include "libftprintf.h"

int main()
{
	int res;
	res = ft_printf("%2p\n", 0);
	ft_printf("%d\n", res);
	res = ft_printf("%10p\n", 0);
	ft_printf("%d\n", res);
	res = ft_printf("%50p\n", 0);
	ft_printf("%d\n", res);
	res = ft_printf("string: %.0s\n", NULL);
	ft_printf("%d\n", res);
	res = ft_printf("string: %.1s\n", NULL);
	ft_printf("%d\n", res);
	res = ft_printf("string: %.2s\n", NULL);
	ft_printf("%d\n", res);
	res = ft_printf("string: %.5s\n", NULL);
	ft_printf("%d\n", res);
	res = ft_printf("string: %.10s\n", NULL);
	ft_printf("%d\n", res);
	res = ft_printf("string: %.100s\n", NULL);
	ft_printf("%d\n", res);
	res = ft_printf("pointer: %p\n", (void*)0);
	ft_printf("%d\n", res);
}
