# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsaiago <gsaiago@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/03 17:27:01 by gsaiago           #+#    #+#              #
#    Updated: 2023/06/05 22:55:47 by gsaiago          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ff

SRCS	=	./main.cpp \
		  	./MateriaSource.cpp \
			./AMateria.cpp \
		  	./Cure.cpp \
		  	./Ice.cpp \
		  	./Character.cpp \
		  	./SingleList.cpp \

INCLUDES	=	./IMateriaSource.hpp \
				./MateriaSource.hpp \
				./AMateria.hpp \
				./Cure.hpp \
				./Ice.hpp \
				./ICharacter.hpp \
				./Character.hpp \
				./SingleList.hpp \

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
