Reset			=		\033[0m						# Text Reset
R				=		\033[0;31m					# Red
G				=		\033[0;32m					# Green

NAME			=		Phone_Book

SRCS			=		main.cpp \
						PhoneBook.cpp \
						Contact.cpp \

OBJS			=		$(SRCS:.cpp=.o)

DEBUG			=		-g -fsanitize=address

FLAGS			=		-Wall -Werror -Wextra -std=c++98

.c.o			:
						@c++ $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME)			:		$(OBJS)
						@c++ $(FLAGS) $(DEBUG) $(OBJS) -o $(NAME)
						@echo "$(G)$(NAME) has been created$(Reset)"

clean			:
						@rm -f $(OBJS)
						@echo "$(R)Objects have been removed$(Reset)"

fclean			:		clean
						@rm -f $(NAME)
						@echo "$(R)$(NAME) has been removed$(Reset)"

all				:		$(NAME)

re				:		fclean all

.PHONY			:		clean fclean all re