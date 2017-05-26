#include "libft.h"
#include <limits.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int fd = open(argv[1], O_WRONLY | O_APPEND, S_IRWXU );
	if (fd == -1)
		ft_putendl(argv[1]);
	int res = ft_dprintf(fd, "%s\n", "hello");
	ft_printf(" r%d\n", res);
}
