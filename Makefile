SRC =    matrix.c \

OBJ = $(SRC:.c=.o)

CFLAGS = -W -Wall -Wextra

NAME = matrix

all: $(NAME)

$(NAME): $(OBJ)
		$(CC)  -lncurses $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:    clean
	$(RM) $(NAME)

re:    fclean all
