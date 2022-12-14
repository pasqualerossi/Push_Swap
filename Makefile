NAME = push_swap

CC = gcc

FLAGS = -Wall -Wextra -Werror

SOURCES  = ./logic/operations/push.c \
		   ./logic/operations/reverse.c \
		   ./logic/operations/rotate.c \
		   ./logic/operations/swap.c \
		   ./logic/main.c \
		   ./logic/utils/ft_split.c \
		   ./logic/utils/push_swap_utils_2.c \
		   ./logic/utils/push_swap_utils_3.c \
		   ./logic/utils/push_swap_utils.c \
		   ./logic/sorting/sort_3_numbers.c \
		   ./logic/sorting/sort_5_numbers.c \
		   ./logic/sorting/sort_beyond_3_and_5_numbers.c \

OBJECTS = $(SOURCES:.c=.o)

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) $(SOURCES) -Iheaders -o $(NAME)

all: $(NAME)

clean:
	@rm -rf ./logic/*.o
	@rm -rf ./logic/operations/*.o
	@rm -rf ./logic/sorting/*.o
	@rm -rf ./logic/utils/*.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all