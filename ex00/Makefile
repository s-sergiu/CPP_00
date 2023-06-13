NAME = megaphone
CC = c++
FLAGS = -Wall -Werror -Wextra

SRC = megaphone.cpp
OBJ = megaphone.o
OBJ_DIR = obj

all:$(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

$(OBJ): $(SRC)
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME)

re: clean all

.PHONY:all clean fclean re
