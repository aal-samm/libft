NAME = libft.a
CC = cc
FLAGS = -
SRC = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_strlen.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $@ $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re





