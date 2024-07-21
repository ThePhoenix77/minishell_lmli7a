# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/24 18:55:06 by eaboudi           #+#    #+#              #
#    Updated: 2024/07/21 11:05:22 by tboussad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell

HEADER = minishell.h

CFILES = main.c history_utils.c

OFILES = $(CFILES:%.c=%.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = libft

all: $(NAME)

$(NAME): $(OFILES)
	$(MAKE) -C $(LIBFT_DIR)
	$(MAKE) bonus -C $(LIBFT_DIR)
	$(CC) $(OFILES) -L $(LIBFT_DIR) -lft -lreadline -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) -c $< -o $@

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) -rf $(OFILES)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(RM) -rf $(NAME)

re: fclean all
