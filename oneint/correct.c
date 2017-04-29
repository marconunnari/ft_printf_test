#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	printf("int d: %d\n", atoi(argv[1]));
	printf("int i: %i\n", atoi(argv[1]));
	printf("unsigned int: %u\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("hex low: %x\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("hex up: %X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("octal: %o\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("hashtag hex low: %#x\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("hashtag hex upp: %#X\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("hashtag octal: %#o\n", (unsigned int)strtoul(argv[1], NULL, 10));
	printf("pointer: %p\n", (void*)strtoul(argv[1], NULL, 10));
	printf("int d with flag plus: %+d\n", atoi(argv[1]));
	printf("int i with flag plus: %+i\n", atoi(argv[1]));
	printf("int d with flag space: % d\n", atoi(argv[1]));
	printf("int i with flag space: % i\n", atoi(argv[1]));
	printf("int d with flag space and plus: %+ d\n", atoi(argv[1]));
	printf("int i with flag space and plus: % +i\n", atoi(argv[1]));

}
