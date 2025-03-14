CC = c++ 
FLAGS = -Wall -Wextra -Werror  -std=c++98
EX = megaphone
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all : $(EX)

$(EX) : $(OBJ)
	$(CC) $(SRC) -o $(EX) $(FLAGS)
clean :
	rm $(OBJ)
fclean : clean
	rm $(EX)
re : fclean all