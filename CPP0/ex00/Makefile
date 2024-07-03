NAME	= megaphone

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

.PHONY: all clean re

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) megaphone.cpp -o $(NAME)
	echo "Executable ready."

clean:
	$(RM) $(NAME)
	echo "Executable removed."

fclean: clean

re: fclean all
