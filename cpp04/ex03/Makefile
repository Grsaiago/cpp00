# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/03 17:27:01 by gsaiago           #+#    #+#              #
#    Updated: 2023/06/04 22:19:01 by gsaiago          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ff

SRCS	= ./main.cpp \
		  ./AMateria.hpp \
		  ./SingleList.cpp \

INCLUDES	= ./AMateria.hpp \
			  ./ICharacter.hpp \
			  ./Character.hpp \
			  ./IMateriaSource.hpp \
			  ./MateriaSource.hpp \

CFLAGS	= -std=c++98 -g -Wall -Wextra -Werror

CC		= c++

all: $(NAME)


$(NAME): $(SRCS) $(INCLUDES)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME).dSYM
	rm -f $(NAME)

re: clean all

fclean: clean

.PHONY: all clean re fclean
