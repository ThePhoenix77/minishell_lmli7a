# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/21 14:21:59 by eaboudi           #+#    #+#              #
#    Updated: 2024/07/26 12:01:49 by eaboudi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = minishell
HEADER = minishell.h
CFILES = linked_list_fun.c utils_fun.c main.c
OFILES = $(CFILES:%.c=%.o)
LIBFT_DIR = libft
RM = rm -rf

all: $(NAME)

$(NAME): $(OFILES)
	make -C $(LIBFT_DIR)
	$(CC) $(OFILES) -L $(LIBFT_DIR) -lft -lreadline -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) -c $< -o $@

clean:
	make clean -C $(LIBFT_DIR)
	$(RM) -rf $(OFILES)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	$(RM) -rf $(NAME)

re: fclean all
