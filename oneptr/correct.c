#include <stdio.h>

int		main(int argc, char **argv)
{
//	printf("");
        printf("unsigned int = %lu\n", sizeof(unsigned int));
        printf("long = %lu\n", sizeof(long));
        printf("pointer = %lu\n", sizeof(void*));
		char *str = "abc";
		long ptr = (long)str;
        printf("let see = %lu\n", ptr);

}
