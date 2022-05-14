Reset			=		\033[0m						# Text Reset
R				=		\033[0;31m					# Red
G				=		\033[0;32m					# Green

NAME			=		./Abstract

HDRS			=		inc/AAnimal.hpp \
						inc/Cat.hpp \
						inc/Dog.hpp \
						inc/Brain.hpp\

SRCS			=		src/main.cpp \
						src/AAnimal.cpp \
						src/Cat.cpp \
						src/Dog.cpp \
						src/Brain.cpp \

OBJS			=		$(SRCS:.cpp=.o)

DEBUG			=		-g -fsanitize=address

FLAGS			=		-Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98

.c.o			:
						@c++ $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME)			:		$(OBJS) $(HDRS)
						@c++ $(FLAGS) $(OBJS) -o $(NAME)
						@echo "$(G)$(NAME) has been created$(Reset)"

dev				:		$(OBJS)
						@c++ $(OBJS) -o $(NAME)
						@echo "$(R)Compiling without flags WARNING !$(Reset)"
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