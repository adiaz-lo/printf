/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:32:16 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/09/26 16:32:17 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd_u(long n, int fd)
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
