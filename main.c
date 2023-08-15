#include "ft_printf.h"

int	main()
{
	char		*str;
	char		*strn;
//	long		lnum;
	int			decimal;
	float		fnum;
	int			inum;
	unsigned	unum;

	str = "Hola, me llamo Halfonso";
	strn = NULL;
	decimal = 42;
	fnum = 42.24;
	inum = -42;
	unum = 21;
//	printf("printf:\nHola, me llamo Halfonso ñ.\n");
//	printf("printf:\n\n");
//	printf("printf:\n%s\n", str);
	printf("printf Characters Printed: %d\n", printf("Hola, me llamo Halfonso ñ.\n"));
//	ft_printf("ft_printf:\nHola, me llamo Halfonso ñ.\n");
//	ft_printf("ft_printf:\n\n");
//	ft_printf("");
	printf("ft_printf Characters Printed: %d\n", ft_printf("Hola, me llamo Halfonso ñ.\n"));
	//Test with char
	printf("ft_printf Characters Printed: %d\n", ft_printf("%c\n", 'n'));
	printf("printf Characters Printed: %d\n", printf("%c\n", 'n'));
	//Test with NULL string
	printf("%d\n", printf("%s", strn));
	printf("%d\n", ft_printf("%s", strn));
	//Test of decimal numbers
	printf("printf %%d Decimal test: %d\n", decimal);
	ft_printf("ft_printf %%d Decimal test: %d\n", decimal);
	printf("printf %%i Decimal test: %i\n", decimal);
	ft_printf("ft_printf %%i Decimal test: %i\n", decimal);
	//Test of decimal unsigned number
	printf("printf %%u Decimal test: %d\n", decimal);
	printf("printf Decimal unsigned number printed: %d\n", printf("printf %%u Decimal test: %d\n", decimal));
	ft_printf("ft_printf %%u Decimal test: %d\n", decimal);
	ft_printf("ft_printf Decimal unsigned number printed: %d\n", ft_printf("ft_printf %%u Decimal test: %d\n", decimal));
	//Test of decimal unsigned negative number
	printf("printf %%u Decimal negative test: %u\n", unum);
	printf("printf Decimal negative unsigned number printed: %d\n", printf("printf %%u Decimal negative test: %u\n", unum));
	ft_printf("ft_printf %%u Decimal negative test: %u\n", unum);
	ft_printf("ft_printf Decimal negative unsigned number printed: %d\n", ft_printf("ft_printf %%u Decimal negative test: %u\n", unum));
	//Test of decimal negative number using %u conversion
	printf("printf %%u Decimal negative test: %u\n", inum);
	printf("printf Decimal negative number printed: %d\n", printf("printf %%u Decimal negative test: %u\n", inum));
	ft_printf("ft_printf %%u Decimal negative test: %u\n", inum);
	ft_printf("ft_printf Decimal negative unsigned number printed: %d\n", ft_printf("ft_printf %%u Decimal negative test: %u\n", inum));
	//Test of decimal negative number
	printf("printf %%d Decimal negative test: %d\n", inum);
	printf("printf Decimal negative number printed: %d\n", printf("printf %%d Decimal negative test: %d\n", inum));
	ft_printf("ft_printf %%d Decimal negative test: %d\n", inum);
	ft_printf("ft_printf Decimal negative unsigned number printed: %d\n", ft_printf("ft_printf %%d Decimal negative test: %d\n", inum));
	//Test of float number
	printf("printf %%u Float test: %d\n", inum);
	printf("printf %%u Float test: %f\n", fnum);
	ft_printf("ft_printf %%u Float test: %d\n", fnum);
	//Test of long data types
	printf("long size is: %lu\n", sizeof(long));
	printf("long long int size is: %lu\n", sizeof(unsigned long ));
	printf("long long int size is: %lu\n", sizeof(long long int));
	printf("unsigned int size is: %lu\n", sizeof(unsigned int));
	printf("double size is: %lu\n", sizeof(double));
	//Test of pointer
	printf("Test pointer: %p\n", &str);
//	ft_printf("Test pointer: %p\n," &str);
	//Test with variadic
//	printf("%s\n", str);
//	ft_printf("%s\n", str);
//	Test of %
	printf("Percentage test:%%\n");
	ft_printf("Percentage test:%%\n");
	return (0);
}
