SRCS = 	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
C.O = ${SRCS:.c=.o}

NAME = fragtrap

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
