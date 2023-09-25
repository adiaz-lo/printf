#include "libft.h"

int	ft_putnbr_fd_u(long n, int fd)
{
	long	nb;
	int		nprint;

	nb = n;
	nprint = 0;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb > 9)
	{
		nprint = ft_putnbr_fd(nb / 10, fd);
		nb = nb % 10;
	}
	if (nb <= 9)
	{
		ft_putchar_fd(nb + '0', fd);
		nprint++;
	}
	return (nprint);
}
