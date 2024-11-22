cc = gcc
FLAGS = -Wall -Wextra -Werror
FILES = ft_isalpha.c
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
