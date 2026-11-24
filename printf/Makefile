# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/20 13:48:48 by rsiba             #+#    #+#              #
#    Updated: 2026/11/24 12:10:17 by rsiba            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -fPIC
SRCS = ft_printf.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putptr_fd.c \
		ft_puthex_fd.c  \
		ft_putmhex_fd.c \
		ft_putnbr_fd.c \
		ft_putunbr_fd.c
		
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		ar -rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re