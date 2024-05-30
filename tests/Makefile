# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 17:48:45 by rohoffma          #+#    #+#              #
#    Updated: 2024/05/30 17:30:48 by rohoffma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c  ../ft_printf.c ../basic_print_helpers.c
OBJS = $(SRCS:.c=.o)

NAME = tests

all: $(NAME)

#libftprintf: $(OBJS)
#	$(CC) $(CFLAGS) $(OBJS) -o libftprintf

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBS) -lbsd
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
