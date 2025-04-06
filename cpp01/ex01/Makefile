CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = brainz
SRC = main.cpp newZombie.cpp Zombie.cpp randomChump.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)

re : fclean all
