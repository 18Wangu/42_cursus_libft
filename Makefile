cc = gcc
FLAGS = -Wall -Wextra -Werror
FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c
OBJ = $(FILES:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(cc) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) libft.h.gch

fclean: clean
	rm -f $(NAME)

re: fclean all
