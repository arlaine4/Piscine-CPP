NAME = megaphone

SRC = megaphone.cpp

OBJ = megaphone.o

CC = clang++

CCFLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

.PHONY: all clean fclean re

all: $(NAME)

%.o:%.c
	$(CC) $(CCFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:
	@$(MAKE) fclean --no-print-directory
	@$(MAKE) all --no-print-directory
