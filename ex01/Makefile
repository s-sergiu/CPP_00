NAME = myPhoneBook
CC = c++
FLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = main.cpp \
	  Contact.cpp \
	  PhoneBook.cpp

OBJ = main.o \
	  Contact.o \
	  PhoneBook.o

all:$(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME)

re: clean all

.PHONY:all clean fclean re
