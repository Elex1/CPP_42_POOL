# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melghoud <melghoud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/12 17:20:24 by melghoud          #+#    #+#              #
#    Updated: 2022/02/12 17:20:25 by melghoud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

FLAGS = -Wall -Wextra -Werror

CP = c++ -std=c++98

SRC = main.cpp

all: $(NAME)

$(NAME):
	$(CP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "no *.o"

fclean: clean
	rm -rf $(NAME)

re: fclean all