#include "ft_printf.h"

int	ft_print_x(unsigned long num)
{
	char	*str;

	str = ft_itoa_base(num, HEXL);
	ft_putstr_fd(str, 1);
	free (str);
	return (ft_strlen(str));
}
