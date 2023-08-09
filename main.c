#include "ft_printf.h"

int	main()
{
	char	*str;
	char	*strn;

	str = "Hola, me llamo Halfonso";
	strn = NULL;
//	printf("printf:\nHola, me llamo Halfonso ñ.\n");
//	printf("printf:\n\n");
//	printf("printf:\n%s\n", str);
	printf("printf Characters Printed: %d\n", printf("printf:\nHola, me llamo Halfonso ñ.\n"));
//	ft_printf("ft_printf:\nHola, me llamo Halfonso ñ.\n");
//	ft_printf("ft_printf:\n\n");
//	ft_printf("");
	printf("ft_printf Characters Printed: %d\n", ft_printf("ft_printf:\nHola, me llamo Halfonso ñ.\n"));
	//Test with char
	printf("ft_printf Characters Printed: %d\n", ft_printf("ft_printf:\n%c\n", 'n'));
	printf("printf Characters Printed: %d\n", printf("ft_printf:\n%c\n", 'n'));
	//Test with NULL string
	printf("%d\n", printf("%s", strn));
	printf("%d\n", ft_printf("%s", strn));
	//Test with variadic
//	printf("%s\n", str);
//	ft_printf("%s\n", str);
	return (0);
}
