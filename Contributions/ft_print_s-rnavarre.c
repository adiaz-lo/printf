/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:51:37 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/12/15 11:20:53 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(char	*str)
{
	int			count;
	size_t		len;

	if (str == NULL)
	{
		return (write(1, "(null)", 6));
	}
	count = 0;
	len = ft_strlen(str);
	count += write(1, str, len);
	return (count);
}
