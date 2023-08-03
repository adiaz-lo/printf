/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:57:57 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/07/21 10:57:59 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_conversion(char c, int *count)
{
	if (c == 'c')
		*count += ft_print_c();
	if (c == 's')
		*count += ft_print_s();
	if (c == 'p')
		*count += ft_print_p();
	if (c == 'd')
		*count += ft_print_d();
	if (c == 'i')
		*count += ft_print_i();
	if (c == 'u')
		*count += ft_print_u();
	if (c == 'x')
		*count += ft_print_x();
	if (c == 'X')
		*count += ft_print_X();
	if (c == '%')
		*count += ft_print_pj();
}

int	ft_printf(char const *str, ...)
{
	va_list 	args;
	va_start	(args, str);
	int			count;
	int			i;

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
			ft_conversion(str[i + 1], &count, str);
			i++;
		}
		i++;
	}
	return (count);
}
