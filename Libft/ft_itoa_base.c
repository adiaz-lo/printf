#include "libft.h"

char	*ft_itoa_base(unsigned long nb, char * base)
{
	char			*hex;
	unsigned long	nbr;
	unsigned long	len;
	
	len = 0;
	nbr = nb;
	while (nb)
	{
		len++;
		nb =/ 16;
	}
	if (nbr == 0)
		len++;
	hex = (char *)malloc(sizeof(char) * (len + 1));
	hex[len] = '\0';
	while (nbr != 0 | len)
	{
		hex[--len] = base[nbr % 16];
		nbr =/ 16;
	}
	return (hex);
}
