NAME =		PmergeMe

SRCS =		./main.cpp \
			PmergeMe.cpp \

DEPENDENCIES =	$(SRCS) \
				PmergeMe.hpp \

CC = c++

CFLAGS = -g -Wall -Wextra -Werror -std=c++98


all: $(NAME)

$(NAME): $(DEPENDENCIES)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "Compilation Done"

clean:
	@rm -f $(NAME)
	@echo "Cleaned"

re: clean all

t: all
	@./$(NAME) $$(shuf -i 1-100 | tr '\n' ' ')

.PHONY: all clean re t
