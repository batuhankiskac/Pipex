# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkiskac <bkiskac@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/07 12:01:58 by bkiskac           #+#    #+#              #
#    Updated: 2025/01/09 20:52:15 by bkiskac          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = pipex

SRCS = src/pipex.c src/pipex_utils.c
SRCS_BONUS = src/pipex_bonus.c src/pipex_utils_bonus.c

OBJS = $(SRCS:.c=.o)
LIBS = libft/libft.a

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft
	$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	make clean -C libft

fclean: clean
	rm -rf $(NAME)
	make fclean -C libft

re: fclean all

bonus:
	make -C libft
	$(CC) $(CFLAGS) $(SRCS_BONUS) $(LIBS) -o $(NAME)

.PHONY: all clean fclean re
