#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long nbr;
    char c;

    nbr = (long)n;

    if (fd < 0)
        return;

    if (n < 0) {
        write(fd, "-", 1);
        nbr = -nbr;
    }

    if (nbr < 10) {
        c = nbr + '0';
        write(fd, &c, 1);
    } else {
        c = nbr % 10 + '0';
        ft_putnbr_fd(nbr / 10, fd);
        write(fd, &c, 1);
    }
}