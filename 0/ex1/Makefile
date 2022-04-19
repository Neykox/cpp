SRCS = 	phonebook.cpp contact.cpp
C.O = ${SRCS:.c=.o}

H = includes/megaphone.hpp
NAME = megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
DEBUG = -g
ADDRESS = -fsanitize=address

all : $(NAME)

$(NAME) :
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

address : clean
	$(CC) $(FLAGS) $(ADDRESS) $(SRCS) -o leak_adr

# clean :
# 	rm -f $(C.O)

# fclean : clean
# 	rm -f $(NAME)

# re : fclean all

clean :
	rm -f $(NAME)

re : clean all
