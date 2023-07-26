# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/21 12:49:56 by adiaz-lo          #+#    #+#              #
#    Updated: 2023/07/21 12:51:49 by adiaz-lo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

DEPS = Libft/libft.a

CC = gcc

CCFLAGS = -Wall -Werror -Wextra

INCLUDE = ft_printf.h

LIB = ar -rcs

RM = rm -f

SRCS = ft_printf.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

$(DEPS)	: 
	make -C Libft

$(NAME) : $(DEPS) $(OBJS) $(INCLUDE)
	$(LIB) $(NAME) $(OBJS)

clean : 
	$(RM) $(OBJS)
	make -C Libft fclean

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME) all
