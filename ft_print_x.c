#include "ft_printf.h"

int	ft_print_x(unsigned long num)
{
	int	count;

	count = 0;
	count = ft_putnbr_fd(num, 1);
	return (count);
}
