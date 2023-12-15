/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:57:57 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/09/26 15:47:32 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define MAX_CONVS 9

typedef struct s_convers {
	char symbol;
	int (*fn)(va_list *);
} t_convers;

void 	convers_init() {
	t_convers conv[MAX_CONVS];

	convs[0] = (t_convers){'c', ft_print_c};
	convs[1].symbol = 's';
	convs[1].fn = ft_print_s;
	convs[2].symbol = 'p';
	convs[2].fn = ft_print_p;
	convs[3].symbol = 'i';
	convs[3].fn = ft_print_i;
	convs[4].symbol = 'd';
	convs[4].fn = ft_print_i;
	convs[5].symbol = 'u';
	convs[5].fn = ft_print_u;
	convs[6].symbol = 'x';
	convs[6].fn = ft_print_hexl;
	convs[7].symbol = 'X';
	convs[7].fn = ft_print_hexu;
	convs[8].symbol = '%';
	convs[8].fn = ft_print_c;
}

void	ft_conversion(char c, int *count, va_list *args)
{
	int i;

	i = 0;
	while (i < MAX_CONVS) {
		if (convs[i]->symbol == c) {
			convs[i]->fn(args);
		}
		++i;
	}
	if (c == 'c')
		*count += ft_print_c(va_arg(*args, int));
	if (c == 's')
		*count += ft_print_s(va_arg(*args, char *));
	if (c == 'p')
		*count += ft_print_p(va_arg(*args, unsigned long));
	if (c == 'i' || c == 'd')
		*count += ft_print_i(va_arg(*args, int));
	if (c == 'u')
		*count += ft_print_u(va_arg(*args, unsigned int));
	if (c == 'x')
		*count += ft_print_hexl(va_arg(*args, unsigned int));
	if (c == 'X')
		*count += ft_print_hexu(va_arg(*args, unsigned int));
	if (c == '%')
		*count += ft_print_c('%');
}

int	ft_printf(char const *str, ...)
{
	va_list		args;
	int			count;
	int			i;

	va_start(args, str);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			count++;
		}
		else if (str[i + 1])
		{
			ft_conversion(str[i + 1], &count, &args);
			i++;
		}
		i++;
	}
	return (count);
}
