# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 22:51:35 by gsaiago           #+#    #+#              #
#    Updated: 2023/05/04 23:30:20 by gsaiago          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = example

SRCS = ./main.cpp\

CC = g++

CFLAGS = -std=c++98 -g -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) 

clean:
	@rm -f $(NAME)
	@rm -rf $(NAME).dSYM

re: clean all

.PHONY: all clean re
