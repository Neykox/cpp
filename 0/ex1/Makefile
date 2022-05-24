SRCS = 	main.cpp PhoneBook.cpp Contact.cpp
C.O = ${SRCS:.cpp=.o}

NAME = phonebook

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(C.O)
	$(CC) $(FLAGS) $(C.O) -o $(NAME)

clean :
	rm -f $(C.O)

fclean : clean
	rm -f $(NAME)

re : fclean all
