# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpena-ro <rpena-ro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/15 14:05:42 by rpena-ro          #+#    #+#              #
#    Updated: 2025/12/15 15:48:29 by rpena-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Werror -Wall -Wextra

SRCS = ft_formats.c ft_print_char.c ft_print_hex.c ft_print_nbr.c \
		ft_print_perc.c ft_print_ptr.c ft_print_str.c ft_print_unbr.c \
		ft_printf.c 

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a 

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJS) 
	
%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make clean -C $(LIBFT_DIR)
	@rm -f $(OBJS)

fclean: clean
	@make fclean -C $(LIBFT_DIR)
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
