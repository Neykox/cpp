SRCS = 	main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
C.O = ${SRCS:.cpp=.o}

NAME = brain

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
