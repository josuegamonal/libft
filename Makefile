#-*-Makefile-*-
SRC = m.c ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c

OBJ = $(SRC:%.c=%.o)

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

RM = /bin/rm -f
RMDIR = /bin/rmdir

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(wildcard $(OBJ)) # I also modified the clean rule

fclean: clean
	$(RM) $(NAME)

re: fclean all