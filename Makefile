#-*-Makefile-*-
NAME = libft.a

SRC = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c \
ft_memset.c ft_bzero.c ft_strchr.c ft_memcpy.c ft_memmove.c ft_strrchr.c #ft_strlcpy.c #ft_strlcat.c \
 ft_memchr.c ft_memcmp.c ft_strnstr.c
 
BONUSSRC =

OBJ = $(SRC:.c=.o)

BONUSOBJ = $(BONUSSRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) -r $@ $?

bonus: $(OBJ) $(BONUSOBJ)
		$(AR) -r $(NAME) $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re