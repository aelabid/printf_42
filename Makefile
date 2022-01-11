SRC = ft_printf.c ft_putchar.c ft_putlhexa.c ft_putnbr.c \
		ft_putpointer.c ft_putstr.c ft_putuhexa.c ft_putunbr.c

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
GCC = gcc

%.o: %.c ft_printf.h
	$(GCC) $(FLAGS) -c $<

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

all: $(NAME)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all