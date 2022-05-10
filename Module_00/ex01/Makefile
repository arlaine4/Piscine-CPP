NAME = sad_anu 

SRC = shitty_anu.cpp contact.cpp

OBJ = shitty_anu.o contact.o

HEADER = header.hpp contact.hpp

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
