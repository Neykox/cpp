SRCS = 	main.cpp ClapTrap.cpp
C.O = ${SRCS:.cpp=.o}

NAME = claptrap

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(C.O)
	$(CC) $(FLAGS) $(C.O) -o $(NAME)

# $(OBJ) :
# 	$(CC) $(FLAGS) $(SRCS)

clean :
	rm -f $(C.O)

fclean : clean
	rm -f $(NAME)

re : fclean all







SRC_NAME = megaphone.cpp
OBJ_NAME = $(SRC_NAME:.cpp=.o)

NAME = megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(addprefix obj/, $(OBJ_NAME))
SRC = $(addprefix src/, $(SRC_NAME))


$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

obj/%.o: src/%.cpp
	mkdir -p obj/
	$(CC) $(FLAGS) -o $@ -c $<

all: $(NAME)

clean:
	rm -rf obj

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re


# man c++