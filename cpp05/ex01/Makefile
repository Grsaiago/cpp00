NAME = ex01

SRCS =	./main.cpp\
		./Bureaucrat.cpp\
		./Form.cpp\

DEPENDENCIES =	$(SRCS)\
				./Bureaucrat.hpp\
				./Form.hpp\
				./Makefile\

CC = c++

CFLAGS = -g -Wall -Werror -Wextra -std=c++98


all: $(NAME)

$(NAME): $(DEPENDENCIES)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "Compilation Done"

clean:
	@rm -f $(NAME)
	@echo "Cleaned"

re: clean all

low: clean
	@$(CC) -D ERROR_LOW $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "Compilation for low exception done"

high: clean
	@$(CC) -D ERROR_HIGH $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "Compilation for high exception done"

.PHONY: all clean re low high
