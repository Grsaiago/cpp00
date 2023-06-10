# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 09:20:27 by gsaiago           #+#    #+#              #
#    Updated: 2023/06/10 12:16:22 by gsaiago          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

SRCS = ./main.cpp\
	   ./Fixed.cpp\

CC = c++

CFLAGS = -std=c++98 -g -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) 

clean:
	@rm -f $(NAME)
	@rm -rf $(NAME).dSYM

re: clean all

fclean: clean

.PHONY: all clean re fclean
