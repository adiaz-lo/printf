/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:20:08 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/07/17 12:30:14 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "Libft/libft.h"

# ifndef HEXL
#  define HEXL "0123456789abcdef"
# endif

# ifndef HEXU
#  define HEXU "0123456789ABCDEF"
# endif

//	MANDATORY

int		ft_printf(char const *str, ...);
void	ft_conversion(char c, int *count, va_list args);
int		ft_print_s(char	*str);
int		ft_print_c(char c);
int		ft_print_p(unsigned long unum);
int		ft_print_i(int num);
int		ft_print_u(unsigned int num);
int		ft_print_hexl(unsigned long num);
int		ft_print_hexu(unsigned long num);

#endif
