# NAME = libft.a
# CC = cc
# FLAGS = -
# SRC = ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcmp.c ft_memmove.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_tolower.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memchr.c ft_memcpy.c ft_memset.c ft_strlcat.c ft_strlen.c ft_strrchr.c ft_toupper.c

# OBJ = $(SRC:.c=.o)

# all: $(NAME)

# $(NAME): $(OBJ)
# 	$(CC) $(FLAGS) -o $@ $(OBJ)

# %.o: %.c
# 	$(CC) $(FLAGS) -c $< -o $@

# clean:
# 	rm -f $(OBJ)

# fclean:
# 	rm -f $(OBJ) $(NAME)

# re: fclean all

# .PHONY: all clean fclean re

NAME = libft.a
HFILE = libft.h

SOURCES = ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcmp.c ft_memmove.c ft_strchr.c \
ft_strlcpy.c ft_strncmp.c ft_tolower.c ft_bzero.c ft_isalpha.c ft_isdigit.c \
ft_memchr.c ft_memcpy.c ft_memset.c ft_strlcat.c ft_strlen.c ft_strrchr.c \
ft_tolower.c ft_toupper.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c


OBJECTS = $(SOURCES:.c=.o)
CFLAGS = -Wall -Werror -Wextra
all: $(NAME)
$(NAME): $(OBJECTS) $(HFILE)
	@ar -rcs $(NAME) $(OBJECTS) $(HFILE)
%.o: %.c
	cc $(FLAGS) -c $< -o $@
clean :
	rm -f $(OBJECTS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re



