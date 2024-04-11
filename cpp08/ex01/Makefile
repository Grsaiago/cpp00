NAME =		ex01

SRCS =		./main.cpp \
		./Span.cpp \

DEPENDENCIES =	$(SRCS) \
		./Span.hpp \

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


.PHONY: all clean re
