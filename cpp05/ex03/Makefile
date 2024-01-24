NAME = ex03

SRCS =	./main.cpp\
		./Bureaucrat.cpp\
		./AForm.cpp\
		./PresidentialPardonForm.cpp\
		./RobotomyRequestForm.cpp\
		./ShrubberyCreationForm.cpp\

DEPENDENCIES =	$(SRCS)\
				./Makefile\
				./Bureaucrat.hpp\
				./AForm.hpp\
				./PresidentialPardonForm.hpp\
				./RobotomyRequestForm.hpp\
				./ShrubberyCreationForm.hpp\

CC = g++

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
