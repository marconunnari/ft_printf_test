#include "libft.h"

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

int main()
{
    int r;
    r = ft_printf("%sred %sgreen\n", KRED, KGRN);
    ft_printf("r = %d\n", r);
    r = ft_printf("%smagenta\n", KMAG);
    ft_printf("r = %d\n", r);
    r = ft_printf("%scyan\n", KCYN);
    ft_printf("r = %d\n", r);
    r = ft_printf("%swhite\n", KWHT);
    ft_printf("r = %d\n", r);
    r = ft_printf("%snormal\n", KNRM);
    ft_printf("r = %d\n", r);

    return 0;
}
