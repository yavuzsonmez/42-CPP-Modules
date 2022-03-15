NAME = fixed
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = *.cpp

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)

re: clean all

.PHONY: all clean re
