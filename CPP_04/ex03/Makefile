Reset			=		\033[0m						# Text Reset
R				=		\033[0;31m					# Red
G				=		\033[0;32m					# Green

NAME			=		./Materia

HDRS			=		inc/Amateria.hpp \
						inc/IMateriaSource.hpp \
						inc/MateriaSource.hpp \
						inc/ICharacter.hpp \
						inc/Character.hpp \
						inc/Cure.hpp \
						inc/Ice.hpp \


SRCS			=		src/main.cpp \
						src/AMateria.cpp \
						src/Character.cpp \
						src/Cure.cpp \
						src/Ice.cpp \
						src/MateriaSource.cpp \

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