# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/21 12:49:56 by adiaz-lo          #+#    #+#              #
#    Updated: 2023/10/01 19:18:24 by bvelasco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

#DEPS_DIR = Libft

#DEPS_LIB = libft.a

DEPS = Libft/libft.a

CC = clang

CCFLAGS = -g3 -Wall -Werror -Wextra

INCLUDE = ft_printf.h

ARFLAGS = -rcs

RM = rm -f

SRCS = ft_printf.c ft_print_c.c ft_print_s.c ft_print_p.c ft_print_i.c ft_print_u.c ft_print_hexl.c ft_print_hexu.c

OBJS = $(SRCS:.c=.o)

TEST = main.c

TEST_OUT = ./a.out

all : $(NAME)

%.o : %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

$(DEPS): 
	make -C Libft

$(NAME): $(DEPS) $(INCLUDE) $(OBJS)
	cp $(DEPS) $(NAME)
	ar $(ARFLAGS) $(NAME) $(OBJS)

clean : 
	$(RM) $(OBJS)
	make -C Libft fclean

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME) all
