NAME = Bureaucrat

FLAGS = -Wall -Wextra -Werror

CP = c++ -std=c++98

SRC = Bureaucrat.cpp main.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
all: $(NAME)

$(NAME):
	$(CP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "no *.o"

fclean: clean
	rm -rf $(NAME)

re: fclean all