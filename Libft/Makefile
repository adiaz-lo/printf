# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 12:42:32 by adiaz-lo          #+#    #+#              #
#    Updated: 2023/09/26 11:57:07 by adiaz-lo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CCFLAGS = -g3 -Wall -Werror -Wextra

INCLUDE = libft.h

LIB = ar -rcs

RM = rm -f

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa_base.c ft_putnbr_fd_u.c

SRCS_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

#SRCS_EXTRA = ft_itoa_base.c

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

#OBJS_EXTRA = $(SRCS_EXTRA:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

$(NAME) : $(OBJS) $(OBJS_BONUS) $(INCLUDE)
	$(LIB) $(NAME) $(OBJS) $(OBJS_BONUS) 

bonus : $(OBJS_BONUS) $(INCLUDE)
	$(LIB) $(NAME) $(OBJS_BONUS)

#extra : $(OBJS_EXTRA) $(INCLUDE)
#	$(LIB) $(NAME) $(OBJS_EXTRA)

clean : 
	$(RM) $(OBJS) $(OBJS_BONUS) #$(OBJS_EXTRA)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME) all
