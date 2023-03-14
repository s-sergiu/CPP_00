NAME = megaphone
CC = c++
FLAGS = -Wall -Werror -Wextra

SRC = $(wildcard *.cpp)
OBJ = $(SRC:%.cpp=obj/%.o)
OBJ_DIR = obj

all:$(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

obj/%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

clean: 
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME)

re: clean all

.PHONY:all clean fclean re
