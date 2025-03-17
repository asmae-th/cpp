CC = c++
FLAGS = -Wall -Werror -Wextrat -std=c++98
NAME = Account
SRC = Account.cpp/ tests.cpp
OBJ = $(SRC: .cpp = .o)

all : $(NAME)


$(NAME):
	$(CC) $(FLAGS) -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re