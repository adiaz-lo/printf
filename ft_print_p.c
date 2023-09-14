/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:54:15 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/08/04 12:54:18 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(unsigned long unum)
{
//	int		count;
	char	*str;

//	count = 0;
	str = ft_itoa_base(unum, HEXL);
		if (unum == 0)
		return (0);
	return (ft_print_s(str));
}
