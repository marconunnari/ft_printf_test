#include "libftprintf.h"

int		main(int argc, char **argv)
{
	int res;
	res = ft_printf("int d: %d\n", ft_atoi(argv[1]));
	ft_printf("%d\n",res);
	res = ft_printf("int i: %i\n", ft_atoi(argv[1]));
	ft_printf("%d\n",res);
	res = ft_printf("unsigned int: %u\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n",res);
	res = ft_printf("hex low: %x\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n",res);
	res = ft_printf("hex up: %X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n",res);
	res = ft_printf("octal: %o\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n",res);
	res = ft_printf("hashtag hex low: %#x\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n",res);
	res = ft_printf("hashtag hex upp: %#X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n",res);
	res = ft_printf("hashtag octal: %#o\n", (unsigned int)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n",res);
	res = ft_printf("pointer: %p\n", (void*)strtoul(argv[1], NULL, 10));
	ft_printf("%d\n",res);
	res = ft_printf("int d with flag plus: %+d\n", ft_atoi(argv[1]));
	ft_printf("%d\n",res);
	res = ft_printf("int i with flag plus: %+i\n", ft_atoi(argv[1]));
	ft_printf("%d\n",res);
	res = ft_printf("int d with flag space: % d\n", ft_atoi(argv[1]));
	ft_printf("%d\n",res);
	res = ft_printf("int i with flag space: % i\n", ft_atoi(argv[1]));
	ft_printf("%d\n",res);
	res = ft_printf("int d with flag space and plus: %+ d\n", ft_atoi(argv[1]));
	ft_printf("%d\n",res);
	res = ft_printf("int i with flag space and plus: % +i\n", ft_atoi(argv[1]));
	ft_printf("%d\n",res);
	res = ft_printf("int d with length hh: %hhd\n", ft_atoi(argv[1]));
	ft_printf("%d\n",res);
	res = ft_printf("int d with length h: %hd\n", strtoull(argv[1], NULL, 10));
	ft_printf("%d\n",res);
	res = ft_printf("int d with length l: %ld\n", strtoull(argv[1], NULL, 10));
	ft_printf("%d\n",res);
	res = ft_printf("int d with length ll: %lld\n", strtoull(argv[1], NULL, 10));
	ft_printf("%d\n",res);
	res = ft_printf("int d with length j: %jd\n", strtoull(argv[1], NULL, 10));
	ft_printf("%d\n",res);
	res = ft_printf("int d with length z: %zd\n", strtoull(argv[1], NULL, 10));
	ft_printf("%d\n",res);
	res = ft_printf("unsigned int with length ll: %llu\n", strtoull(argv[1], NULL, 10));
	ft_printf("%d\n",res);
	res = ft_printf("hex up with length ll: %llX\n", strtoull(argv[1], NULL, 10));
	ft_printf("%d\n",res);
}
