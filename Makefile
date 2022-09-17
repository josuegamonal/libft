#-*-Makefile-*-

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
LDFLAGS =
OBJFILES = ft_atoi.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_strlen.o ft_strncmp.o ft_tolower.o ft_toupper.o m.o 
TARGET = a.out

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)  
clean:
	rm -f $(OBJFILES) $(TARGET) *~
fclean:
re: