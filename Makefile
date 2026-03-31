CC = gcc
NAME = ft_printf
CFLAGS = -Wall -Wextra -Werror
CODE = ft_printf ft_putchar

SRC = ft_putchar \
ft_printf\
ft_strpint\
ft_putstr\
ft_putadres\
ft_putdec\
ft_putint\
ft_puthexlow\
ft_puthexhigh\

SRCS = $(addsuffix .c, $(SRC))
OBJ	= $(addsuffix .o, $(SRC))




all: ar

test: ar
	$(CC) $(CFLAGS) test.c -L. $(NAME).a libft/libft.a
ar: comp
	ar rcs $(NAME).a $(OBJ)

comp: lib
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	rm $(OBJ) || true

fclean: clean
	rm $(NAME).a || true

re: fclean all

lib:
	cd libft && make all