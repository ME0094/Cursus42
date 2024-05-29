# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: martirod <martirod@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/27 15:10:10 by martirod          #+#    #+#              #
#    Updated: 2024/05/29 20:26:21 by martirod         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c \
	ft_putchar.c ft_putnbr_hexa.c ft_putnbr.c ft_putptr.c  ft_putstr\

OBJ = $(SRC:.c=.o)

CC = clang
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar rcs

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re