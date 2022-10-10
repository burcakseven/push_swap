NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

SRCS = complex_sort.c controls_1.c controls_2.c push_swap.c push_swap_commands.c \
rotate_commands.c to_the_top.c use_commands.c

OBJS = $(SRCS:.c=.o)

LIBFT = libft/libft.a
PRINTF = printf/libftprintf.a

all = $(NAME)

$(NAME) = lib $(OBJS)
	$(CC) $(CFLAGS) $(PRINTF) $(LIBFT) -o $(NAME)

lib:
	cd libft && make
	cd printf && make

clean:
	cd libft && make clean
	cd printf && make fclean
	$(RM) $(OBJS)

fclean:
	cd libft && make fclean
	cd printf && make fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re


