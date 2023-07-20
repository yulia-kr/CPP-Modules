NAME = btc

SRC = main.cpp BitcoinExchange.hpp BitcoinExchange.cpp

CC = c++

RM = rm -rf

CFLAGS = -Wall -Werror -Wextra -std=c++98

all:		$(NAME)

$(NAME):	main.o BitcoinExchange.o
	$(CC) $(CFLAGS) -o btc main.o BitcoinExchange.o

main.o: main.cpp BitcoinExchange.hpp
	$(CC) $(CFLAGS) -c main.cpp

BitcoinExchange.o: BitcoinExchange.cpp BitcoinExchange.hpp
	$(CC) $(CFLAGS) -c BitcoinExchange.cpp


clean:		
			$(RM) -f $(NAME)

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re