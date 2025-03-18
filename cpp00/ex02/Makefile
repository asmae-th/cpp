CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = Account
SRC = tests.cpp Account.cpp
OBJ = $(SRC: .cpp = .o)

all : $(NAME)


$(NAME):$(OBJ)
	$(CC) $(FLAGS) -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re