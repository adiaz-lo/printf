/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:13:41 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/10/01 19:09:08 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa_base(unsigned long nb, char *base)
{
	char			*result;
	unsigned long	nbr;
	unsigned long	len;
	const size_t	base_len = ft_strlen(base);

	len = 0;
	nbr = nb;
	while (nb)
	{
		len++;
		nb /= base_len;
	}
	if (nbr == 0)
		len++;
	result = malloc(sizeof(char) * (len + 1));
	result[len] = '\0';
	while (nbr != 0 || len)
	{
		result[--len] = base[nbr % 16];
		nbr /= base_len;
	}
	return (result);
}
