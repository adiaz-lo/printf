/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:32:16 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/12/15 11:28:59 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdint.h"

int	ft_putnbr_fd_u(uint64_t n, int fd)
{
	long	nb;
	int		nprint;

	nb = n;
	nprint = 0;
	if (nb > 9)
	{
		nprint = ft_putnbr_fd(nb / 10, fd);
		nb = nb % 10;
	}
	if (nb <= 9)
	{
		ft_putchar_fd(nb + '0', fd);
		nprint++;
	}
	return (nprint);
}
