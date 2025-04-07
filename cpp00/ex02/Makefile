
CC = c++
FLAGS = -std=c++98  -Wall -Werror -Wextra #-MMD
NAME = Account
INCLUDES = Account.hpp
SRC = tests.cpp Account.cpp
OBJ = $(SRC:.cpp=.o)

DEP	=	$(OBJ:.o=.d)

all		: $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME)	:  $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -rf $(OBJ)
fclean	: clean
	rm -rf $(NAME)

re	: fclean all

# -include $(DEP)
.PHONY: all clean fclean re
