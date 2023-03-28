# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 09:03:16 by ykruhlyk          #+#    #+#              #
#    Updated: 2023/03/27 10:29:42 by ykruhlyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap

SRC = main.cpp ClapTrap.cpp FragTrap.cpp

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