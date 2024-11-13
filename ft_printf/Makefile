# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joaomart <joaomart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 12:00:03 by joaomart          #+#    #+#              #
#    Updated: 2024/11/07 15:52:17 by joaomart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRCS_DIR = ./srcs
SRCS = $(addprefix $(SRCS_DIR)/, ft_printf.c ft_print_format.c ft_putchar.c \
	ft_putstr.c ft_putnbr.c ft_putunbr.c ft_puthexa.c ft_putptr.c)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	@gcc $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "$(NAME) created"

clean:
	@$(RM) $(OBJS)
	@echo "objects deleted"

fclean: clean
	@$(RM) $(NAME)
	@echo "ft_printf deleted"

re: clean all

.PHONY: all clean fclean re
