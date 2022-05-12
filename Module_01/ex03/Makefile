NAME = violence

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ = main.o HumanA.o HumanB.o Weapon.o

HEADER = HumanA.hpp HumanB.hpp Weapon.hpp

CC = clang++

CCFLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

.PHONY: all clean fclean re

all: $(NAME)

%.o:%.c
	$(CC) $(CCFLAGS) -I $(HEADER) -o $@ -c $<

$(NAME): $(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:
	@$(MAKE) fclean --no-print-directory
	@$(MAKE) all --no-print-directory
