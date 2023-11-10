#include "shell.h"

/**
 *print_num_fd - A func that print number.
 *@n: arg 1.
 *@fd: arg 2.
 */
void	print_num_fd(int n, int fd)
{
	if (n < 10)
		write(fd, &"0123456789"[n % 10], 1);
	else
	{
		print_num_fd(n / 10, fd);
		print_num_fd(n % 10, fd);
	}
}
