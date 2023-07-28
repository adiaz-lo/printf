#include "ft_printf.h"

int	main()
{
	char	*str;

	str = "Hola, me llamo Halfonso";
	printf("printf: Hola, me llamo Halfonso ñ.\n");
	ft_printf("ft_printf: Hola, me llamo Halfonso ñ.\n");
	//Test with variadic
//	printf("%s\n", str);
//	ft_printf("%s\n", str);
	return (0);
}
