# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 09:03:16 by ykruhlyk          #+#    #+#              #
#    Updated: 2023/03/26 11:33:49 by ykruhlyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scavtrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

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