SRCS = 	main.cpp Harl.cpp
C.O = ${SRCS:.c=.o}

NAME = harlFilter

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
