# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/28 16:37:40 by ykruhlyk          #+#    #+#              #
#    Updated: 2023/03/31 13:10:31 by ykruhlyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

SRC = main.cpp Cat.cpp Dog.cpp Animal.cpp Brain.cpp WrongAnimal.cpp WrongCat.cpp

CC = c++

RM = rm -rf

CFLAGS = -Wall -Werror -Wextra -std=c++98

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:		
			$(RM) -f $(NAME)

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re