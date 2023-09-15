#include "ft_printf.h"

int	ft_print_xX(unsigned long num)
{
	char	*str;

	str = ft_itoa_base(num, HEXU);
	ft_putstr_fd(str, 1);
	free (str);
	return (ft_strlen(str));
}
