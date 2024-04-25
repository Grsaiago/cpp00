NAME =		RPN

SRCS =		./main.cpp \
			./RPN.cpp \

DEPENDENCIES =	$(SRCS) \
				./RPN.hpp \

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
	@echo 'Test 1: "8 9 * 9 - 9 - 9 - 4 - 1 +"'
	@./$(NAME) "8 9 * 9 - 9 - 9 - 4 - 1 +"
	@echo 'Test 2:  "7 7 * 7 -"'
	@./$(NAME) "7 7 * 7 -"
	@echo 'Test 3: "1 2 * 2 / 2 * 2 4 - +"'
	@./$(NAME) "1 2 * 2 / 2 * 2 4 - +"
	@echo 'Test 4: "(1 + 1)"'
	@./$(NAME) "(1 + 1)"

.PHONY: all clean re t
