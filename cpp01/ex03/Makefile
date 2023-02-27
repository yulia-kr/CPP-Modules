# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 13:57:33 by ykruhlyk          #+#    #+#              #
#    Updated: 2023/02/26 14:18:42 by ykruhlyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapons

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

CC = c++

RM = RM

CFLAGS = -Wall -Werror -Wextra -std=c++98

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:		
			$(RM) -f $(NAME)

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re