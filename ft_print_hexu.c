/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_X.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 08:41:08 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/09/25 08:49:29 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexu(unsigned long num)
{
	char	*str;
	int		count;

	str = ft_itoa_base(num, HEXU);
	count = 0;
	ft_putstr_fd(str, 1);
	count = ft_strlen(str);
	free (str);
	return (count);
}
