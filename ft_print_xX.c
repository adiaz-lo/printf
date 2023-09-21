#include "ft_printf.h"

int	ft_print_xX(unsigned long num)
{
	char	*str;
	int		count;

	str = ft_itoa_base(num, HEXU);
	count = 0;
	ft_putstr_fd(str, 1);
	count= ft_strlen(str);
	free (str);
	return (count);
}
