cc = gcc
FLAGS = -Wall -Wextra -Werror
FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c
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
