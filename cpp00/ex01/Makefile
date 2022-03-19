# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melghoud <melghoud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/05 21:19:26 by melghoud          #+#    #+#              #
#    Updated: 2022/01/05 21:33:30 by melghoud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

FLAGS = -Wall -Wextra -Werror

CP = clang++ -std=c++98

SRC = main.cpp Contact.cpp PhoneBook.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "no *.o"

fclean: clean
	rm -rf $(NAME)

re: fclean all