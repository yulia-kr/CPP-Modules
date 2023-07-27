NAME = RPN
SRC = main.cpp RPN.cpp
OBJ = $(SRC:.cpp=.o)

CC = c++
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	$(RM) $(NAME)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
