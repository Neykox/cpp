SRCS = 	main.cpp Zombie.cpp zombieHorde.cpp
C.O = ${SRCS:.c=.o}

NAME = zombie

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) :
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

# clean :
# 	rm -f $(C.O)

# fclean : clean
# 	rm -f $(NAME)

# re : fclean all

clean :
	rm -f $(NAME)

re : clean all
