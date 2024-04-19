NAME =		RPN

SRCS =		./main.cpp \
			./RPN.cpp \

DEPENDENCIES =	$(SRCS) \
				./RPN.hpp \

CC = c++

CFLAGS = -g -Wextra -std=c++98


all: $(NAME)

$(NAME): $(DEPENDENCIES)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "Compilation Done"

clean:
	@rm -f $(NAME)
	@echo "Cleaned"

re: clean all


.PHONY: all clean re
