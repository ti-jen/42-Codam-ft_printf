CC = gcc
NAME = libftprintf
CFLAGS = -Wall -Wextra -Werror
FTOBJ = libft/ft_strlcpy.o\
libft/ft_itoa.o\

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


all: lib

# out: lib
# 	$(CC) $(CFLAGS) test.c -L. $(NAME).a

lib: comp libf
	ar rcs $(NAME).a $(OBJ) $(FTOBJ)

comp: 
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	rm $(OBJ) || true

fclean: clean
	rm $(NAME).a || true

re: fclean all

libf:
	cd libft && make comp