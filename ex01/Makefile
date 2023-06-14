NAME = myPhoneBook
CC = c++
FLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = main.cpp 

OBJ = main.o

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
