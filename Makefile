CC = gcc
NAME = libftprintf
CFLAGS = -Wall -Wextra -Werror
SRC = ft_putchar \
ft_printf\
ft_strpint\
ft_putstr\
ft_putadres\
ft_putdec\
ft_putudec\
ft_puthexlow\
ft_puthexhigh\

SRCS = $(addsuffix .c, $(SRC))
OBJ	= $(addsuffix .o, $(SRC))




all: ar

out: ar
	$(CC) $(CFLAGS) test.c -L. $(NAME).a

ar: comp lib
	ar rcs $(NAME).a $(OBJ) libft/*.o

comp: 
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	rm $(OBJ) || true

fclean: clean
	rm $(NAME).a || true

re: fclean all

lib:
	cd libft && make comp