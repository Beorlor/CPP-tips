NAME    = phonebook

CC      = c++
FLAGS   = -Wall -Wextra -Werror -std=c++98
RM      = rm -rf

SRC     = main.cpp Contact.cpp PhoneBook.cpp
OBJ     = $(SRC:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	echo "Executable ready."

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	echo "Object files removed."

fclean: clean
	$(RM) $(NAME)
	echo "Executable removed."

re: fclean all
