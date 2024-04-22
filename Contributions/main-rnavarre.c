#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("%i\n%p\n", 50, "hola");
	ft_printf("%i\n%p\n", 50, "hola");
	return (0);
}
