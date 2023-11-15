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
ft_tolower.c ft_toupper.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c\
ft_strjoin.c ft_strtrim.c ft_atoi.c ft_itoa.c ft_strmapi.c ft_striteri.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJECTS = $(SOURCES:.c=.o)
BONUSOBJECT = $(BONUS:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar -rcs $(NAME) $(OBJECTS)

bonus: $(BONUSOBJECT) $(OBJECTS)
	@ar -rcs $(NAME) $(OBJECTS) $(BONUSOBJECT)

%.o: %.c
	cc $(FLAGS) -c $< -o $@
clean :
	rm -f $(OBJECTS) $(BONUSOBJECT)

fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re



