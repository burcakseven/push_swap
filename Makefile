NAME = push_swap

SRCS = apply.c main_sort.c main.c ps_double_functions.c ps_functions.c \
	sort_utils_one.c sort_utils_two.c sort_utils_three.c sort_utils_four.c \
	sort_utils_five.c sort_utils_six.c utils_one.c utils_two.c utils_three.c \
	stack_utils.c
OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
CC = gcc

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME) $(BONUS)


re: fclean all

.PHONY: all clean fclean re
