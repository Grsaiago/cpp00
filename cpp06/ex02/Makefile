NAME =		ex02

SRCS =		./main.cpp \
		./Base.cpp \
		./A.cpp \
		./B.cpp \
		./C.cpp \
		./func.cpp \

DEPENDENCIES =	$(SRCS) \
		./Makefile \
		./Base.hpp \
		./A.hpp \
		./B.hpp \
		./C.hpp \
		./func.hpp \

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
