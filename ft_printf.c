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
			ft_conversion(str[i + 1], &count);
			i++;
		}
		i++;
	}
	return (count);
}

/*int	ft_printf(char const *str)
{
	int i;

	i = 0;
	if(str[i])
	{
		ft_putstr_fd((char *)str, 1);
		i++;
	}
	return (1);
}*/
